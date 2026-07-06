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

// Function: sub_00213050
// Address: 0x213050 - 0x213198
void sub_00213050_0x213050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213050_0x213050");
#endif

    switch (ctx->pc) {
        case 0x21308cu: goto label_21308c;
        case 0x2130a0u: goto label_2130a0;
        case 0x2130b4u: goto label_2130b4;
        case 0x2130c8u: goto label_2130c8;
        case 0x2130dcu: goto label_2130dc;
        case 0x2130f0u: goto label_2130f0;
        case 0x213104u: goto label_213104;
        case 0x213118u: goto label_213118;
        case 0x21312cu: goto label_21312c;
        case 0x213140u: goto label_213140;
        case 0x213154u: goto label_213154;
        case 0x213168u: goto label_213168;
        case 0x213170u: goto label_213170;
        default: break;
    }

    ctx->pc = 0x213050u;

    // 0x213050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213054: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21305c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213060: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213068: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21306c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21306cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213070: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213074: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x213074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213078: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21307c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21307cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x213080: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x213080u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213084: 0xc084582  jal         func_211608
    ctx->pc = 0x213084u;
    SET_GPR_U32(ctx, 31, 0x21308Cu);
    ctx->pc = 0x213088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213084u;
    // 0x213088: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x213084u, 0x21308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21308Cu;
label_21308c:
    // 0x21308c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213090: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213094: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213098: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213098u;
    SET_GPR_U32(ctx, 31, 0x2130A0u);
    ctx->pc = 0x21309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213098u;
    // 0x21309c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213098u, 0x2130A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130A0u;
label_2130a0:
    // 0x2130a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2130a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2130a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2130a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130ac: 0xc084612  jal         func_211848
    ctx->pc = 0x2130ACu;
    SET_GPR_U32(ctx, 31, 0x2130B4u);
    ctx->pc = 0x2130B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130ACu;
    // 0x2130b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2130ACu, 0x2130B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130B4u;
label_2130b4:
    // 0x2130b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2130b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2130b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2130bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130c0: 0xc084612  jal         func_211848
    ctx->pc = 0x2130C0u;
    SET_GPR_U32(ctx, 31, 0x2130C8u);
    ctx->pc = 0x2130C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130C0u;
    // 0x2130c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2130C0u, 0x2130C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130C8u;
label_2130c8:
    // 0x2130c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2130c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2130ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2130d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130d4: 0xc084612  jal         func_211848
    ctx->pc = 0x2130D4u;
    SET_GPR_U32(ctx, 31, 0x2130DCu);
    ctx->pc = 0x2130D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130D4u;
    // 0x2130d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2130D4u, 0x2130DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130DCu;
label_2130dc:
    // 0x2130dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2130dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2130e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2130e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130e8: 0xc084612  jal         func_211848
    ctx->pc = 0x2130E8u;
    SET_GPR_U32(ctx, 31, 0x2130F0u);
    ctx->pc = 0x2130ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130E8u;
    // 0x2130ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2130E8u, 0x2130F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130F0u;
label_2130f0:
    // 0x2130f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2130f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2130f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2130f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130fc: 0xc084612  jal         func_211848
    ctx->pc = 0x2130FCu;
    SET_GPR_U32(ctx, 31, 0x213104u);
    ctx->pc = 0x213100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130FCu;
    // 0x213100: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2130FCu, 0x213104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213104u;
label_213104:
    // 0x213104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21310c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21310cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213110: 0xc084612  jal         func_211848
    ctx->pc = 0x213110u;
    SET_GPR_U32(ctx, 31, 0x213118u);
    ctx->pc = 0x213114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213110u;
    // 0x213114: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213110u, 0x213118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213118u;
label_213118:
    // 0x213118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21311c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213120: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213124: 0xc084612  jal         func_211848
    ctx->pc = 0x213124u;
    SET_GPR_U32(ctx, 31, 0x21312Cu);
    ctx->pc = 0x213128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213124u;
    // 0x213128: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213124u, 0x21312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21312Cu;
label_21312c:
    // 0x21312c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21312cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213130: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213134: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213138: 0xc084612  jal         func_211848
    ctx->pc = 0x213138u;
    SET_GPR_U32(ctx, 31, 0x213140u);
    ctx->pc = 0x21313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213138u;
    // 0x21313c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213138u, 0x213140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213140u;
label_213140:
    // 0x213140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213148: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21314c: 0xc084612  jal         func_211848
    ctx->pc = 0x21314Cu;
    SET_GPR_U32(ctx, 31, 0x213154u);
    ctx->pc = 0x213150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21314Cu;
    // 0x213150: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21314Cu, 0x213154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213154u;
label_213154:
    // 0x213154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213158: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21315c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213160: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213160u;
    SET_GPR_U32(ctx, 31, 0x213168u);
    ctx->pc = 0x213164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213160u;
    // 0x213164: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213160u, 0x213168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213168u;
label_213168:
    // 0x213168: 0xc084b84  jal         func_212E10
    ctx->pc = 0x213168u;
    SET_GPR_U32(ctx, 31, 0x213170u);
    ctx->pc = 0x21316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213168u;
    // 0x21316c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212E10u, 0x213168u, 0x213170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213170u;
label_213170:
    // 0x213170: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213178: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x213178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21317c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21317cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213180: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213184: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213188: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213188u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21318c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21318cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213190: 0x3e00008  jr          $ra
    ctx->pc = 0x213190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213190u;
        // 0x213194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213198u;
}
