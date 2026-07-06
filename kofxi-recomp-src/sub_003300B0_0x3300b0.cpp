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

// Function: sub_003300B0
// Address: 0x3300b0 - 0x330180
void sub_003300B0_0x3300b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003300B0_0x3300b0");
#endif

    ctx->pc = 0x3300b0u;

    // 0x3300b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3300b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3300b4: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3300B4u;
    {
        const bool branch_taken_0x3300b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3300b4) {
            ctx->pc = 0x3300B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3300B4u;
            // 0x3300b8: 0x84850014  lh          $a1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330118u;
            goto label_330118;
        }
    }
    ctx->pc = 0x3300BCu;
    // 0x3300bc: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x3300bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3300c0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x3300c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3300c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3300c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3300c8: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x3300c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3300cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3300ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3300d0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3300d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3300d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3300d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3300d8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3300d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3300dc: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3300DCu;
    {
        const bool branch_taken_0x3300dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3300dc) {
            ctx->pc = 0x33016Cu;
            goto label_33016c;
        }
    }
    ctx->pc = 0x3300E4u;
    // 0x3300e4: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x3300e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3300e8: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x3300e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3300ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3300ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3300f0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3300f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3300f4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x3300f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3300f8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3300F8u;
    {
        const bool branch_taken_0x3300f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300f8) {
            ctx->pc = 0x33016Cu;
            goto label_33016c;
        }
    }
    ctx->pc = 0x330100u;
    // 0x330100: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x330100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x330104: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330108: 0x9084e810  lbu         $a0, -0x17F0($a0)
    ctx->pc = 0x330108u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961168)));
    // 0x33010c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x33010cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x330110: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x330110u;
    {
        const bool branch_taken_0x330110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330110u;
        // 0x330114: 0xa064e810  sb          $a0, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330110) {
            ctx->pc = 0x33016Cu;
            goto label_33016c;
        }
    }
    ctx->pc = 0x330118u;
label_330118:
    // 0x330118: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x330118u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33011c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x33011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x330120: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x330120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x330124: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x330124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x330128: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x330128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x33012c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33012cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x330130: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x330130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x330134: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x330134u;
    {
        const bool branch_taken_0x330134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x330134) {
            ctx->pc = 0x33016Cu;
            goto label_33016c;
        }
    }
    ctx->pc = 0x33013Cu;
    // 0x33013c: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x33013cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x330140: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x330140u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x330144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x330144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x330148: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x330148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33014c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x33014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x330150: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x330150u;
    {
        const bool branch_taken_0x330150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330150) {
            ctx->pc = 0x33016Cu;
            goto label_33016c;
        }
    }
    ctx->pc = 0x330158u;
    // 0x330158: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x330158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33015c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33015cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330160: 0x9084e810  lbu         $a0, -0x17F0($a0)
    ctx->pc = 0x330160u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961168)));
    // 0x330164: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x330164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x330168: 0xa064e810  sb          $a0, -0x17F0($v1)
    ctx->pc = 0x330168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 4));
label_33016c:
    // 0x33016c: 0x3e00008  jr          $ra
    ctx->pc = 0x33016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33016Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330174u;
    // 0x330174: 0x0  nop
    ctx->pc = 0x330174u;
    // NOP
    // 0x330178: 0x0  nop
    ctx->pc = 0x330178u;
    // NOP
    // 0x33017c: 0x0  nop
    ctx->pc = 0x33017cu;
    // NOP
    if (ctx->pc == 0x33017cu) { ctx->pc = 0x330180u; }
}
