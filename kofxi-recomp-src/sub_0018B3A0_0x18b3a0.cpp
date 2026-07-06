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

// Function: sub_0018B3A0
// Address: 0x18b3a0 - 0x18b420
void sub_0018B3A0_0x18b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B3A0_0x18b3a0");
#endif

    switch (ctx->pc) {
        case 0x18b3a0u: goto label_18b3a0;
        case 0x18b3a4u: goto label_18b3a4;
        case 0x18b3a8u: goto label_18b3a8;
        case 0x18b3acu: goto label_18b3ac;
        case 0x18b3b0u: goto label_18b3b0;
        case 0x18b3b4u: goto label_18b3b4;
        case 0x18b3b8u: goto label_18b3b8;
        case 0x18b3bcu: goto label_18b3bc;
        case 0x18b3c0u: goto label_18b3c0;
        case 0x18b3c4u: goto label_18b3c4;
        case 0x18b3c8u: goto label_18b3c8;
        case 0x18b3ccu: goto label_18b3cc;
        case 0x18b3d0u: goto label_18b3d0;
        case 0x18b3d4u: goto label_18b3d4;
        case 0x18b3d8u: goto label_18b3d8;
        case 0x18b3dcu: goto label_18b3dc;
        case 0x18b3e0u: goto label_18b3e0;
        case 0x18b3e4u: goto label_18b3e4;
        case 0x18b3e8u: goto label_18b3e8;
        case 0x18b3ecu: goto label_18b3ec;
        case 0x18b3f0u: goto label_18b3f0;
        case 0x18b3f4u: goto label_18b3f4;
        case 0x18b3f8u: goto label_18b3f8;
        case 0x18b3fcu: goto label_18b3fc;
        case 0x18b400u: goto label_18b400;
        case 0x18b404u: goto label_18b404;
        case 0x18b408u: goto label_18b408;
        case 0x18b40cu: goto label_18b40c;
        case 0x18b410u: goto label_18b410;
        case 0x18b414u: goto label_18b414;
        case 0x18b418u: goto label_18b418;
        case 0x18b41cu: goto label_18b41c;
        default: break;
    }

    ctx->pc = 0x18b3a0u;

label_18b3a0:
    // 0x18b3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18b3a4:
    // 0x18b3a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18b3a8:
    // 0x18b3a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18b3ac:
    // 0x18b3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b3b0:
    // 0x18b3b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b3b4:
    // 0x18b3b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b3b8:
    // 0x18b3b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b3bc:
    // 0x18b3bc: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b3c0:
    // 0x18b3c0: 0x26104110  addiu       $s0, $s0, 0x4110
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16656));
label_18b3c4:
    // 0x18b3c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b3c8:
    // 0x18b3c8: 0xa051bb60  sb          $s1, -0x44A0($v0)
    ctx->pc = 0x18b3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 17));
label_18b3cc:
    // 0x18b3cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b3d0:
    // 0x18b3d0: 0x40f809  jalr        $v0
label_18b3d4:
    if (ctx->pc == 0x18B3D4u) {
        ctx->pc = 0x18B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3D0u;
        // 0x18b3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B3D8u;
        goto label_18b3d8;
    }
    ctx->pc = 0x18B3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B3D8u);
        ctx->pc = 0x18B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3D0u;
        // 0x18b3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B3D0u, 0x18B3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B3D8u;
label_18b3d8:
    // 0x18b3d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b3dc:
    // 0x18b3dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b3e0:
    // 0x18b3e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b3e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b3e4:
    // 0x18b3e4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b3e8:
    if (ctx->pc == 0x18B3E8u) {
        ctx->pc = 0x18B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3E4u;
        // 0x18b3e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B3ECu;
        goto label_18b3ec;
    }
    ctx->pc = 0x18B3E4u;
    {
        const bool branch_taken_0x18b3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b3e4) {
            ctx->pc = 0x18B3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B3E4u;
            // 0x18b3e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B3F4u;
            goto label_18b3f4;
        }
    }
    ctx->pc = 0x18B3ECu;
label_18b3ec:
    // 0x18b3ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_18b3f0:
    if (ctx->pc == 0x18B3F0u) {
        ctx->pc = 0x18B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3ECu;
        // 0x18b3f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B3F4u;
        goto label_18b3f4;
    }
    ctx->pc = 0x18B3ECu;
    {
        const bool branch_taken_0x18b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3ECu;
        // 0x18b3f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3ec) {
            ctx->pc = 0x18B408u;
            goto label_18b408;
        }
    }
    ctx->pc = 0x18B3F4u;
label_18b3f4:
    // 0x18b3f4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18b3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_18b3f8:
    // 0x18b3f8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b3fc:
    if (ctx->pc == 0x18B3FCu) {
        ctx->pc = 0x18B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3F8u;
        // 0x18b3fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B400u;
        goto label_18b400;
    }
    ctx->pc = 0x18B3F8u;
    {
        const bool branch_taken_0x18b3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3F8u;
        // 0x18b3fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3f8) {
            ctx->pc = 0x18B3C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b3c4;
        }
    }
    ctx->pc = 0x18B400u;
label_18b400:
    // 0x18b400: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18b404:
    // 0x18b404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18b408:
    // 0x18b408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b40c:
    // 0x18b40c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b410:
    // 0x18b410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b414:
    // 0x18b414: 0x3e00008  jr          $ra
label_18b418:
    if (ctx->pc == 0x18B418u) {
        ctx->pc = 0x18B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B414u;
        // 0x18b418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B41Cu;
        goto label_18b41c;
    }
    ctx->pc = 0x18B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B414u;
        // 0x18b418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B41Cu;
label_18b41c:
    // 0x18b41c: 0x0  nop
    ctx->pc = 0x18b41cu;
    // NOP
}
