#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245F50
// Address: 0x245f50 - 0x246020
void sub_00245F50_0x245f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245F50_0x245f50");
#endif

    switch (ctx->pc) {
        case 0x245f84u: goto label_245f84;
        case 0x245f98u: goto label_245f98;
        case 0x245fa4u: goto label_245fa4;
        case 0x245fc0u: goto label_245fc0;
        default: break;
    }

    ctx->pc = 0x245f50u;

    // 0x245f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x245f54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x245f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x245f58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x245f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x245f5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x245f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x245f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245f68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x245f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x245f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x245f70: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x245F70u;
    {
        const bool branch_taken_0x245f70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x245F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F70u;
            // 0x245f74: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f70) {
            ctx->pc = 0x245F8Cu;
            goto label_245f8c;
        }
    }
    ctx->pc = 0x245F78u;
    // 0x245f78: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x245f7c: 0xc048c96  jal         func_123258
    ctx->pc = 0x245F7Cu;
    SET_GPR_U32(ctx, 31, 0x245F84u);
    ctx->pc = 0x245F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245F7Cu;
            // 0x245f80: 0x24051e88  addiu       $a1, $zero, 0x1E88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245F84u; }
        if (ctx->pc != 0x245F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245F84u; }
        if (ctx->pc != 0x245F84u) { return; }
    }
    ctx->pc = 0x245F84u;
label_245f84:
    // 0x245f84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245F84u;
    {
        const bool branch_taken_0x245f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F84u;
            // 0x245f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f84) {
            ctx->pc = 0x245FA8u;
            goto label_245fa8;
        }
    }
    ctx->pc = 0x245F8Cu;
label_245f8c:
    // 0x245f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f90: 0xc048c96  jal         func_123258
    ctx->pc = 0x245F90u;
    SET_GPR_U32(ctx, 31, 0x245F98u);
    ctx->pc = 0x245F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245F90u;
            // 0x245f94: 0x24050f40  addiu       $a1, $zero, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245F98u; }
        if (ctx->pc != 0x245F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245F98u; }
        if (ctx->pc != 0x245F98u) { return; }
    }
    ctx->pc = 0x245F98u;
label_245f98:
    // 0x245f98: 0x26240f48  addiu       $a0, $s1, 0xF48
    ctx->pc = 0x245f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3912));
    // 0x245f9c: 0xc048c96  jal         func_123258
    ctx->pc = 0x245F9Cu;
    SET_GPR_U32(ctx, 31, 0x245FA4u);
    ctx->pc = 0x245FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245F9Cu;
            // 0x245fa0: 0x24050f40  addiu       $a1, $zero, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FA4u; }
        if (ctx->pc != 0x245FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FA4u; }
        if (ctx->pc != 0x245FA4u) { return; }
    }
    ctx->pc = 0x245FA4u;
label_245fa4:
    // 0x245fa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245fa8:
    // 0x245fa8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x245FA8u;
    {
        const bool branch_taken_0x245fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245FA8u;
            // 0x245fac: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fa8) {
            ctx->pc = 0x245FDCu;
            goto label_245fdc;
        }
    }
    ctx->pc = 0x245FB0u;
    // 0x245fb0: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x245fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x245fb4: 0x2443ff0c  addiu       $v1, $v0, -0xF4
    ctx->pc = 0x245fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967052));
    // 0x245fb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x245fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x245fbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x245fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_245fc0:
    // 0x245fc0: 0xa0440006  sb          $a0, 0x6($v0)
    ctx->pc = 0x245fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x245fc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x245fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x245fc8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x245fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x245fcc: 0x2463ff0c  addiu       $v1, $v1, -0xF4
    ctx->pc = 0x245fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967052));
    // 0x245fd0: 0x2442ff0c  addiu       $v0, $v0, -0xF4
    ctx->pc = 0x245fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967052));
    // 0x245fd4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x245FD4u;
    {
        const bool branch_taken_0x245fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x245fd4) {
            ctx->pc = 0x245FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245fc0;
        }
    }
    ctx->pc = 0x245FDCu;
label_245fdc:
    // 0x245fdc: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x245fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x245fe0: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x245fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x245fe4: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x245fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x245fe8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x245fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x245fec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x245fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245ff0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x245ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245ff4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x245ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x245ff8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x245ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x245ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246000: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x246000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x246004: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x246004u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x246008: 0xa2240005  sb          $a0, 0x5($s1)
    ctx->pc = 0x246008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x24600c: 0xa2240004  sb          $a0, 0x4($s1)
    ctx->pc = 0x24600cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x246010: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x246010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246018: 0x3e00008  jr          $ra
    ctx->pc = 0x246018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24601Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246018u;
            // 0x24601c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x246020u;
    ctx->pc = 0x246020u;
}
