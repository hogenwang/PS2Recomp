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

// Function: sub_003211F0
// Address: 0x3211f0 - 0x3212a0
void sub_003211F0_0x3211f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003211F0_0x3211f0");
#endif

    switch (ctx->pc) {
        case 0x321200u: goto label_321200;
        case 0x321208u: goto label_321208;
        case 0x321210u: goto label_321210;
        case 0x321224u: goto label_321224;
        case 0x321238u: goto label_321238;
        case 0x32124cu: goto label_32124c;
        case 0x321260u: goto label_321260;
        case 0x321274u: goto label_321274;
        case 0x321288u: goto label_321288;
        default: break;
    }

    ctx->pc = 0x3211f0u;

    // 0x3211f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3211f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3211f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3211f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3211f8: 0xc0c8574  jal         func_3215D0
    ctx->pc = 0x3211F8u;
    SET_GPR_U32(ctx, 31, 0x321200u);
    ctx->pc = 0x3211FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211F8u;
    // 0x3211fc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3215D0u, 0x3211F8u, 0x321200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321200u;
label_321200:
    // 0x321200: 0xc052f0c  jal         func_14BC30
    ctx->pc = 0x321200u;
    SET_GPR_U32(ctx, 31, 0x321208u);
    ctx->pc = 0x321204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321200u;
    // 0x321204: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BC30u, 0x321200u, 0x321208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321208u;
label_321208:
    // 0x321208: 0xc063a98  jal         func_18EA60
    ctx->pc = 0x321208u;
    SET_GPR_U32(ctx, 31, 0x321210u);
    ctx->pc = 0x32120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321208u;
    // 0x32120c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA60u, 0x321208u, 0x321210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321210u;
label_321210:
    // 0x321210: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321214: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321218: 0x8c4403c0  lw          $a0, 0x3C0($v0)
    ctx->pc = 0x321218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
    // 0x32121c: 0xc0c8504  jal         func_321410
    ctx->pc = 0x32121Cu;
    SET_GPR_U32(ctx, 31, 0x321224u);
    ctx->pc = 0x321220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32121Cu;
    // 0x321220: 0x906503a0  lbu         $a1, 0x3A0($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x32121Cu, 0x321224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321224u;
label_321224:
    // 0x321224: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321228: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x32122c: 0x8c4403c4  lw          $a0, 0x3C4($v0)
    ctx->pc = 0x32122cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x321230: 0xc0c8504  jal         func_321410
    ctx->pc = 0x321230u;
    SET_GPR_U32(ctx, 31, 0x321238u);
    ctx->pc = 0x321234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321230u;
    // 0x321234: 0x906503a4  lbu         $a1, 0x3A4($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 932)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x321230u, 0x321238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321238u;
label_321238:
    // 0x321238: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x32123c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321240: 0x8c4403c8  lw          $a0, 0x3C8($v0)
    ctx->pc = 0x321240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x321244: 0xc0c8504  jal         func_321410
    ctx->pc = 0x321244u;
    SET_GPR_U32(ctx, 31, 0x32124Cu);
    ctx->pc = 0x321248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321244u;
    // 0x321248: 0x906503a8  lbu         $a1, 0x3A8($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x321244u, 0x32124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32124Cu;
label_32124c:
    // 0x32124c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x32124cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321250: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321254: 0x8c4403cc  lw          $a0, 0x3CC($v0)
    ctx->pc = 0x321254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x321258: 0xc0c8504  jal         func_321410
    ctx->pc = 0x321258u;
    SET_GPR_U32(ctx, 31, 0x321260u);
    ctx->pc = 0x32125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321258u;
    // 0x32125c: 0x906503ac  lbu         $a1, 0x3AC($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 940)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x321258u, 0x321260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321260u;
label_321260:
    // 0x321260: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321264: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321268: 0x8c4403d0  lw          $a0, 0x3D0($v0)
    ctx->pc = 0x321268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
    // 0x32126c: 0xc0c8504  jal         func_321410
    ctx->pc = 0x32126Cu;
    SET_GPR_U32(ctx, 31, 0x321274u);
    ctx->pc = 0x321270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32126Cu;
    // 0x321270: 0x906503b0  lbu         $a1, 0x3B0($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 944)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x32126Cu, 0x321274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321274u;
label_321274:
    // 0x321274: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321278: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x32127c: 0x8c4403d4  lw          $a0, 0x3D4($v0)
    ctx->pc = 0x32127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 980)));
    // 0x321280: 0xc0c8504  jal         func_321410
    ctx->pc = 0x321280u;
    SET_GPR_U32(ctx, 31, 0x321288u);
    ctx->pc = 0x321284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321280u;
    // 0x321284: 0x906503b4  lbu         $a1, 0x3B4($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x321280u, 0x321288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321288u;
label_321288:
    // 0x321288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32128c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321290: 0x3e00008  jr          $ra
    ctx->pc = 0x321290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321290u;
        // 0x321294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321298u;
    // 0x321298: 0x0  nop
    ctx->pc = 0x321298u;
    // NOP
    // 0x32129c: 0x0  nop
    ctx->pc = 0x32129cu;
    // NOP
}
