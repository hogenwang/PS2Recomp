#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00240E38
// Address: 0x240e38 - 0x240ee0
void sub_00240E38_0x240e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E38_0x240e38");
#endif

    switch (ctx->pc) {
        case 0x240e68u: goto label_240e68;
        case 0x240e74u: goto label_240e74;
        case 0x240e80u: goto label_240e80;
        case 0x240e8cu: goto label_240e8c;
        case 0x240e98u: goto label_240e98;
        case 0x240ea4u: goto label_240ea4;
        case 0x240eb0u: goto label_240eb0;
        case 0x240ebcu: goto label_240ebc;
        case 0x240ec8u: goto label_240ec8;
        case 0x240ed4u: goto label_240ed4;
        default: break;
    }

    ctx->pc = 0x240e38u;

    // 0x240e38: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x240e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x240e3c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x240E3Cu;
    {
        const bool branch_taken_0x240e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E3Cu;
            // 0x240e40: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e3c) {
            ctx->pc = 0x240ED4u;
            goto label_240ed4;
        }
    }
    ctx->pc = 0x240E44u;
    // 0x240e44: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e48: 0x24426410  addiu       $v0, $v0, 0x6410
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25616));
    // 0x240e4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240e50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240e54: 0x800008  jr          $a0
    ctx->pc = 0x240E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240E5Cu: goto label_240e5c;
            case 0x240E68u: goto label_240e68;
            case 0x240E74u: goto label_240e74;
            case 0x240E80u: goto label_240e80;
            case 0x240E8Cu: goto label_240e8c;
            case 0x240E98u: goto label_240e98;
            case 0x240EA4u: goto label_240ea4;
            case 0x240EB0u: goto label_240eb0;
            case 0x240EBCu: goto label_240ebc;
            case 0x240EC8u: goto label_240ec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240E5Cu;
label_240e5c:
    // 0x240e5c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e60: 0x3e00008  jr          $ra
    ctx->pc = 0x240E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E60u;
            // 0x240e64: 0x24426388  addiu       $v0, $v0, 0x6388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240E68u;
label_240e68:
    // 0x240e68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x240E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E6Cu;
            // 0x240e70: 0x24426390  addiu       $v0, $v0, 0x6390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240E74u;
label_240e74:
    // 0x240e74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e78: 0x3e00008  jr          $ra
    ctx->pc = 0x240E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E78u;
            // 0x240e7c: 0x244263a0  addiu       $v0, $v0, 0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240E80u;
label_240e80:
    // 0x240e80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e84: 0x3e00008  jr          $ra
    ctx->pc = 0x240E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E84u;
            // 0x240e88: 0x244263a8  addiu       $v0, $v0, 0x63A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240E8Cu;
label_240e8c:
    // 0x240e8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e90: 0x3e00008  jr          $ra
    ctx->pc = 0x240E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E90u;
            // 0x240e94: 0x244263b0  addiu       $v0, $v0, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240E98u;
label_240e98:
    // 0x240e98: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x240E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E9Cu;
            // 0x240ea0: 0x244263b8  addiu       $v0, $v0, 0x63B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240EA4u;
label_240ea4:
    // 0x240ea4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x240EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EA8u;
            // 0x240eac: 0x244263c8  addiu       $v0, $v0, 0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240EB0u;
label_240eb0:
    // 0x240eb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x240EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EB4u;
            // 0x240eb8: 0x244263d8  addiu       $v0, $v0, 0x63D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240EBCu;
label_240ebc:
    // 0x240ebc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x240EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EC0u;
            // 0x240ec4: 0x244263e8  addiu       $v0, $v0, 0x63E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240EC8u;
label_240ec8:
    // 0x240ec8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x240ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240ECCu;
            // 0x240ed0: 0x244263f8  addiu       $v0, $v0, 0x63F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240ED4u;
label_240ed4:
    // 0x240ed4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x240ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240ED8u;
            // 0x240edc: 0x24426400  addiu       $v0, $v0, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240EE0u;
    ctx->pc = 0x240ee0u;
}
