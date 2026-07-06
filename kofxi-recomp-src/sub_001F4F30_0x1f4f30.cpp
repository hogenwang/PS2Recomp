#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4F30
// Address: 0x1f4f30 - 0x1f5028
void sub_001F4F30_0x1f4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4F30_0x1f4f30");
#endif

    switch (ctx->pc) {
        case 0x1f4f58u: goto label_1f4f58;
        case 0x1f4fe8u: goto label_1f4fe8;
        case 0x1f5000u: goto label_1f5000;
        default: break;
    }

    ctx->pc = 0x1f4f30u;

    // 0x1f4f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4f34: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f4f38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f4f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f4f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f4f40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f4f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f44: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f4f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f4f48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f4c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f4f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f4f50: 0xc07d40a  jal         func_1F5028
    ctx->pc = 0x1F4F50u;
    SET_GPR_U32(ctx, 31, 0x1F4F58u);
    ctx->pc = 0x1F4F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F50u;
            // 0x1f4f54: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5028u;
    if (runtime->hasFunction(0x1F5028u)) {
        auto targetFn = runtime->lookupFunction(0x1F5028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F58u; }
        if (ctx->pc != 0x1F4F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5028_0x1f5028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F58u; }
        if (ctx->pc != 0x1F4F58u) { return; }
    }
    ctx->pc = 0x1F4F58u;
label_1f4f58:
    // 0x1f4f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f5c: 0x5080002d  beql        $a0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F4F5Cu;
    {
        const bool branch_taken_0x1f4f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f5c) {
            ctx->pc = 0x1F4F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F5Cu;
            // 0x1f4f60: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5014u;
            goto label_1f5014;
        }
    }
    ctx->pc = 0x1F4F64u;
    // 0x1f4f64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f4f68: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F4F68u;
    {
        const bool branch_taken_0x1f4f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F68u;
            // 0x1f4f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f68) {
            ctx->pc = 0x1F5010u;
            goto label_1f5010;
        }
    }
    ctx->pc = 0x1F4F70u;
    // 0x1f4f70: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x1f4f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f4f74: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x1f4f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f4f78: 0x6883001b  ldl         $v1, 0x1B($a0)
    ctx->pc = 0x1f4f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f4f7c: 0x6c830014  ldr         $v1, 0x14($a0)
    ctx->pc = 0x1f4f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f4f80: 0x68850023  ldl         $a1, 0x23($a0)
    ctx->pc = 0x1f4f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f4f84: 0x6c85001c  ldr         $a1, 0x1C($a0)
    ctx->pc = 0x1f4f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f4f88: 0x6886002b  ldl         $a2, 0x2B($a0)
    ctx->pc = 0x1f4f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f4f8c: 0x6c860024  ldr         $a2, 0x24($a0)
    ctx->pc = 0x1f4f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f4f90: 0xb2220dcb  sdl         $v0, 0xDCB($s1)
    ctx->pc = 0x1f4f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4f94: 0xb6220dc4  sdr         $v0, 0xDC4($s1)
    ctx->pc = 0x1f4f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4f98: 0xb2230dd3  sdl         $v1, 0xDD3($s1)
    ctx->pc = 0x1f4f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3539); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4f9c: 0xb6230dcc  sdr         $v1, 0xDCC($s1)
    ctx->pc = 0x1f4f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4fa0: 0xb2250ddb  sdl         $a1, 0xDDB($s1)
    ctx->pc = 0x1f4fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3547); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4fa4: 0xb6250dd4  sdr         $a1, 0xDD4($s1)
    ctx->pc = 0x1f4fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4fa8: 0xb2260de3  sdl         $a2, 0xDE3($s1)
    ctx->pc = 0x1f4fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3555); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4fac: 0xb6260ddc  sdr         $a2, 0xDDC($s1)
    ctx->pc = 0x1f4facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3548); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4fb0: 0x68820033  ldl         $v0, 0x33($a0)
    ctx->pc = 0x1f4fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f4fb4: 0x6c82002c  ldr         $v0, 0x2C($a0)
    ctx->pc = 0x1f4fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f4fb8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1f4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1f4fbc: 0xb2220deb  sdl         $v0, 0xDEB($s1)
    ctx->pc = 0x1f4fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4fc0: 0xb6220de4  sdr         $v0, 0xDE4($s1)
    ctx->pc = 0x1f4fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4fc4: 0xae230dec  sw          $v1, 0xDEC($s1)
    ctx->pc = 0x1f4fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3564), GPR_U32(ctx, 3));
    // 0x1f4fc8: 0x24830038  addiu       $v1, $a0, 0x38
    ctx->pc = 0x1f4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1f4fcc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f4fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f4fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f4fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fd4: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1f4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f4fd8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1f4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f4fdc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f4fe0: 0xc0768b2  jal         func_1DA2C8
    ctx->pc = 0x1F4FE0u;
    SET_GPR_U32(ctx, 31, 0x1F4FE8u);
    ctx->pc = 0x1F4FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4FE0u;
            // 0x1f4fe4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2C8u;
    if (runtime->hasFunction(0x1DA2C8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4FE8u; }
        if (ctx->pc != 0x1F4FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA2C8_0x1da2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4FE8u; }
        if (ctx->pc != 0x1F4FE8u) { return; }
    }
    ctx->pc = 0x1F4FE8u;
label_1f4fe8:
    // 0x1f4fe8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f4fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4FF0u;
    {
        const bool branch_taken_0x1f4ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4FF0u;
            // 0x1f4ff4: 0x34a50f1b  ori         $a1, $a1, 0xF1B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3867);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ff0) {
            ctx->pc = 0x1F5008u;
            goto label_1f5008;
        }
    }
    ctx->pc = 0x1F4FF8u;
    // 0x1f4ff8: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F4FF8u;
    SET_GPR_U32(ctx, 31, 0x1F5000u);
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5000u; }
        if (ctx->pc != 0x1F5000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5000u; }
        if (ctx->pc != 0x1F5000u) { return; }
    }
    ctx->pc = 0x1F5000u;
label_1f5000:
    // 0x1f5000: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5000u;
    {
        const bool branch_taken_0x1f5000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5000u;
            // 0x1f5004: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5000) {
            ctx->pc = 0x1F5014u;
            goto label_1f5014;
        }
    }
    ctx->pc = 0x1F5008u;
label_1f5008:
    // 0x1f5008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f500c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f500cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1f5010:
    // 0x1f5010: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f5010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5014:
    // 0x1f5014: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f5014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5018: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f5018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f501c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f501cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5020: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5020u;
            // 0x1f5024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5028u;
    ctx->pc = 0x1f5028u;
}
