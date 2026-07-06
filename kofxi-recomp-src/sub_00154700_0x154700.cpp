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

// Function: sub_00154700
// Address: 0x154700 - 0x154800
void sub_00154700_0x154700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154700_0x154700");
#endif

    switch (ctx->pc) {
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547ecu: goto label_1547ec;
        default: break;
    }

    ctx->pc = 0x154700u;

    // 0x154700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154704: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15470c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154710: 0xac40a1f8  sw          $zero, -0x5E08($v0)
    ctx->pc = 0x154710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943224), GPR_U32(ctx, 0));
    // 0x154714: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154718: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15471c: 0xa064daa0  sb          $a0, -0x2560($v1)
    ctx->pc = 0x15471cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957728), (uint8_t)GPR_U32(ctx, 4));
    // 0x154720: 0xa040db10  sb          $zero, -0x24F0($v0)
    ctx->pc = 0x154720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957840), (uint8_t)GPR_U32(ctx, 0));
    // 0x154724: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154728: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15472c: 0xa060d9f8  sb          $zero, -0x2608($v1)
    ctx->pc = 0x15472cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957560), (uint8_t)GPR_U32(ctx, 0));
    // 0x154730: 0xa040db00  sb          $zero, -0x2500($v0)
    ctx->pc = 0x154730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957824), (uint8_t)GPR_U32(ctx, 0));
    // 0x154734: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154738: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15473c: 0xa060d9f0  sb          $zero, -0x2610($v1)
    ctx->pc = 0x15473cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957552), (uint8_t)GPR_U32(ctx, 0));
    // 0x154740: 0xa440dab0  sh          $zero, -0x2550($v0)
    ctx->pc = 0x154740u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957744), (uint16_t)GPR_U32(ctx, 0));
    // 0x154744: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154748: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15474c: 0xa060d9e0  sb          $zero, -0x2620($v1)
    ctx->pc = 0x15474cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957536), (uint8_t)GPR_U32(ctx, 0));
    // 0x154750: 0xa040da08  sb          $zero, -0x25F8($v0)
    ctx->pc = 0x154750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 0));
    // 0x154754: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154758: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15475c: 0xa460f350  sh          $zero, -0xCB0($v1)
    ctx->pc = 0x15475cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294964048), (uint16_t)GPR_U32(ctx, 0));
    // 0x154760: 0xac40da10  sw          $zero, -0x25F0($v0)
    ctx->pc = 0x154760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957584), GPR_U32(ctx, 0));
    // 0x154764: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154768: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15476c: 0xa060dac8  sb          $zero, -0x2538($v1)
    ctx->pc = 0x15476cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957768), (uint8_t)GPR_U32(ctx, 0));
    // 0x154770: 0xa040d9e8  sb          $zero, -0x2618($v0)
    ctx->pc = 0x154770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957544), (uint8_t)GPR_U32(ctx, 0));
    // 0x154774: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x154774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154778: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15477c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154780: 0xa040d9d8  sb          $zero, -0x2628($v0)
    ctx->pc = 0x154780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957528), (uint8_t)GPR_U32(ctx, 0));
    // 0x154784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154788: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15478c: 0xa040dad0  sb          $zero, -0x2530($v0)
    ctx->pc = 0x15478cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957776), (uint8_t)GPR_U32(ctx, 0));
    // 0x154790: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154794: 0xa040d9d0  sb          $zero, -0x2630($v0)
    ctx->pc = 0x154794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 0));
    // 0x154798: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15479c: 0xa043b828  sb          $v1, -0x47D8($v0)
    ctx->pc = 0x15479cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948904), (uint8_t)GPR_U32(ctx, 3));
    // 0x1547a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1547a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1547a4: 0xa043b820  sb          $v1, -0x47E0($v0)
    ctx->pc = 0x1547a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948896), (uint8_t)GPR_U32(ctx, 3));
    // 0x1547a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1547a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1547ac: 0xa043b829  sb          $v1, -0x47D7($v0)
    ctx->pc = 0x1547acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948905), (uint8_t)GPR_U32(ctx, 3));
    // 0x1547b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1547b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1547b4: 0xa043b821  sb          $v1, -0x47DF($v0)
    ctx->pc = 0x1547b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948897), (uint8_t)GPR_U32(ctx, 3));
    // 0x1547b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1547b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1547bc: 0xa043b82a  sb          $v1, -0x47D6($v0)
    ctx->pc = 0x1547bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948906), (uint8_t)GPR_U32(ctx, 3));
    // 0x1547c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1547c4: 0xa043b822  sb          $v1, -0x47DE($v0)
    ctx->pc = 0x1547c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948898), (uint8_t)GPR_U32(ctx, 3));
    // 0x1547c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1547c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1547cc: 0xa043b82b  sb          $v1, -0x47D5($v0)
    ctx->pc = 0x1547ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948907), (uint8_t)GPR_U32(ctx, 3));
    // 0x1547d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1547d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1547d4: 0xc04c1f8  jal         func_1307E0
    ctx->pc = 0x1547D4u;
    SET_GPR_U32(ctx, 31, 0x1547DCu);
    ctx->pc = 0x1547D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547D4u;
    // 0x1547d8: 0xa043b823  sb          $v1, -0x47DD($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948899), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307E0u, 0x1547D4u, 0x1547DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547DCu;
label_1547dc:
    // 0x1547dc: 0xc067f74  jal         func_19FDD0
    ctx->pc = 0x1547DCu;
    SET_GPR_U32(ctx, 31, 0x1547E4u);
    ctx->pc = 0x19FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDD0u, 0x1547DCu, 0x1547E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547E4u;
label_1547e4:
    // 0x1547e4: 0xc06810c  jal         func_1A0430
    ctx->pc = 0x1547E4u;
    SET_GPR_U32(ctx, 31, 0x1547ECu);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x1547E4u, 0x1547ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547ECu;
label_1547ec:
    // 0x1547ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1547ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1547f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1547F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1547F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547F0u;
        // 0x1547f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1547F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1547F8u;
    // 0x1547f8: 0x0  nop
    ctx->pc = 0x1547f8u;
    // NOP
    // 0x1547fc: 0x0  nop
    ctx->pc = 0x1547fcu;
    // NOP
}
