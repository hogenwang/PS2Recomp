#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153370
// Address: 0x153370 - 0x153420
void sub_00153370_0x153370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153370_0x153370");
#endif

    switch (ctx->pc) {
        case 0x153388u: goto label_153388;
        case 0x1533acu: goto label_1533ac;
        case 0x1533d4u: goto label_1533d4;
        default: break;
    }

    ctx->pc = 0x153370u;

    // 0x153370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15337c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15337cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153380: 0xc054cd0  jal         func_153340
    ctx->pc = 0x153380u;
    SET_GPR_U32(ctx, 31, 0x153388u);
    ctx->pc = 0x153384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153380u;
    // 0x153384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153340u, 0x153380u, 0x153388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153388u;
label_153388:
    // 0x153388: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x153388u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15338c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x15338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x153390: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x153394: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x153394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153398: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x153398u;
    {
        const bool branch_taken_0x153398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153398) {
            ctx->pc = 0x15339Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153398u;
            // 0x15339c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153410u;
            goto label_153410;
        }
    }
    ctx->pc = 0x1533A0u;
    // 0x1533a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1533a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1533a4: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x1533A4u;
    SET_GPR_U32(ctx, 31, 0x1533ACu);
    ctx->pc = 0x1533A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533A4u;
    // 0x1533a8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x1533A4u, 0x1533ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533ACu;
label_1533ac:
    // 0x1533ac: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1533acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1533b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1533b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1533b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1533b8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1533b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1533bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1533bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1533c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1533c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1533c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1533c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1533c8: 0x0  nop
    ctx->pc = 0x1533c8u;
    // NOP
    // 0x1533cc: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1533ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1533d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1533d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1533d4:
    // 0x1533d4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1533D4u;
    {
        const bool branch_taken_0x1533d4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1533D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533D4u;
        // 0x1533d8: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533d4) {
            ctx->pc = 0x1533E8u;
            goto label_1533e8;
        }
    }
    ctx->pc = 0x1533DCu;
    // 0x1533dc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1533DCu;
    {
        const bool branch_taken_0x1533dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533dc) {
            ctx->pc = 0x1533E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1533DCu;
            // 0x1533e0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1533ECu;
            goto label_1533ec;
        }
    }
    ctx->pc = 0x1533E4u;
    // 0x1533e4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1533e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1533e8:
    // 0x1533e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1533e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1533ec:
    // 0x1533ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1533ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1533f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1533f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1533f4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1533F4u;
    {
        const bool branch_taken_0x1533f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1533f4) {
            ctx->pc = 0x153410u;
            goto label_153410;
        }
    }
    ctx->pc = 0x1533FCu;
    // 0x1533fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x153400: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x153400u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x153404: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x153404u;
    {
        const bool branch_taken_0x153404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153404u;
        // 0x153408: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153404) {
            ctx->pc = 0x1533D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1533d4;
        }
    }
    ctx->pc = 0x15340Cu;
    // 0x15340c: 0x0  nop
    ctx->pc = 0x15340cu;
    // NOP
label_153410:
    // 0x153410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153418: 0x3e00008  jr          $ra
    ctx->pc = 0x153418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153418u;
        // 0x15341c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153420u;
}
