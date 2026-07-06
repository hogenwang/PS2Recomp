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

// Function: sub_001C0330
// Address: 0x1c0330 - 0x1c03b8
void sub_001C0330_0x1c0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0330_0x1c0330");
#endif

    switch (ctx->pc) {
        case 0x1c0348u: goto label_1c0348;
        case 0x1c0364u: goto label_1c0364;
        case 0x1c039cu: goto label_1c039c;
        default: break;
    }

    ctx->pc = 0x1c0330u;

    // 0x1c0330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0338: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c033c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c0340: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1C0340u;
    SET_GPR_U32(ctx, 31, 0x1C0348u);
    ctx->pc = 0x1C0344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0340u;
    // 0x1c0344: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB78u, 0x1C0340u, 0x1C0348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0348u;
label_1c0348:
    // 0x1c0348: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c034c: 0x2450c7d0  addiu       $s0, $v0, -0x3830
    ctx->pc = 0x1c034cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x1c0350: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c0354: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0354u;
    {
        const bool branch_taken_0x1c0354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0354) {
            ctx->pc = 0x1C0394u;
            goto label_1c0394;
        }
    }
    ctx->pc = 0x1C035Cu;
    // 0x1c035c: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1C035Cu;
    SET_GPR_U32(ctx, 31, 0x1C0364u);
    ctx->pc = 0x1C0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0300u, 0x1C035Cu, 0x1C0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0364u;
label_1c0364:
    // 0x1c0364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0368: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1c0368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c036c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0370: 0x2463c830  addiu       $v1, $v1, -0x37D0
    ctx->pc = 0x1c0370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953008));
    // 0x1c0374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c0374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c037c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c037cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0380: 0xa2050003  sb          $a1, 0x3($s0)
    ctx->pc = 0x1c0380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c0384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0388: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c0388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c038c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c038cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c0390: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c0390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1c0394:
    // 0x1c0394: 0xc0736fc  jal         func_1CDBF0
    ctx->pc = 0x1C0394u;
    SET_GPR_U32(ctx, 31, 0x1C039Cu);
    ctx->pc = 0x1CDBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDBF0u, 0x1C0394u, 0x1C039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C039Cu;
label_1c039c:
    // 0x1c039c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c039cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c03a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c03a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c03a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c03a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c03a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c03a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c03ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C03ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03ACu;
        // 0x1c03b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C03ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C03B4u;
    // 0x1c03b4: 0x0  nop
    ctx->pc = 0x1c03b4u;
    // NOP
}
