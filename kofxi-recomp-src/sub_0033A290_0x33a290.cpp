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

// Function: sub_0033A290
// Address: 0x33a290 - 0x33a390
void sub_0033A290_0x33a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A290_0x33a290");
#endif

    switch (ctx->pc) {
        case 0x33a2a0u: goto label_33a2a0;
        case 0x33a2a8u: goto label_33a2a8;
        case 0x33a2b0u: goto label_33a2b0;
        case 0x33a2b8u: goto label_33a2b8;
        case 0x33a2c0u: goto label_33a2c0;
        case 0x33a2c8u: goto label_33a2c8;
        case 0x33a2d0u: goto label_33a2d0;
        case 0x33a2d8u: goto label_33a2d8;
        case 0x33a2f4u: goto label_33a2f4;
        case 0x33a2fcu: goto label_33a2fc;
        case 0x33a304u: goto label_33a304;
        case 0x33a330u: goto label_33a330;
        case 0x33a338u: goto label_33a338;
        case 0x33a350u: goto label_33a350;
        case 0x33a36cu: goto label_33a36c;
        case 0x33a37cu: goto label_33a37c;
        default: break;
    }

    ctx->pc = 0x33a290u;

    // 0x33a290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a298: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33A298u;
    SET_GPR_U32(ctx, 31, 0x33A2A0u);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x33A298u, 0x33A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2A0u;
label_33a2a0:
    // 0x33a2a0: 0xc055684  jal         func_155A10
    ctx->pc = 0x33A2A0u;
    SET_GPR_U32(ctx, 31, 0x33A2A8u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x33A2A0u, 0x33A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2A8u;
label_33a2a8:
    // 0x33a2a8: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x33A2A8u;
    SET_GPR_U32(ctx, 31, 0x33A2B0u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x33A2A8u, 0x33A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2B0u;
label_33a2b0:
    // 0x33a2b0: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x33A2B0u;
    SET_GPR_U32(ctx, 31, 0x33A2B8u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x33A2B0u, 0x33A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2B8u;
label_33a2b8:
    // 0x33a2b8: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x33A2B8u;
    SET_GPR_U32(ctx, 31, 0x33A2C0u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x33A2B8u, 0x33A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2C0u;
label_33a2c0:
    // 0x33a2c0: 0xc053318  jal         func_14CC60
    ctx->pc = 0x33A2C0u;
    SET_GPR_U32(ctx, 31, 0x33A2C8u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x33A2C0u, 0x33A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2C8u;
label_33a2c8:
    // 0x33a2c8: 0xc06810c  jal         func_1A0430
    ctx->pc = 0x33A2C8u;
    SET_GPR_U32(ctx, 31, 0x33A2D0u);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x33A2C8u, 0x33A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2D0u;
label_33a2d0:
    // 0x33a2d0: 0xc0ce97c  jal         func_33A5F0
    ctx->pc = 0x33A2D0u;
    SET_GPR_U32(ctx, 31, 0x33A2D8u);
    ctx->pc = 0x33A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5F0u, 0x33A2D0u, 0x33A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2D8u;
label_33a2d8:
    // 0x33a2d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33a2dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a2e0: 0x9063dae0  lbu         $v1, -0x2520($v1)
    ctx->pc = 0x33a2e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x33a2e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a2e8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33a2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33a2ec: 0xc0682e0  jal         func_1A0B80
    ctx->pc = 0x33A2ECu;
    SET_GPR_U32(ctx, 31, 0x33A2F4u);
    ctx->pc = 0x33A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2ECu;
    // 0x33a2f0: 0xa043dae0  sb          $v1, -0x2520($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957792), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x33A2ECu, 0x33A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2F4u;
label_33a2f4:
    // 0x33a2f4: 0xc0682e0  jal         func_1A0B80
    ctx->pc = 0x33A2F4u;
    SET_GPR_U32(ctx, 31, 0x33A2FCu);
    ctx->pc = 0x33A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2F4u;
    // 0x33a2f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x33A2F4u, 0x33A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2FCu;
label_33a2fc:
    // 0x33a2fc: 0xc0c1650  jal         func_305940
    ctx->pc = 0x33A2FCu;
    SET_GPR_U32(ctx, 31, 0x33A304u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x33A2FCu, 0x33A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A304u;
label_33a304:
    // 0x33a304: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x33a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x33a308: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x33a308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x33a30c: 0xac406dc0  sw          $zero, 0x6DC0($v0)
    ctx->pc = 0x33a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28096), GPR_U32(ctx, 0));
    // 0x33a310: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x33a310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x33a314: 0xac60f0f8  sw          $zero, -0xF08($v1)
    ctx->pc = 0x33a314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963448), GPR_U32(ctx, 0));
    // 0x33a318: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x33a318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x33a31c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x33a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x33a320: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x33a320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x33a324: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33a324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33a328: 0xc0c1bf8  jal         func_306FE0
    ctx->pc = 0x33A328u;
    SET_GPR_U32(ctx, 31, 0x33A330u);
    ctx->pc = 0x33A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A328u;
    // 0x33a32c: 0xac43d918  sw          $v1, -0x26E8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306FE0u, 0x33A328u, 0x33A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A330u;
label_33a330:
    // 0x33a330: 0xc06871c  jal         func_1A1C70
    ctx->pc = 0x33A330u;
    SET_GPR_U32(ctx, 31, 0x33A338u);
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x33A330u, 0x33A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A338u;
label_33a338:
    // 0x33a338: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a33c: 0x9042b288  lbu         $v0, -0x4D78($v0)
    ctx->pc = 0x33a33cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947464)));
    // 0x33a340: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33A340u;
    {
        const bool branch_taken_0x33a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a340) {
            ctx->pc = 0x33A374u;
            goto label_33a374;
        }
    }
    ctx->pc = 0x33A348u;
    // 0x33a348: 0xc0ce8e4  jal         func_33A390
    ctx->pc = 0x33A348u;
    SET_GPR_U32(ctx, 31, 0x33A350u);
    ctx->pc = 0x33A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A390u, 0x33A348u, 0x33A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A350u;
label_33a350:
    // 0x33a350: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A350u;
    {
        const bool branch_taken_0x33a350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a350) {
            ctx->pc = 0x33A374u;
            goto label_33a374;
        }
    }
    ctx->pc = 0x33A358u;
    // 0x33a358: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x33a358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x33a35c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x33a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x33a360: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x33a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    // 0x33a364: 0xc0558d4  jal         func_156350
    ctx->pc = 0x33A364u;
    SET_GPR_U32(ctx, 31, 0x33A36Cu);
    ctx->pc = 0x33A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A364u;
    // 0x33a368: 0x24a5fc40  addiu       $a1, $a1, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x33A364u, 0x33A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A36Cu;
label_33a36c:
    // 0x33a36c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33A36Cu;
    {
        const bool branch_taken_0x33a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A36Cu;
        // 0x33a370: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a36c) {
            ctx->pc = 0x33A380u;
            goto label_33a380;
        }
    }
    ctx->pc = 0x33A374u;
label_33a374:
    // 0x33a374: 0xc0cbf10  jal         func_32FC40
    ctx->pc = 0x33A374u;
    SET_GPR_U32(ctx, 31, 0x33A37Cu);
    ctx->pc = 0x32FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC40u, 0x33A374u, 0x33A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A37Cu;
label_33a37c:
    // 0x33a37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33a380:
    // 0x33a380: 0x3e00008  jr          $ra
    ctx->pc = 0x33A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A380u;
        // 0x33a384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A388u;
    // 0x33a388: 0x0  nop
    ctx->pc = 0x33a388u;
    // NOP
    // 0x33a38c: 0x0  nop
    ctx->pc = 0x33a38cu;
    // NOP
}
