#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294C30
// Address: 0x294c30 - 0x294da8
void sub_00294C30_0x294c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294C30_0x294c30");
#endif

    switch (ctx->pc) {
        case 0x294c40u: goto label_294c40;
        case 0x294c90u: goto label_294c90;
        case 0x294ca0u: goto label_294ca0;
        case 0x294ca8u: goto label_294ca8;
        case 0x294cf8u: goto label_294cf8;
        case 0x294d48u: goto label_294d48;
        case 0x294d54u: goto label_294d54;
        case 0x294d70u: goto label_294d70;
        case 0x294d80u: goto label_294d80;
        default: break;
    }

    ctx->pc = 0x294c30u;

    // 0x294c30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294c34: 0x3e00008  jr          $ra
    ctx->pc = 0x294C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294C34u;
            // 0x294c38: 0x24424b00  addiu       $v0, $v0, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294C3Cu;
    // 0x294c3c: 0x0  nop
    ctx->pc = 0x294c3cu;
    // NOP
label_294c40:
    // 0x294c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294c48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294c4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x294c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294c54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294c58: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x294C58u;
    {
        const bool branch_taken_0x294c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294C58u;
            // 0x294c5c: 0x8c910078  lw          $s1, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c58) {
            ctx->pc = 0x294C70u;
            goto label_294c70;
        }
    }
    ctx->pc = 0x294C60u;
    // 0x294c60: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x294c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x294c64: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x294c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x294c68: 0xb0820013  sdl         $v0, 0x13($a0)
    ctx->pc = 0x294c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294c6c: 0xb482000c  sdr         $v0, 0xC($a0)
    ctx->pc = 0x294c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_294c70:
    // 0x294c70: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x294c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x294c74: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x294c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x294c78: 0xb0820033  sdl         $v0, 0x33($a0)
    ctx->pc = 0x294c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294c7c: 0xb482002c  sdr         $v0, 0x2C($a0)
    ctx->pc = 0x294c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294c80: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x294C80u;
    {
        const bool branch_taken_0x294c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294C80u;
            // 0x294c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c80) {
            ctx->pc = 0x294CDCu;
            goto label_294cdc;
        }
    }
    ctx->pc = 0x294C88u;
    // 0x294c88: 0xc0add4c  jal         func_2B7530
    ctx->pc = 0x294C88u;
    SET_GPR_U32(ctx, 31, 0x294C90u);
    ctx->pc = 0x294C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C88u;
            // 0x294c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7530u;
    if (runtime->hasFunction(0x2B7530u)) {
        auto targetFn = runtime->lookupFunction(0x2B7530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C90u; }
        if (ctx->pc != 0x294C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7530_0x2b7530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C90u; }
        if (ctx->pc != 0x294C90u) { return; }
    }
    ctx->pc = 0x294C90u;
label_294c90:
    // 0x294c90: 0x26320180  addiu       $s2, $s1, 0x180
    ctx->pc = 0x294c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x294c94: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x294c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x294c98: 0xc0add4c  jal         func_2B7530
    ctx->pc = 0x294C98u;
    SET_GPR_U32(ctx, 31, 0x294CA0u);
    ctx->pc = 0x294C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C98u;
            // 0x294c9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7530u;
    if (runtime->hasFunction(0x2B7530u)) {
        auto targetFn = runtime->lookupFunction(0x2B7530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CA0u; }
        if (ctx->pc != 0x294CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7530_0x2b7530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294CA0u; }
        if (ctx->pc != 0x294CA0u) { return; }
    }
    ctx->pc = 0x294CA0u;
label_294ca0:
    // 0x294ca0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x294ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ca4: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x294ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_294ca8:
    // 0x294ca8: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x294ca8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294cac: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x294cacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x294cb0: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x294cb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294cb4: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x294cb4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x294cb8: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x294cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x294cbc: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x294cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x294cc0: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x294cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x294cc4: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x294cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x294cc8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x294cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x294ccc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x294cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x294cd0: 0x0  nop
    ctx->pc = 0x294cd0u;
    // NOP
    // 0x294cd4: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x294CD4u;
    {
        const bool branch_taken_0x294cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x294cd4) {
            ctx->pc = 0x294CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294ca8;
        }
    }
    ctx->pc = 0x294CDCu;
label_294cdc:
    // 0x294cdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294cec: 0x3e00008  jr          $ra
    ctx->pc = 0x294CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294CECu;
            // 0x294cf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294CF4u;
    // 0x294cf4: 0x0  nop
    ctx->pc = 0x294cf4u;
    // NOP
label_294cf8:
    // 0x294cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294d00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x294d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294d0c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x294D0Cu;
    {
        const bool branch_taken_0x294d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D0Cu;
            // 0x294d10: 0x8c910078  lw          $s1, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d0c) {
            ctx->pc = 0x294D24u;
            goto label_294d24;
        }
    }
    ctx->pc = 0x294D14u;
    // 0x294d14: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x294d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x294d18: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x294d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x294d1c: 0xb0820013  sdl         $v0, 0x13($a0)
    ctx->pc = 0x294d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294d20: 0xb482000c  sdr         $v0, 0xC($a0)
    ctx->pc = 0x294d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_294d24:
    // 0x294d24: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x294d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x294d28: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x294d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x294d2c: 0xb0820033  sdl         $v0, 0x33($a0)
    ctx->pc = 0x294d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294d30: 0xb482002c  sdr         $v0, 0x2C($a0)
    ctx->pc = 0x294d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294d34: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x294D34u;
    {
        const bool branch_taken_0x294d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D34u;
            // 0x294d38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d34) {
            ctx->pc = 0x294D70u;
            goto label_294d70;
        }
    }
    ctx->pc = 0x294D3Cu;
    // 0x294d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d40: 0xc0add4c  jal         func_2B7530
    ctx->pc = 0x294D40u;
    SET_GPR_U32(ctx, 31, 0x294D48u);
    ctx->pc = 0x294D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294D40u;
            // 0x294d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7530u;
    if (runtime->hasFunction(0x2B7530u)) {
        auto targetFn = runtime->lookupFunction(0x2B7530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294D48u; }
        if (ctx->pc != 0x294D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7530_0x2b7530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294D48u; }
        if (ctx->pc != 0x294D48u) { return; }
    }
    ctx->pc = 0x294D48u;
label_294d48:
    // 0x294d48: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x294d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x294d4c: 0xc0add4c  jal         func_2B7530
    ctx->pc = 0x294D4Cu;
    SET_GPR_U32(ctx, 31, 0x294D54u);
    ctx->pc = 0x294D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294D4Cu;
            // 0x294d50: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7530u;
    if (runtime->hasFunction(0x2B7530u)) {
        auto targetFn = runtime->lookupFunction(0x2B7530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294D54u; }
        if (ctx->pc != 0x294D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7530_0x2b7530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294D54u; }
        if (ctx->pc != 0x294D54u) { return; }
    }
    ctx->pc = 0x294D54u;
label_294d54:
    // 0x294d54: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x294d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x294d58: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x294d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x294d5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294d60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294d68: 0x80add4c  j           func_2B7530
    ctx->pc = 0x294D68u;
    ctx->pc = 0x294D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294D68u;
            // 0x294d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7530u;
    if (runtime->hasFunction(0x2B7530u)) {
        auto targetFn = runtime->lookupFunction(0x2B7530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002B7530_0x2b7530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x294D70u;
label_294d70:
    // 0x294d70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294d78: 0x3e00008  jr          $ra
    ctx->pc = 0x294D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D78u;
            // 0x294d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294D80u;
label_294d80:
    // 0x294d80: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x294d80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d84: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x294d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x294d88: 0x8d470078  lw          $a3, 0x78($t2)
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x294d8c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x294d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d90: 0x8d4b0004  lw          $t3, 0x4($t2)
    ctx->pc = 0x294d90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x294d94: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x294d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x294d98: 0x24e80180  addiu       $t0, $a3, 0x180
    ctx->pc = 0x294d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
    // 0x294d9c: 0x24e90300  addiu       $t1, $a3, 0x300
    ctx->pc = 0x294d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
    // 0x294da0: 0x80a4da6  j           func_293698
    ctx->pc = 0x294DA0u;
    ctx->pc = 0x294DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294DA0u;
            // 0x294da4: 0x254a002c  addiu       $t2, $t2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293698u;
    {
        auto targetFn = runtime->lookupFunction(0x293698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x294DA8u;
    ctx->pc = 0x294da8u;
}
