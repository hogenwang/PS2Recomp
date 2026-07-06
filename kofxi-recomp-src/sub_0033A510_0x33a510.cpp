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

// Function: sub_0033A510
// Address: 0x33a510 - 0x33a5f0
void sub_0033A510_0x33a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A510_0x33a510");
#endif

    switch (ctx->pc) {
        case 0x33a520u: goto label_33a520;
        case 0x33a528u: goto label_33a528;
        case 0x33a530u: goto label_33a530;
        case 0x33a538u: goto label_33a538;
        case 0x33a57cu: goto label_33a57c;
        case 0x33a584u: goto label_33a584;
        case 0x33a598u: goto label_33a598;
        case 0x33a5a0u: goto label_33a5a0;
        case 0x33a5acu: goto label_33a5ac;
        case 0x33a5b4u: goto label_33a5b4;
        case 0x33a5ccu: goto label_33a5cc;
        default: break;
    }

    ctx->pc = 0x33a510u;

    // 0x33a510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a518: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x33A518u;
    SET_GPR_U32(ctx, 31, 0x33A520u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x33A518u, 0x33A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A520u;
label_33a520:
    // 0x33a520: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x33A520u;
    SET_GPR_U32(ctx, 31, 0x33A528u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x33A520u, 0x33A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A528u;
label_33a528:
    // 0x33a528: 0xc068244  jal         func_1A0910
    ctx->pc = 0x33A528u;
    SET_GPR_U32(ctx, 31, 0x33A530u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x33A528u, 0x33A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A530u;
label_33a530:
    // 0x33a530: 0xc06810c  jal         func_1A0430
    ctx->pc = 0x33A530u;
    SET_GPR_U32(ctx, 31, 0x33A538u);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x33A530u, 0x33A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A538u;
label_33a538:
    // 0x33a538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a53c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a540: 0xa043dab9  sb          $v1, -0x2547($v0)
    ctx->pc = 0x33a540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957753), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a544: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a548: 0xa043dab8  sb          $v1, -0x2548($v0)
    ctx->pc = 0x33a548u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957752), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a54c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a550: 0xa043dda2  sb          $v1, -0x225E($v0)
    ctx->pc = 0x33a550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958498), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a554: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a558: 0xa043db5a  sb          $v1, -0x24A6($v0)
    ctx->pc = 0x33a558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957914), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a55c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a560: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a564: 0xa440ddae  sh          $zero, -0x2252($v0)
    ctx->pc = 0x33a564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294958510), (uint16_t)GPR_U32(ctx, 0));
    // 0x33a568: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a56c: 0xa440db66  sh          $zero, -0x249A($v0)
    ctx->pc = 0x33a56cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957926), (uint16_t)GPR_U32(ctx, 0));
    // 0x33a570: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33a574: 0xc0ce97c  jal         func_33A5F0
    ctx->pc = 0x33A574u;
    SET_GPR_U32(ctx, 31, 0x33A57Cu);
    ctx->pc = 0x33A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A574u;
    // 0x33a578: 0xa043db10  sb          $v1, -0x24F0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957840), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5F0u, 0x33A574u, 0x33A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A57Cu;
label_33a57c:
    // 0x33a57c: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33A57Cu;
    SET_GPR_U32(ctx, 31, 0x33A584u);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x33A57Cu, 0x33A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A584u;
label_33a584:
    // 0x33a584: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33a584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33a588: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33a58c: 0xac60e8d8  sw          $zero, -0x1728($v1)
    ctx->pc = 0x33a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961368), GPR_U32(ctx, 0));
    // 0x33a590: 0xc055684  jal         func_155A10
    ctx->pc = 0x33A590u;
    SET_GPR_U32(ctx, 31, 0x33A598u);
    ctx->pc = 0x33A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A590u;
    // 0x33a594: 0xac40e8d0  sw          $zero, -0x1730($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x33A590u, 0x33A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A598u;
label_33a598:
    // 0x33a598: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x33A598u;
    SET_GPR_U32(ctx, 31, 0x33A5A0u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x33A598u, 0x33A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A5A0u;
label_33a5a0:
    // 0x33a5a0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x33a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x33a5a4: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33A5A4u;
    SET_GPR_U32(ctx, 31, 0x33A5ACu);
    ctx->pc = 0x33A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A5A4u;
    // 0x33a5a8: 0x24840b80  addiu       $a0, $a0, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x33A5A4u, 0x33A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A5ACu;
label_33a5ac:
    // 0x33a5ac: 0xc0c1650  jal         func_305940
    ctx->pc = 0x33A5ACu;
    SET_GPR_U32(ctx, 31, 0x33A5B4u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x33A5ACu, 0x33A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A5B4u;
label_33a5b4:
    // 0x33a5b4: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x33a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x33a5b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5bc: 0xac401d40  sw          $zero, 0x1D40($v0)
    ctx->pc = 0x33a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7488), GPR_U32(ctx, 0));
    // 0x33a5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33a5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5c4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x33A5C4u;
    SET_GPR_U32(ctx, 31, 0x33A5CCu);
    ctx->pc = 0x33A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A5C4u;
    // 0x33a5c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x33A5C4u, 0x33A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A5CCu;
label_33a5cc:
    // 0x33a5cc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x33a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x33a5d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x33a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x33a5d4: 0xac806dc0  sw          $zero, 0x6DC0($a0)
    ctx->pc = 0x33a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28096), GPR_U32(ctx, 0));
    // 0x33a5d8: 0xac60f0f8  sw          $zero, -0xF08($v1)
    ctx->pc = 0x33a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963448), GPR_U32(ctx, 0));
    // 0x33a5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x33A5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5E0u;
        // 0x33a5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A5E8u;
    // 0x33a5e8: 0x0  nop
    ctx->pc = 0x33a5e8u;
    // NOP
    // 0x33a5ec: 0x0  nop
    ctx->pc = 0x33a5ecu;
    // NOP
    if (ctx->pc == 0x33a5ecu) { ctx->pc = 0x33a5f0u; }
}
