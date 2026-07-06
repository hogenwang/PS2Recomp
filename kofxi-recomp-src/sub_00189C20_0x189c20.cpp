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

// Function: sub_00189C20
// Address: 0x189c20 - 0x189cd0
void sub_00189C20_0x189c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189C20_0x189c20");
#endif

    switch (ctx->pc) {
        case 0x189c90u: goto label_189c90;
        default: break;
    }

    ctx->pc = 0x189c20u;

    // 0x189c20: 0xa48004a6  sh          $zero, 0x4A6($a0)
    ctx->pc = 0x189c20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c28: 0xa48004a8  sh          $zero, 0x4A8($a0)
    ctx->pc = 0x189c28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x189c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c30: 0xa48004aa  sh          $zero, 0x4AA($a0)
    ctx->pc = 0x189c30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1194), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c34: 0xa48004ac  sh          $zero, 0x4AC($a0)
    ctx->pc = 0x189c34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1196), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c38: 0xa48004ae  sh          $zero, 0x4AE($a0)
    ctx->pc = 0x189c38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1198), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c3c: 0xa48004b0  sh          $zero, 0x4B0($a0)
    ctx->pc = 0x189c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1200), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c40: 0xa48004b2  sh          $zero, 0x4B2($a0)
    ctx->pc = 0x189c40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1202), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c44: 0xa48004b4  sh          $zero, 0x4B4($a0)
    ctx->pc = 0x189c44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1204), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c48: 0xa48004b6  sh          $zero, 0x4B6($a0)
    ctx->pc = 0x189c48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1206), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c4c: 0xa48004b8  sh          $zero, 0x4B8($a0)
    ctx->pc = 0x189c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1208), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c50: 0xa48004ba  sh          $zero, 0x4BA($a0)
    ctx->pc = 0x189c50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1210), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c54: 0xa48004bc  sh          $zero, 0x4BC($a0)
    ctx->pc = 0x189c54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1212), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c58: 0xa48004be  sh          $zero, 0x4BE($a0)
    ctx->pc = 0x189c58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1214), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c5c: 0xa48004c0  sh          $zero, 0x4C0($a0)
    ctx->pc = 0x189c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1216), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c60: 0xa48004c2  sh          $zero, 0x4C2($a0)
    ctx->pc = 0x189c60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1218), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c64: 0xa48004c4  sh          $zero, 0x4C4($a0)
    ctx->pc = 0x189c64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1220), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c68: 0xa48004c6  sh          $zero, 0x4C6($a0)
    ctx->pc = 0x189c68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1222), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c6c: 0xa48004c8  sh          $zero, 0x4C8($a0)
    ctx->pc = 0x189c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1224), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c70: 0xa48004ca  sh          $zero, 0x4CA($a0)
    ctx->pc = 0x189c70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1226), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c74: 0xa48004cc  sh          $zero, 0x4CC($a0)
    ctx->pc = 0x189c74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1228), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c78: 0xa48004ce  sh          $zero, 0x4CE($a0)
    ctx->pc = 0x189c78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1230), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c7c: 0xa48004d0  sh          $zero, 0x4D0($a0)
    ctx->pc = 0x189c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1232), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c80: 0xa48004d2  sh          $zero, 0x4D2($a0)
    ctx->pc = 0x189c80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1234), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c84: 0xa48004d4  sh          $zero, 0x4D4($a0)
    ctx->pc = 0x189c84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1236), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c88: 0xa48004d6  sh          $zero, 0x4D6($a0)
    ctx->pc = 0x189c88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1238), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c8c: 0xa48004d8  sh          $zero, 0x4D8($a0)
    ctx->pc = 0x189c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1240), (uint16_t)GPR_U32(ctx, 0));
label_189c90:
    // 0x189c90: 0xa4a004da  sh          $zero, 0x4DA($a1)
    ctx->pc = 0x189c90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1242), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x189c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x189c98: 0xa4a004dc  sh          $zero, 0x4DC($a1)
    ctx->pc = 0x189c98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1244), (uint16_t)GPR_U32(ctx, 0));
    // 0x189c9c: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x189c9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x189ca0: 0xa4a004de  sh          $zero, 0x4DE($a1)
    ctx->pc = 0x189ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1246), (uint16_t)GPR_U32(ctx, 0));
    // 0x189ca4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189CA4u;
    {
        const bool branch_taken_0x189ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CA4u;
        // 0x189ca8: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ca4) {
            ctx->pc = 0x189C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189c90;
        }
    }
    ctx->pc = 0x189CACu;
    // 0x189cac: 0xa08004e6  sb          $zero, 0x4E6($a0)
    ctx->pc = 0x189cacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1254), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cb0: 0xa08004e7  sb          $zero, 0x4E7($a0)
    ctx->pc = 0x189cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1255), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cb4: 0xa08004e8  sb          $zero, 0x4E8($a0)
    ctx->pc = 0x189cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1256), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cb8: 0xa08004e9  sb          $zero, 0x4E9($a0)
    ctx->pc = 0x189cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1257), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cbc: 0xa08004ea  sb          $zero, 0x4EA($a0)
    ctx->pc = 0x189cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1258), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cc0: 0xa08004eb  sb          $zero, 0x4EB($a0)
    ctx->pc = 0x189cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1259), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cc4: 0xa48004ec  sh          $zero, 0x4EC($a0)
    ctx->pc = 0x189cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1260), (uint16_t)GPR_U32(ctx, 0));
    // 0x189cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x189CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CC8u;
        // 0x189ccc: 0xa48004ee  sh          $zero, 0x4EE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1262), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189CD0u;
}
