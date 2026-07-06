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

// Function: sub_001A0F90
// Address: 0x1a0f90 - 0x1a10a0
void sub_001A0F90_0x1a0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0F90_0x1a0f90");
#endif

    switch (ctx->pc) {
        case 0x1a0fb8u: goto label_1a0fb8;
        case 0x1a0fecu: goto label_1a0fec;
        case 0x1a1078u: goto label_1a1078;
        case 0x1a1084u: goto label_1a1084;
        case 0x1a1090u: goto label_1a1090;
        default: break;
    }

    ctx->pc = 0x1a0f90u;

    // 0x1a0f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0f94: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0f9c: 0x2484e5a0  addiu       $a0, $a0, -0x1A60
    ctx->pc = 0x1a0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960544));
    // 0x1a0fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fa4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a0fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a0fa8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1a0fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a0fac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a0facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0fb0: 0xc040828  jal         func_1020A0
    ctx->pc = 0x1A0FB0u;
    SET_GPR_U32(ctx, 31, 0x1A0FB8u);
    ctx->pc = 0x1A0FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FB0u;
    // 0x1a0fb4: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1020A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1020A0u, 0x1A0FB0u, 0x1A0FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FB8u;
label_1a0fb8:
    // 0x1a0fb8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1a0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1a0fbc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0fc0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1a0fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1a0fc4: 0x2484e620  addiu       $a0, $a0, -0x19E0
    ctx->pc = 0x1a0fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960672));
    // 0x1a0fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0fcc: 0x240606c0  addiu       $a2, $zero, 0x6C0
    ctx->pc = 0x1a0fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
    // 0x1a0fd0: 0x24070720  addiu       $a3, $zero, 0x720
    ctx->pc = 0x1a0fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    // 0x1a0fd4: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1a0fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a0fd8: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1a0fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a0fdc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a0fdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fe0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a0fe0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fe4: 0xc0408a0  jal         func_102280
    ctx->pc = 0x1A0FE4u;
    SET_GPR_U32(ctx, 31, 0x1A0FECu);
    ctx->pc = 0x1A0FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FE4u;
    // 0x1a0fe8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102280u, 0x1A0FE4u, 0x1A0FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FECu;
label_1a0fec:
    // 0x1a0fec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a0ff0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0ff4: 0x7c40e590  sq          $zero, -0x1A70($v0)
    ctx->pc = 0x1a0ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960528), GPR_VEC(ctx, 0));
    // 0x1a0ff8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a0ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a0ffc: 0x9465e590  lhu         $a1, -0x1A70($v1)
    ctx->pc = 0x1a0ffcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960528)));
    // 0x1a1000: 0x6402000e  daddiu      $v0, $zero, 0xE
    ctx->pc = 0x1a1000u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1a1004: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1008: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a100c: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x1a100cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1a1010: 0x64080010  daddiu      $t0, $zero, 0x10
    ctx->pc = 0x1a1010u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1a1014: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1a1018: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a1018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a101c: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x1a101cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1020: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a1020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a1024: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1028: 0xa4c7e590  sh          $a3, -0x1A70($a2)
    ctx->pc = 0x1a1028u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294960528), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a102c: 0x9069e597  lbu         $t1, -0x1A69($v1)
    ctx->pc = 0x1a102cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960535)));
    // 0x1a1030: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x1a1030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1a1034: 0x908ce591  lbu         $t4, -0x1A6F($a0)
    ctx->pc = 0x1a1034u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294960529)));
    // 0x1a1038: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x1a1038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a103c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a103cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1040: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1a1040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1a1044: 0x9063e598  lbu         $v1, -0x1A68($v1)
    ctx->pc = 0x1a1044u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960536)));
    // 0x1a1048: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x1a1048u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x1a104c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1a104cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1a1050: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1054: 0xa0aae591  sb          $t2, -0x1A6F($a1)
    ctx->pc = 0x1a1054u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294960529), (uint8_t)GPR_U32(ctx, 10));
    // 0x1a1058: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a1058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a105c: 0xe82825  or          $a1, $a3, $t0
    ctx->pc = 0x1a105cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1a1060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a1060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1064: 0xa085e597  sb          $a1, -0x1A69($a0)
    ctx->pc = 0x1a1064u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294960535), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a1068: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a106c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1070: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A1070u;
    SET_GPR_U32(ctx, 31, 0x1A1078u);
    ctx->pc = 0x1A1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1070u;
    // 0x1a1074: 0xa043e598  sb          $v1, -0x1A68($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294960536), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A1070u, 0x1A1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1078u;
label_1a1078:
    // 0x1a1078: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a107c: 0xc040336  jal         func_100CD8
    ctx->pc = 0x1A107Cu;
    SET_GPR_U32(ctx, 31, 0x1A1084u);
    ctx->pc = 0x1A1080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A107Cu;
    // 0x1a1080: 0x2484e590  addiu       $a0, $a0, -0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100CD8u, 0x1A107Cu, 0x1A1084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1084u;
label_1a1084:
    // 0x1a1084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1088: 0xc040454  jal         func_101150
    ctx->pc = 0x1A1088u;
    SET_GPR_U32(ctx, 31, 0x1A1090u);
    ctx->pc = 0x1A108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1088u;
    // 0x1a108c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x1A1088u, 0x1A1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1090u;
label_1a1090:
    // 0x1a1090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1094: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1094u;
        // 0x1a1098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A109Cu;
    // 0x1a109c: 0x0  nop
    ctx->pc = 0x1a109cu;
    // NOP
    if (ctx->pc == 0x1a109cu) { ctx->pc = 0x1a10a0u; }
}
