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

// Function: sub_00154800
// Address: 0x154800 - 0x1548d0
void sub_00154800_0x154800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154800_0x154800");
#endif

    switch (ctx->pc) {
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c4u: goto label_1548c4;
        default: break;
    }

    ctx->pc = 0x154800u;

    // 0x154800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154804: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15480c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15480cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154810: 0xac40a1f8  sw          $zero, -0x5E08($v0)
    ctx->pc = 0x154810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943224), GPR_U32(ctx, 0));
    // 0x154814: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x154814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154818: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15481c: 0xa060da08  sb          $zero, -0x25F8($v1)
    ctx->pc = 0x15481cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957576), (uint8_t)GPR_U32(ctx, 0));
    // 0x154820: 0xa040db10  sb          $zero, -0x24F0($v0)
    ctx->pc = 0x154820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957840), (uint8_t)GPR_U32(ctx, 0));
    // 0x154824: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154828: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15482c: 0xa060d9f0  sb          $zero, -0x2610($v1)
    ctx->pc = 0x15482cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957552), (uint8_t)GPR_U32(ctx, 0));
    // 0x154830: 0xa040daf8  sb          $zero, -0x2508($v0)
    ctx->pc = 0x154830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x154834: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154838: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15483c: 0xa060d9e0  sb          $zero, -0x2620($v1)
    ctx->pc = 0x15483cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957536), (uint8_t)GPR_U32(ctx, 0));
    // 0x154840: 0xa040db00  sb          $zero, -0x2500($v0)
    ctx->pc = 0x154840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957824), (uint8_t)GPR_U32(ctx, 0));
    // 0x154844: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154848: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15484c: 0xa460f350  sh          $zero, -0xCB0($v1)
    ctx->pc = 0x15484cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294964048), (uint16_t)GPR_U32(ctx, 0));
    // 0x154850: 0xa044daa0  sb          $a0, -0x2560($v0)
    ctx->pc = 0x154850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957728), (uint8_t)GPR_U32(ctx, 4));
    // 0x154854: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x154854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154858: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15485c: 0xa040d9f8  sb          $zero, -0x2608($v0)
    ctx->pc = 0x15485cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 0));
    // 0x154860: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154864: 0xa040d9e8  sb          $zero, -0x2618($v0)
    ctx->pc = 0x154864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957544), (uint8_t)GPR_U32(ctx, 0));
    // 0x154868: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15486c: 0xa040d9d8  sb          $zero, -0x2628($v0)
    ctx->pc = 0x15486cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957528), (uint8_t)GPR_U32(ctx, 0));
    // 0x154870: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154874: 0xa040d9d0  sb          $zero, -0x2630($v0)
    ctx->pc = 0x154874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 0));
    // 0x154878: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15487c: 0xa043b828  sb          $v1, -0x47D8($v0)
    ctx->pc = 0x15487cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948904), (uint8_t)GPR_U32(ctx, 3));
    // 0x154880: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154884: 0xa043b820  sb          $v1, -0x47E0($v0)
    ctx->pc = 0x154884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948896), (uint8_t)GPR_U32(ctx, 3));
    // 0x154888: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15488c: 0xa043b829  sb          $v1, -0x47D7($v0)
    ctx->pc = 0x15488cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948905), (uint8_t)GPR_U32(ctx, 3));
    // 0x154890: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154894: 0xa043b821  sb          $v1, -0x47DF($v0)
    ctx->pc = 0x154894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948897), (uint8_t)GPR_U32(ctx, 3));
    // 0x154898: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15489c: 0xa043b82a  sb          $v1, -0x47D6($v0)
    ctx->pc = 0x15489cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948906), (uint8_t)GPR_U32(ctx, 3));
    // 0x1548a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1548a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1548a4: 0xa043b822  sb          $v1, -0x47DE($v0)
    ctx->pc = 0x1548a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948898), (uint8_t)GPR_U32(ctx, 3));
    // 0x1548a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1548a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1548ac: 0xa043b82b  sb          $v1, -0x47D5($v0)
    ctx->pc = 0x1548acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948907), (uint8_t)GPR_U32(ctx, 3));
    // 0x1548b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1548b4: 0xc067f74  jal         func_19FDD0
    ctx->pc = 0x1548B4u;
    SET_GPR_U32(ctx, 31, 0x1548BCu);
    ctx->pc = 0x1548B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548B4u;
    // 0x1548b8: 0xa043b823  sb          $v1, -0x47DD($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948899), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDD0u, 0x1548B4u, 0x1548BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548BCu;
label_1548bc:
    // 0x1548bc: 0xc06810c  jal         func_1A0430
    ctx->pc = 0x1548BCu;
    SET_GPR_U32(ctx, 31, 0x1548C4u);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x1548BCu, 0x1548C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548C4u;
label_1548c4:
    // 0x1548c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1548c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1548c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1548C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1548CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548C8u;
        // 0x1548cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1548C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1548D0u;
}
