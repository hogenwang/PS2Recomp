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

// Function: sub_001548D0
// Address: 0x1548d0 - 0x1549b0
void sub_001548D0_0x1548d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001548D0_0x1548d0");
#endif

    switch (ctx->pc) {
        case 0x15498cu: goto label_15498c;
        case 0x154994u: goto label_154994;
        case 0x15499cu: goto label_15499c;
        default: break;
    }

    ctx->pc = 0x1548d0u;

    // 0x1548d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1548d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1548d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1548d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1548d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1548d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1548dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1548e0: 0xac40a1f8  sw          $zero, -0x5E08($v0)
    ctx->pc = 0x1548e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943224), GPR_U32(ctx, 0));
    // 0x1548e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1548e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1548e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1548e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1548ec: 0xa064daa0  sb          $a0, -0x2560($v1)
    ctx->pc = 0x1548ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957728), (uint8_t)GPR_U32(ctx, 4));
    // 0x1548f0: 0xa040db10  sb          $zero, -0x24F0($v0)
    ctx->pc = 0x1548f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957840), (uint8_t)GPR_U32(ctx, 0));
    // 0x1548f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1548f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1548f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1548f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1548fc: 0xa060d9f8  sb          $zero, -0x2608($v1)
    ctx->pc = 0x1548fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957560), (uint8_t)GPR_U32(ctx, 0));
    // 0x154900: 0xa040db00  sb          $zero, -0x2500($v0)
    ctx->pc = 0x154900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957824), (uint8_t)GPR_U32(ctx, 0));
    // 0x154904: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154908: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15490c: 0xa060d9e8  sb          $zero, -0x2618($v1)
    ctx->pc = 0x15490cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957544), (uint8_t)GPR_U32(ctx, 0));
    // 0x154910: 0xa440dab0  sh          $zero, -0x2550($v0)
    ctx->pc = 0x154910u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957744), (uint16_t)GPR_U32(ctx, 0));
    // 0x154914: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154918: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15491c: 0xa060d9d8  sb          $zero, -0x2628($v1)
    ctx->pc = 0x15491cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957528), (uint8_t)GPR_U32(ctx, 0));
    // 0x154920: 0xa040da08  sb          $zero, -0x25F8($v0)
    ctx->pc = 0x154920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 0));
    // 0x154924: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154928: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15492c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154930: 0xa040d9f0  sb          $zero, -0x2610($v0)
    ctx->pc = 0x154930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957552), (uint8_t)GPR_U32(ctx, 0));
    // 0x154934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154938: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15493c: 0xa040d9e0  sb          $zero, -0x2620($v0)
    ctx->pc = 0x15493cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957536), (uint8_t)GPR_U32(ctx, 0));
    // 0x154940: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x154944: 0xa440f350  sh          $zero, -0xCB0($v0)
    ctx->pc = 0x154944u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294964048), (uint16_t)GPR_U32(ctx, 0));
    // 0x154948: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15494c: 0xa043b828  sb          $v1, -0x47D8($v0)
    ctx->pc = 0x15494cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948904), (uint8_t)GPR_U32(ctx, 3));
    // 0x154950: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154954: 0xa043b820  sb          $v1, -0x47E0($v0)
    ctx->pc = 0x154954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948896), (uint8_t)GPR_U32(ctx, 3));
    // 0x154958: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15495c: 0xa043b829  sb          $v1, -0x47D7($v0)
    ctx->pc = 0x15495cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948905), (uint8_t)GPR_U32(ctx, 3));
    // 0x154960: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154964: 0xa043b821  sb          $v1, -0x47DF($v0)
    ctx->pc = 0x154964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948897), (uint8_t)GPR_U32(ctx, 3));
    // 0x154968: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15496c: 0xa043b82a  sb          $v1, -0x47D6($v0)
    ctx->pc = 0x15496cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948906), (uint8_t)GPR_U32(ctx, 3));
    // 0x154970: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154974: 0xa043b822  sb          $v1, -0x47DE($v0)
    ctx->pc = 0x154974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948898), (uint8_t)GPR_U32(ctx, 3));
    // 0x154978: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15497c: 0xa043b82b  sb          $v1, -0x47D5($v0)
    ctx->pc = 0x15497cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948907), (uint8_t)GPR_U32(ctx, 3));
    // 0x154980: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154984: 0xc04c1f8  jal         func_1307E0
    ctx->pc = 0x154984u;
    SET_GPR_U32(ctx, 31, 0x15498Cu);
    ctx->pc = 0x154988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154984u;
    // 0x154988: 0xa043b823  sb          $v1, -0x47DD($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948899), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307E0u, 0x154984u, 0x15498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15498Cu;
label_15498c:
    // 0x15498c: 0xc067f74  jal         func_19FDD0
    ctx->pc = 0x15498Cu;
    SET_GPR_U32(ctx, 31, 0x154994u);
    ctx->pc = 0x19FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDD0u, 0x15498Cu, 0x154994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154994u;
label_154994:
    // 0x154994: 0xc06810c  jal         func_1A0430
    ctx->pc = 0x154994u;
    SET_GPR_U32(ctx, 31, 0x15499Cu);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x154994u, 0x15499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15499Cu;
label_15499c:
    // 0x15499c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15499cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1549a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1549A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A0u;
        // 0x1549a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1549A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1549A8u;
    // 0x1549a8: 0x0  nop
    ctx->pc = 0x1549a8u;
    // NOP
    // 0x1549ac: 0x0  nop
    ctx->pc = 0x1549acu;
    // NOP
    if (ctx->pc == 0x1549acu) { ctx->pc = 0x1549b0u; }
}
