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

// Function: sub_001537D0
// Address: 0x1537d0 - 0x153830
void sub_001537D0_0x1537d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001537D0_0x1537d0");
#endif

    switch (ctx->pc) {
        case 0x1537f4u: goto label_1537f4;
        case 0x1537fcu: goto label_1537fc;
        case 0x153814u: goto label_153814;
        case 0x15381cu: goto label_15381c;
        default: break;
    }

    ctx->pc = 0x1537d0u;

    // 0x1537d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1537d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1537d4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1537d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1537d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1537d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1537dc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1537dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1537e0: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x1537e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x1537e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1537e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1537e8: 0x24a5d130  addiu       $a1, $a1, -0x2ED0
    ctx->pc = 0x1537e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955312));
    // 0x1537ec: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1537ECu;
    SET_GPR_U32(ctx, 31, 0x1537F4u);
    ctx->pc = 0x1537F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537ECu;
    // 0x1537f0: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1537ECu, 0x1537F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537F4u;
label_1537f4:
    // 0x1537f4: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x1537F4u;
    SET_GPR_U32(ctx, 31, 0x1537FCu);
    ctx->pc = 0x1537F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537F4u;
    // 0x1537f8: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x1537F4u, 0x1537FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537FCu;
label_1537fc:
    // 0x1537fc: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x1537fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x153800: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x153800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153804: 0xac621e50  sw          $v0, 0x1E50($v1)
    ctx->pc = 0x153804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7760), GPR_U32(ctx, 2));
    // 0x153808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15380c: 0xc069034  jal         func_1A40D0
    ctx->pc = 0x15380Cu;
    SET_GPR_U32(ctx, 31, 0x153814u);
    ctx->pc = 0x153810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15380Cu;
    // 0x153810: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A40D0u, 0x15380Cu, 0x153814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153814u;
label_153814:
    // 0x153814: 0xc0c25c4  jal         func_309710
    ctx->pc = 0x153814u;
    SET_GPR_U32(ctx, 31, 0x15381Cu);
    ctx->pc = 0x309710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309710u, 0x153814u, 0x15381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15381Cu;
label_15381c:
    // 0x15381c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15381cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153824: 0x3e00008  jr          $ra
    ctx->pc = 0x153824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153824u;
        // 0x153828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15382Cu;
    // 0x15382c: 0x0  nop
    ctx->pc = 0x15382cu;
    // NOP
    if (ctx->pc == 0x15382cu) { ctx->pc = 0x153830u; }
}
