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

// Function: sub_001C9DE0
// Address: 0x1c9de0 - 0x1c9fa0
void sub_001C9DE0_0x1c9de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9DE0_0x1c9de0");
#endif

    switch (ctx->pc) {
        case 0x1c9de0u: goto label_1c9de0;
        case 0x1c9de4u: goto label_1c9de4;
        case 0x1c9de8u: goto label_1c9de8;
        case 0x1c9decu: goto label_1c9dec;
        case 0x1c9df0u: goto label_1c9df0;
        case 0x1c9df4u: goto label_1c9df4;
        case 0x1c9df8u: goto label_1c9df8;
        case 0x1c9dfcu: goto label_1c9dfc;
        case 0x1c9e00u: goto label_1c9e00;
        case 0x1c9e04u: goto label_1c9e04;
        case 0x1c9e08u: goto label_1c9e08;
        case 0x1c9e0cu: goto label_1c9e0c;
        case 0x1c9e10u: goto label_1c9e10;
        case 0x1c9e14u: goto label_1c9e14;
        case 0x1c9e18u: goto label_1c9e18;
        case 0x1c9e1cu: goto label_1c9e1c;
        case 0x1c9e20u: goto label_1c9e20;
        case 0x1c9e24u: goto label_1c9e24;
        case 0x1c9e28u: goto label_1c9e28;
        case 0x1c9e2cu: goto label_1c9e2c;
        case 0x1c9e30u: goto label_1c9e30;
        case 0x1c9e34u: goto label_1c9e34;
        case 0x1c9e38u: goto label_1c9e38;
        case 0x1c9e3cu: goto label_1c9e3c;
        case 0x1c9e40u: goto label_1c9e40;
        case 0x1c9e44u: goto label_1c9e44;
        case 0x1c9e48u: goto label_1c9e48;
        case 0x1c9e4cu: goto label_1c9e4c;
        case 0x1c9e50u: goto label_1c9e50;
        case 0x1c9e54u: goto label_1c9e54;
        case 0x1c9e58u: goto label_1c9e58;
        case 0x1c9e5cu: goto label_1c9e5c;
        case 0x1c9e60u: goto label_1c9e60;
        case 0x1c9e64u: goto label_1c9e64;
        case 0x1c9e68u: goto label_1c9e68;
        case 0x1c9e6cu: goto label_1c9e6c;
        case 0x1c9e70u: goto label_1c9e70;
        case 0x1c9e74u: goto label_1c9e74;
        case 0x1c9e78u: goto label_1c9e78;
        case 0x1c9e7cu: goto label_1c9e7c;
        case 0x1c9e80u: goto label_1c9e80;
        case 0x1c9e84u: goto label_1c9e84;
        case 0x1c9e88u: goto label_1c9e88;
        case 0x1c9e8cu: goto label_1c9e8c;
        case 0x1c9e90u: goto label_1c9e90;
        case 0x1c9e94u: goto label_1c9e94;
        case 0x1c9e98u: goto label_1c9e98;
        case 0x1c9e9cu: goto label_1c9e9c;
        case 0x1c9ea0u: goto label_1c9ea0;
        case 0x1c9ea4u: goto label_1c9ea4;
        case 0x1c9ea8u: goto label_1c9ea8;
        case 0x1c9eacu: goto label_1c9eac;
        case 0x1c9eb0u: goto label_1c9eb0;
        case 0x1c9eb4u: goto label_1c9eb4;
        case 0x1c9eb8u: goto label_1c9eb8;
        case 0x1c9ebcu: goto label_1c9ebc;
        case 0x1c9ec0u: goto label_1c9ec0;
        case 0x1c9ec4u: goto label_1c9ec4;
        case 0x1c9ec8u: goto label_1c9ec8;
        case 0x1c9eccu: goto label_1c9ecc;
        case 0x1c9ed0u: goto label_1c9ed0;
        case 0x1c9ed4u: goto label_1c9ed4;
        case 0x1c9ed8u: goto label_1c9ed8;
        case 0x1c9edcu: goto label_1c9edc;
        case 0x1c9ee0u: goto label_1c9ee0;
        case 0x1c9ee4u: goto label_1c9ee4;
        case 0x1c9ee8u: goto label_1c9ee8;
        case 0x1c9eecu: goto label_1c9eec;
        case 0x1c9ef0u: goto label_1c9ef0;
        case 0x1c9ef4u: goto label_1c9ef4;
        case 0x1c9ef8u: goto label_1c9ef8;
        case 0x1c9efcu: goto label_1c9efc;
        case 0x1c9f00u: goto label_1c9f00;
        case 0x1c9f04u: goto label_1c9f04;
        case 0x1c9f08u: goto label_1c9f08;
        case 0x1c9f0cu: goto label_1c9f0c;
        case 0x1c9f10u: goto label_1c9f10;
        case 0x1c9f14u: goto label_1c9f14;
        case 0x1c9f18u: goto label_1c9f18;
        case 0x1c9f1cu: goto label_1c9f1c;
        case 0x1c9f20u: goto label_1c9f20;
        case 0x1c9f24u: goto label_1c9f24;
        case 0x1c9f28u: goto label_1c9f28;
        case 0x1c9f2cu: goto label_1c9f2c;
        case 0x1c9f30u: goto label_1c9f30;
        case 0x1c9f34u: goto label_1c9f34;
        case 0x1c9f38u: goto label_1c9f38;
        case 0x1c9f3cu: goto label_1c9f3c;
        case 0x1c9f40u: goto label_1c9f40;
        case 0x1c9f44u: goto label_1c9f44;
        case 0x1c9f48u: goto label_1c9f48;
        case 0x1c9f4cu: goto label_1c9f4c;
        case 0x1c9f50u: goto label_1c9f50;
        case 0x1c9f54u: goto label_1c9f54;
        case 0x1c9f58u: goto label_1c9f58;
        case 0x1c9f5cu: goto label_1c9f5c;
        case 0x1c9f60u: goto label_1c9f60;
        case 0x1c9f64u: goto label_1c9f64;
        case 0x1c9f68u: goto label_1c9f68;
        case 0x1c9f6cu: goto label_1c9f6c;
        case 0x1c9f70u: goto label_1c9f70;
        case 0x1c9f74u: goto label_1c9f74;
        case 0x1c9f78u: goto label_1c9f78;
        case 0x1c9f7cu: goto label_1c9f7c;
        case 0x1c9f80u: goto label_1c9f80;
        case 0x1c9f84u: goto label_1c9f84;
        case 0x1c9f88u: goto label_1c9f88;
        case 0x1c9f8cu: goto label_1c9f8c;
        case 0x1c9f90u: goto label_1c9f90;
        case 0x1c9f94u: goto label_1c9f94;
        case 0x1c9f98u: goto label_1c9f98;
        case 0x1c9f9cu: goto label_1c9f9c;
        default: break;
    }

    ctx->pc = 0x1c9de0u;

label_1c9de0:
    // 0x1c9de0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9de4:
    // 0x1c9de4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9de8:
    // 0x1c9de8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9dec:
    // 0x1c9dec: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_1c9df0:
    if (ctx->pc == 0x1C9DF0u) {
        ctx->pc = 0x1C9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DECu;
        // 0x1c9df0: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DF4u;
        goto label_1c9df4;
    }
    ctx->pc = 0x1C9DECu;
    {
        const bool branch_taken_0x1c9dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1c9dec) {
            ctx->pc = 0x1C9DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9DECu;
            // 0x1c9df0: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E04u;
            goto label_1c9e04;
        }
    }
    ctx->pc = 0x1C9DF4u;
label_1c9df4:
    // 0x1c9df4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9df8:
    // 0x1c9df8: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9dfc:
    // 0x1c9dfc: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_1c9e00:
    if (ctx->pc == 0x1C9E00u) {
        ctx->pc = 0x1C9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DFCu;
        // 0x1c9e00: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E04u;
        goto label_1c9e04;
    }
    ctx->pc = 0x1C9DFCu;
    {
        const bool branch_taken_0x1c9dfc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c9dfc) {
            ctx->pc = 0x1C9E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9DFCu;
            // 0x1c9e00: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E04u;
            goto label_1c9e04;
        }
    }
    ctx->pc = 0x1C9E04u;
label_1c9e04:
    // 0x1c9e04: 0x3e00008  jr          $ra
label_1c9e08:
    if (ctx->pc == 0x1C9E08u) {
        ctx->pc = 0x1C9E0Cu;
        goto label_1c9e0c;
    }
    ctx->pc = 0x1C9E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9E0Cu;
label_1c9e0c:
    // 0x1c9e0c: 0x0  nop
    ctx->pc = 0x1c9e0cu;
    // NOP
label_1c9e10:
    // 0x1c9e10: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9e14:
    // 0x1c9e14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9e18:
    // 0x1c9e18: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9e1c:
    // 0x1c9e1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9e20:
    // 0x1c9e20: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1c9e24:
    if (ctx->pc == 0x1C9E24u) {
        ctx->pc = 0x1C9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E20u;
        // 0x1c9e24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E28u;
        goto label_1c9e28;
    }
    ctx->pc = 0x1C9E20u;
    {
        const bool branch_taken_0x1c9e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E20u;
        // 0x1c9e24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e20) {
            ctx->pc = 0x1C9E38u;
            goto label_1c9e38;
        }
    }
    ctx->pc = 0x1C9E28u;
label_1c9e28:
    // 0x1c9e28: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9e2c:
    // 0x1c9e2c: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9e30:
    // 0x1c9e30: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1c9e34:
    if (ctx->pc == 0x1C9E34u) {
        ctx->pc = 0x1C9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E30u;
        // 0x1c9e34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E38u;
        goto label_1c9e38;
    }
    ctx->pc = 0x1C9E30u;
    {
        const bool branch_taken_0x1c9e30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E30u;
        // 0x1c9e34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e30) {
            ctx->pc = 0x1C9E50u;
            goto label_1c9e50;
        }
    }
    ctx->pc = 0x1C9E38u;
label_1c9e38:
    // 0x1c9e38: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c9e3c:
    // 0x1c9e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9e40:
    // 0x1c9e40: 0x2484b658  addiu       $a0, $a0, -0x49A8
    ctx->pc = 0x1c9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948440));
label_1c9e44:
    // 0x1c9e44: 0x806d212  j           func_1B4848
label_1c9e48:
    if (ctx->pc == 0x1C9E48u) {
        ctx->pc = 0x1C9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E44u;
        // 0x1c9e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E4Cu;
        goto label_1c9e4c;
    }
    ctx->pc = 0x1C9E44u;
    ctx->pc = 0x1C9E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E44u;
    // 0x1c9e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9E4Cu;
label_1c9e4c:
    // 0x1c9e4c: 0x0  nop
    ctx->pc = 0x1c9e4cu;
    // NOP
label_1c9e50:
    // 0x1c9e50: 0x3e00008  jr          $ra
label_1c9e54:
    if (ctx->pc == 0x1C9E54u) {
        ctx->pc = 0x1C9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E50u;
        // 0x1c9e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E58u;
        goto label_1c9e58;
    }
    ctx->pc = 0x1C9E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E50u;
        // 0x1c9e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9E58u;
label_1c9e58:
    // 0x1c9e58: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9e5c:
    // 0x1c9e5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9e60:
    // 0x1c9e60: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9e64:
    // 0x1c9e64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9e68:
    // 0x1c9e68: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1c9e6c:
    if (ctx->pc == 0x1C9E6Cu) {
        ctx->pc = 0x1C9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E68u;
        // 0x1c9e6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E70u;
        goto label_1c9e70;
    }
    ctx->pc = 0x1C9E68u;
    {
        const bool branch_taken_0x1c9e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E68u;
        // 0x1c9e6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e68) {
            ctx->pc = 0x1C9E80u;
            goto label_1c9e80;
        }
    }
    ctx->pc = 0x1C9E70u;
label_1c9e70:
    // 0x1c9e70: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9e74:
    // 0x1c9e74: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9e78:
    // 0x1c9e78: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1c9e7c:
    if (ctx->pc == 0x1C9E7Cu) {
        ctx->pc = 0x1C9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E78u;
        // 0x1c9e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E80u;
        goto label_1c9e80;
    }
    ctx->pc = 0x1C9E78u;
    {
        const bool branch_taken_0x1c9e78 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E78u;
        // 0x1c9e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e78) {
            ctx->pc = 0x1C9E98u;
            goto label_1c9e98;
        }
    }
    ctx->pc = 0x1C9E80u;
label_1c9e80:
    // 0x1c9e80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c9e84:
    // 0x1c9e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9e88:
    // 0x1c9e88: 0x2484b680  addiu       $a0, $a0, -0x4980
    ctx->pc = 0x1c9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948480));
label_1c9e8c:
    // 0x1c9e8c: 0x806d212  j           func_1B4848
label_1c9e90:
    if (ctx->pc == 0x1C9E90u) {
        ctx->pc = 0x1C9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E8Cu;
        // 0x1c9e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E94u;
        goto label_1c9e94;
    }
    ctx->pc = 0x1C9E8Cu;
    ctx->pc = 0x1C9E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E8Cu;
    // 0x1c9e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9E94u;
label_1c9e94:
    // 0x1c9e94: 0x0  nop
    ctx->pc = 0x1c9e94u;
    // NOP
label_1c9e98:
    // 0x1c9e98: 0x3e00008  jr          $ra
label_1c9e9c:
    if (ctx->pc == 0x1C9E9Cu) {
        ctx->pc = 0x1C9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E98u;
        // 0x1c9e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EA0u;
        goto label_1c9ea0;
    }
    ctx->pc = 0x1C9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E98u;
        // 0x1c9e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9EA0u;
label_1c9ea0:
    // 0x1c9ea0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9ea4:
    // 0x1c9ea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9ea8:
    // 0x1c9ea8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9eac:
    // 0x1c9eac: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1c9eb0:
    if (ctx->pc == 0x1C9EB0u) {
        ctx->pc = 0x1C9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EACu;
        // 0x1c9eb0: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EB4u;
        goto label_1c9eb4;
    }
    ctx->pc = 0x1C9EACu;
    {
        const bool branch_taken_0x1c9eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EACu;
        // 0x1c9eb0: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9eac) {
            ctx->pc = 0x1C9EC4u;
            goto label_1c9ec4;
        }
    }
    ctx->pc = 0x1C9EB4u;
label_1c9eb4:
    // 0x1c9eb4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9eb8:
    // 0x1c9eb8: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9ebc:
    // 0x1c9ebc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1c9ec0:
    if (ctx->pc == 0x1C9EC0u) {
        ctx->pc = 0x1C9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EBCu;
        // 0x1c9ec0: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EC4u;
        goto label_1c9ec4;
    }
    ctx->pc = 0x1C9EBCu;
    {
        const bool branch_taken_0x1c9ebc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EBCu;
        // 0x1c9ec0: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ebc) {
            ctx->pc = 0x1C9ECCu;
            goto label_1c9ecc;
        }
    }
    ctx->pc = 0x1C9EC4u;
label_1c9ec4:
    // 0x1c9ec4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1c9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1c9ec8:
    // 0x1c9ec8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1c9ecc:
    // 0x1c9ecc: 0x3e00008  jr          $ra
label_1c9ed0:
    if (ctx->pc == 0x1C9ED0u) {
        ctx->pc = 0x1C9ED4u;
        goto label_1c9ed4;
    }
    ctx->pc = 0x1C9ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9ED4u;
label_1c9ed4:
    // 0x1c9ed4: 0x0  nop
    ctx->pc = 0x1c9ed4u;
    // NOP
label_1c9ed8:
    // 0x1c9ed8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9edc:
    // 0x1c9edc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9ee0:
    // 0x1c9ee0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9ee4:
    // 0x1c9ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9ee8:
    // 0x1c9ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c9eec:
    // 0x1c9eec: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1c9ef0:
    if (ctx->pc == 0x1C9EF0u) {
        ctx->pc = 0x1C9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EECu;
        // 0x1c9ef0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EF4u;
        goto label_1c9ef4;
    }
    ctx->pc = 0x1C9EECu;
    {
        const bool branch_taken_0x1c9eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EECu;
        // 0x1c9ef0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9eec) {
            ctx->pc = 0x1C9F04u;
            goto label_1c9f04;
        }
    }
    ctx->pc = 0x1C9EF4u;
label_1c9ef4:
    // 0x1c9ef4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1c9ef8:
    // 0x1c9ef8: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1c9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1c9efc:
    // 0x1c9efc: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_1c9f00:
    if (ctx->pc == 0x1C9F00u) {
        ctx->pc = 0x1C9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EFCu;
        // 0x1c9f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F04u;
        goto label_1c9f04;
    }
    ctx->pc = 0x1C9EFCu;
    {
        const bool branch_taken_0x1c9efc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EFCu;
        // 0x1c9f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9efc) {
            ctx->pc = 0x1C9F30u;
            goto label_1c9f30;
        }
    }
    ctx->pc = 0x1C9F04u;
label_1c9f04:
    // 0x1c9f04: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c9f08:
    // 0x1c9f08: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c9f0c:
    // 0x1c9f0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9f10:
    // 0x1c9f10: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c9f14:
    // 0x1c9f14: 0x40f809  jalr        $v0
label_1c9f18:
    if (ctx->pc == 0x1C9F18u) {
        ctx->pc = 0x1C9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F14u;
        // 0x1c9f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F1Cu;
        goto label_1c9f1c;
    }
    ctx->pc = 0x1C9F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9F1Cu);
        ctx->pc = 0x1C9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F14u;
        // 0x1c9f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F14u, 0x1C9F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9F1Cu;
label_1c9f1c:
    // 0x1c9f1c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1c9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1c9f20:
    // 0x1c9f20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c9f24:
    // 0x1c9f24: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1c9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1c9f28:
    // 0x1c9f28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c9f2c:
    // 0x1c9f2c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1c9f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_1c9f30:
    // 0x1c9f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9f34:
    // 0x1c9f34: 0x3e00008  jr          $ra
label_1c9f38:
    if (ctx->pc == 0x1C9F38u) {
        ctx->pc = 0x1C9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F34u;
        // 0x1c9f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F3Cu;
        goto label_1c9f3c;
    }
    ctx->pc = 0x1C9F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F34u;
        // 0x1c9f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9F3Cu;
label_1c9f3c:
    // 0x1c9f3c: 0x0  nop
    ctx->pc = 0x1c9f3cu;
    // NOP
label_1c9f40:
    // 0x1c9f40: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9f44:
    // 0x1c9f44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9f48:
    // 0x1c9f48: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9f4c:
    // 0x1c9f4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9f50:
    // 0x1c9f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c9f54:
    // 0x1c9f54: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1c9f58:
    if (ctx->pc == 0x1C9F58u) {
        ctx->pc = 0x1C9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F54u;
        // 0x1c9f58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F5Cu;
        goto label_1c9f5c;
    }
    ctx->pc = 0x1C9F54u;
    {
        const bool branch_taken_0x1c9f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F54u;
        // 0x1c9f58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f54) {
            ctx->pc = 0x1C9F6Cu;
            goto label_1c9f6c;
        }
    }
    ctx->pc = 0x1C9F5Cu;
label_1c9f5c:
    // 0x1c9f5c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1c9f60:
    // 0x1c9f60: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1c9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1c9f64:
    // 0x1c9f64: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_1c9f68:
    if (ctx->pc == 0x1C9F68u) {
        ctx->pc = 0x1C9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F64u;
        // 0x1c9f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F6Cu;
        goto label_1c9f6c;
    }
    ctx->pc = 0x1C9F64u;
    {
        const bool branch_taken_0x1c9f64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F64u;
        // 0x1c9f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f64) {
            ctx->pc = 0x1C9F90u;
            goto label_1c9f90;
        }
    }
    ctx->pc = 0x1C9F6Cu;
label_1c9f6c:
    // 0x1c9f6c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c9f70:
    // 0x1c9f70: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c9f74:
    // 0x1c9f74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9f78:
    // 0x1c9f78: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c9f7c:
    // 0x1c9f7c: 0x40f809  jalr        $v0
label_1c9f80:
    if (ctx->pc == 0x1C9F80u) {
        ctx->pc = 0x1C9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F7Cu;
        // 0x1c9f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F84u;
        goto label_1c9f84;
    }
    ctx->pc = 0x1C9F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9F84u);
        ctx->pc = 0x1C9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F7Cu;
        // 0x1c9f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F7Cu, 0x1C9F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9F84u;
label_1c9f84:
    // 0x1c9f84: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1c9f88:
    // 0x1c9f88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c9f8c:
    // 0x1c9f8c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1c9f8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_1c9f90:
    // 0x1c9f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9f94:
    // 0x1c9f94: 0x3e00008  jr          $ra
label_1c9f98:
    if (ctx->pc == 0x1C9F98u) {
        ctx->pc = 0x1C9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F94u;
        // 0x1c9f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F9Cu;
        goto label_1c9f9c;
    }
    ctx->pc = 0x1C9F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F94u;
        // 0x1c9f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9F9Cu;
label_1c9f9c:
    // 0x1c9f9c: 0x0  nop
    ctx->pc = 0x1c9f9cu;
    // NOP
    if (ctx->pc == 0x1c9f9cu) { ctx->pc = 0x1c9fa0u; }
}
