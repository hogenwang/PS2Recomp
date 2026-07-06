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

// Function: sub_00283EE0
// Address: 0x283ee0 - 0x283f80
void sub_00283EE0_0x283ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283EE0_0x283ee0");
#endif

    ctx->pc = 0x283ee0u;

    // 0x283ee0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x283ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x283ee4: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x283ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x283ee8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283EE8u;
    {
        const bool branch_taken_0x283ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EE8u;
        // 0x283eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ee8) {
            ctx->pc = 0x283F10u;
            goto label_283f10;
        }
    }
    ctx->pc = 0x283EF0u;
    // 0x283ef0: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x283ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x283ef4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283EF4u;
    {
        const bool branch_taken_0x283ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EF4u;
        // 0x283ef8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ef4) {
            ctx->pc = 0x283F10u;
            goto label_283f10;
        }
    }
    ctx->pc = 0x283EFCu;
    // 0x283efc: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x283efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x283f00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x283f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283f04: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x283f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283f08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283f0c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x283f0cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_283f10:
    // 0x283f10: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x283f10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x283f14: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x283f14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283f18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x283f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x283f1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283f20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283f20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283f24: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x283F24u;
    {
        const bool branch_taken_0x283f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283f24) {
            ctx->pc = 0x283F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283F24u;
            // 0x283f28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283F78u;
            goto label_283f78;
        }
    }
    ctx->pc = 0x283F2Cu;
    // 0x283f2c: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x283f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x283f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283F30u;
    {
        const bool branch_taken_0x283f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F30u;
        // 0x283f34: 0x2c620100  sltiu       $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f30) {
            ctx->pc = 0x283F40u;
            goto label_283f40;
        }
    }
    ctx->pc = 0x283F38u;
    // 0x283f38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x283F38u;
    {
        const bool branch_taken_0x283f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F38u;
        // 0x283f3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f38) {
            ctx->pc = 0x283F78u;
            goto label_283f78;
        }
    }
    ctx->pc = 0x283F40u;
label_283f40:
    // 0x283f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283F40u;
    {
        const bool branch_taken_0x283f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F40u;
        // 0x283f44: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f40) {
            ctx->pc = 0x283F50u;
            goto label_283f50;
        }
    }
    ctx->pc = 0x283F48u;
    // 0x283f48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x283F48u;
    {
        const bool branch_taken_0x283f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F48u;
        // 0x283f4c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f48) {
            ctx->pc = 0x283F78u;
            goto label_283f78;
        }
    }
    ctx->pc = 0x283F50u;
label_283f50:
    // 0x283f50: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x283f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283f54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283F54u;
    {
        const bool branch_taken_0x283f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F54u;
        // 0x283f58: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f54) {
            ctx->pc = 0x283F64u;
            goto label_283f64;
        }
    }
    ctx->pc = 0x283F5Cu;
    // 0x283f5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x283F5Cu;
    {
        const bool branch_taken_0x283f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F5Cu;
        // 0x283f60: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f5c) {
            ctx->pc = 0x283F78u;
            goto label_283f78;
        }
    }
    ctx->pc = 0x283F64u;
label_283f64:
    // 0x283f64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283f68: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x283f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283f6c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x283F6Cu;
    {
        const bool branch_taken_0x283f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283f6c) {
            ctx->pc = 0x283F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283F6Cu;
            // 0x283f70: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283F78u;
            goto label_283f78;
        }
    }
    ctx->pc = 0x283F74u;
    // 0x283f74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x283f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_283f78:
    // 0x283f78: 0x3e00008  jr          $ra
    ctx->pc = 0x283F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F78u;
        // 0x283f7c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283F80u;
}
