#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2B68
// Address: 0x1f2b68 - 0x1f2c88
void sub_001F2B68_0x1f2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2B68_0x1f2b68");
#endif

    switch (ctx->pc) {
        case 0x1f2b90u: goto label_1f2b90;
        case 0x1f2bd0u: goto label_1f2bd0;
        default: break;
    }

    ctx->pc = 0x1f2b68u;

    // 0x1f2b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f2b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f2b70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f2b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f2b74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f2b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f2b7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f2b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f2b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2b88: 0xc07d40a  jal         func_1F5028
    ctx->pc = 0x1F2B88u;
    SET_GPR_U32(ctx, 31, 0x1F2B90u);
    ctx->pc = 0x1F2B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B88u;
            // 0x1f2b8c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5028u;
    if (runtime->hasFunction(0x1F5028u)) {
        auto targetFn = runtime->lookupFunction(0x1F5028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B90u; }
        if (ctx->pc != 0x1F2B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5028_0x1f5028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B90u; }
        if (ctx->pc != 0x1F2B90u) { return; }
    }
    ctx->pc = 0x1F2B90u;
label_1f2b90:
    // 0x1f2b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f2b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b94: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F2B94u;
    {
        const bool branch_taken_0x1f2b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b94) {
            ctx->pc = 0x1F2B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B94u;
            // 0x1f2b98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2C6Cu;
            goto label_1f2c6c;
        }
    }
    ctx->pc = 0x1F2B9Cu;
    // 0x1f2b9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f2ba0: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F2BA0u;
    {
        const bool branch_taken_0x1f2ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2ba0) {
            ctx->pc = 0x1F2BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BA0u;
            // 0x1f2ba4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2C6Cu;
            goto label_1f2c6c;
        }
    }
    ctx->pc = 0x1F2BA8u;
    // 0x1f2ba8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1f2ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f2bac: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1f2bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f2bb0: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x1f2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1f2bb4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f2bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f2bb8: 0x28c20201  slti        $v0, $a2, 0x201
    ctx->pc = 0x1f2bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1f2bbc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f2bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bc0: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x1f2bc0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x1f2bc4: 0x26720d88  addiu       $s2, $s3, 0xD88
    ctx->pc = 0x1f2bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3464));
    // 0x1f2bc8: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1F2BC8u;
    SET_GPR_U32(ctx, 31, 0x1F2BD0u);
    ctx->pc = 0x1F2BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BC8u;
            // 0x1f2bcc: 0xac660200  sw          $a2, 0x200($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BD0u; }
        if (ctx->pc != 0x1F2BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BD0u; }
        if (ctx->pc != 0x1F2BD0u) { return; }
    }
    ctx->pc = 0x1F2BD0u;
label_1f2bd0:
    // 0x1f2bd0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1f2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1f2bd4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1f2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1f2bd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f2bdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f2be0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f2be4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2BE4u;
    {
        const bool branch_taken_0x1f2be4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BE4u;
            // 0x1f2be8: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2be4) {
            ctx->pc = 0x1F2BF8u;
            goto label_1f2bf8;
        }
    }
    ctx->pc = 0x1F2BECu;
    // 0x1f2bec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f2becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f2bf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2BF0u;
    {
        const bool branch_taken_0x1f2bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BF0u;
            // 0x1f2bf4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2bf0) {
            ctx->pc = 0x1F2C08u;
            goto label_1f2c08;
        }
    }
    ctx->pc = 0x1F2BF8u;
label_1f2bf8:
    // 0x1f2bf8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f2bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2c00: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f2c04: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1f2c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1f2c08:
    // 0x1f2c08: 0x6a420043  ldl         $v0, 0x43($s2)
    ctx->pc = 0x1f2c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f2c0c: 0x6e42003c  ldr         $v0, 0x3C($s2)
    ctx->pc = 0x1f2c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f2c10: 0x6a43004b  ldl         $v1, 0x4B($s2)
    ctx->pc = 0x1f2c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f2c14: 0x6e430044  ldr         $v1, 0x44($s2)
    ctx->pc = 0x1f2c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f2c18: 0x6a440053  ldl         $a0, 0x53($s2)
    ctx->pc = 0x1f2c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f2c1c: 0x6e44004c  ldr         $a0, 0x4C($s2)
    ctx->pc = 0x1f2c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f2c20: 0x6a45005b  ldl         $a1, 0x5B($s2)
    ctx->pc = 0x1f2c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f2c24: 0x6e450054  ldr         $a1, 0x54($s2)
    ctx->pc = 0x1f2c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f2c28: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x1f2c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c2c: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x1f2c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c30: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x1f2c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c34: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x1f2c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c38: 0xb2040023  sdl         $a0, 0x23($s0)
    ctx->pc = 0x1f2c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c3c: 0xb604001c  sdr         $a0, 0x1C($s0)
    ctx->pc = 0x1f2c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c40: 0xb205002b  sdl         $a1, 0x2B($s0)
    ctx->pc = 0x1f2c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c44: 0xb6050024  sdr         $a1, 0x24($s0)
    ctx->pc = 0x1f2c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c48: 0x6a420063  ldl         $v0, 0x63($s2)
    ctx->pc = 0x1f2c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f2c4c: 0x6e42005c  ldr         $v0, 0x5C($s2)
    ctx->pc = 0x1f2c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f2c50: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1f2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1f2c54: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x1f2c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c58: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x1f2c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2c5c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1f2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1f2c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2c64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f2c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2c6c:
    // 0x1f2c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f2c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f2c70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f2c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2c74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f2c74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C7Cu;
            // 0x1f2c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2C84u;
    // 0x1f2c84: 0x0  nop
    ctx->pc = 0x1f2c84u;
    // NOP
    ctx->pc = 0x1f2c88u;
}
