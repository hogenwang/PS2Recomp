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

// Function: sub_002A2EB0
// Address: 0x2a2eb0 - 0x2a2fd8
void sub_002A2EB0_0x2a2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2EB0_0x2a2eb0");
#endif

    switch (ctx->pc) {
        case 0x2a2eb0u: goto label_2a2eb0;
        case 0x2a2eb4u: goto label_2a2eb4;
        case 0x2a2eb8u: goto label_2a2eb8;
        case 0x2a2ebcu: goto label_2a2ebc;
        case 0x2a2ec0u: goto label_2a2ec0;
        case 0x2a2ec4u: goto label_2a2ec4;
        case 0x2a2ec8u: goto label_2a2ec8;
        case 0x2a2eccu: goto label_2a2ecc;
        case 0x2a2ed0u: goto label_2a2ed0;
        case 0x2a2ed4u: goto label_2a2ed4;
        case 0x2a2ed8u: goto label_2a2ed8;
        case 0x2a2edcu: goto label_2a2edc;
        case 0x2a2ee0u: goto label_2a2ee0;
        case 0x2a2ee4u: goto label_2a2ee4;
        case 0x2a2ee8u: goto label_2a2ee8;
        case 0x2a2eecu: goto label_2a2eec;
        case 0x2a2ef0u: goto label_2a2ef0;
        case 0x2a2ef4u: goto label_2a2ef4;
        case 0x2a2ef8u: goto label_2a2ef8;
        case 0x2a2efcu: goto label_2a2efc;
        case 0x2a2f00u: goto label_2a2f00;
        case 0x2a2f04u: goto label_2a2f04;
        case 0x2a2f08u: goto label_2a2f08;
        case 0x2a2f0cu: goto label_2a2f0c;
        case 0x2a2f10u: goto label_2a2f10;
        case 0x2a2f14u: goto label_2a2f14;
        case 0x2a2f18u: goto label_2a2f18;
        case 0x2a2f1cu: goto label_2a2f1c;
        case 0x2a2f20u: goto label_2a2f20;
        case 0x2a2f24u: goto label_2a2f24;
        case 0x2a2f28u: goto label_2a2f28;
        case 0x2a2f2cu: goto label_2a2f2c;
        case 0x2a2f30u: goto label_2a2f30;
        case 0x2a2f34u: goto label_2a2f34;
        case 0x2a2f38u: goto label_2a2f38;
        case 0x2a2f3cu: goto label_2a2f3c;
        case 0x2a2f40u: goto label_2a2f40;
        case 0x2a2f44u: goto label_2a2f44;
        case 0x2a2f48u: goto label_2a2f48;
        case 0x2a2f4cu: goto label_2a2f4c;
        case 0x2a2f50u: goto label_2a2f50;
        case 0x2a2f54u: goto label_2a2f54;
        case 0x2a2f58u: goto label_2a2f58;
        case 0x2a2f5cu: goto label_2a2f5c;
        case 0x2a2f60u: goto label_2a2f60;
        case 0x2a2f64u: goto label_2a2f64;
        case 0x2a2f68u: goto label_2a2f68;
        case 0x2a2f6cu: goto label_2a2f6c;
        case 0x2a2f70u: goto label_2a2f70;
        case 0x2a2f74u: goto label_2a2f74;
        case 0x2a2f78u: goto label_2a2f78;
        case 0x2a2f7cu: goto label_2a2f7c;
        case 0x2a2f80u: goto label_2a2f80;
        case 0x2a2f84u: goto label_2a2f84;
        case 0x2a2f88u: goto label_2a2f88;
        case 0x2a2f8cu: goto label_2a2f8c;
        case 0x2a2f90u: goto label_2a2f90;
        case 0x2a2f94u: goto label_2a2f94;
        case 0x2a2f98u: goto label_2a2f98;
        case 0x2a2f9cu: goto label_2a2f9c;
        case 0x2a2fa0u: goto label_2a2fa0;
        case 0x2a2fa4u: goto label_2a2fa4;
        case 0x2a2fa8u: goto label_2a2fa8;
        case 0x2a2facu: goto label_2a2fac;
        case 0x2a2fb0u: goto label_2a2fb0;
        case 0x2a2fb4u: goto label_2a2fb4;
        case 0x2a2fb8u: goto label_2a2fb8;
        case 0x2a2fbcu: goto label_2a2fbc;
        case 0x2a2fc0u: goto label_2a2fc0;
        case 0x2a2fc4u: goto label_2a2fc4;
        case 0x2a2fc8u: goto label_2a2fc8;
        case 0x2a2fccu: goto label_2a2fcc;
        case 0x2a2fd0u: goto label_2a2fd0;
        case 0x2a2fd4u: goto label_2a2fd4;
        default: break;
    }

    ctx->pc = 0x2a2eb0u;

label_2a2eb0:
    // 0x2a2eb0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a2eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2eb4:
    // 0x2a2eb4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a2eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a2eb8:
    // 0x2a2eb8: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
label_2a2ebc:
    if (ctx->pc == 0x2A2EBCu) {
        ctx->pc = 0x2A2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EB8u;
        // 0x2a2ebc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EC0u;
        goto label_2a2ec0;
    }
    ctx->pc = 0x2A2EB8u;
    {
        const bool branch_taken_0x2a2eb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EB8u;
        // 0x2a2ebc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2eb8) {
            ctx->pc = 0x2A2EF4u;
            goto label_2a2ef4;
        }
    }
    ctx->pc = 0x2A2EC0u;
label_2a2ec0:
    // 0x2a2ec0: 0x1120000c  beqz        $t1, . + 4 + (0xC << 2)
label_2a2ec4:
    if (ctx->pc == 0x2A2EC4u) {
        ctx->pc = 0x2A2EC8u;
        goto label_2a2ec8;
    }
    ctx->pc = 0x2A2EC0u;
    {
        const bool branch_taken_0x2a2ec0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ec0) {
            ctx->pc = 0x2A2EF4u;
            goto label_2a2ef4;
        }
    }
    ctx->pc = 0x2A2EC8u;
label_2a2ec8:
    // 0x2a2ec8: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_2a2ecc:
    if (ctx->pc == 0x2A2ECCu) {
        ctx->pc = 0x2A2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EC8u;
        // 0x2a2ecc: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2ED0u;
        goto label_2a2ed0;
    }
    ctx->pc = 0x2A2EC8u;
    {
        const bool branch_taken_0x2a2ec8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EC8u;
        // 0x2a2ecc: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ec8) {
            ctx->pc = 0x2A2EF4u;
            goto label_2a2ef4;
        }
    }
    ctx->pc = 0x2A2ED0u;
label_2a2ed0:
    // 0x2a2ed0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2a2ed4:
    // 0x2a2ed4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2a2ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_2a2ed8:
    // 0x2a2ed8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a2edc:
    // 0x2a2edc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2ee0:
    // 0x2a2ee0: 0xac896a18  sw          $t1, 0x6A18($a0)
    ctx->pc = 0x2a2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27160), GPR_U32(ctx, 9));
label_2a2ee4:
    // 0x2a2ee4: 0xac486a0c  sw          $t0, 0x6A0C($v0)
    ctx->pc = 0x2a2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27148), GPR_U32(ctx, 8));
label_2a2ee8:
    // 0x2a2ee8: 0xac676a10  sw          $a3, 0x6A10($v1)
    ctx->pc = 0x2a2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27152), GPR_U32(ctx, 7));
label_2a2eec:
    // 0x2a2eec: 0xacc86a14  sw          $t0, 0x6A14($a2)
    ctx->pc = 0x2a2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 27156), GPR_U32(ctx, 8));
label_2a2ef0:
    // 0x2a2ef0: 0xaca76a1c  sw          $a3, 0x6A1C($a1)
    ctx->pc = 0x2a2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27164), GPR_U32(ctx, 7));
label_2a2ef4:
    // 0x2a2ef4: 0x3e00008  jr          $ra
label_2a2ef8:
    if (ctx->pc == 0x2A2EF8u) {
        ctx->pc = 0x2A2EFCu;
        goto label_2a2efc;
    }
    ctx->pc = 0x2A2EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2EFCu;
label_2a2efc:
    // 0x2a2efc: 0x0  nop
    ctx->pc = 0x2a2efcu;
    // NOP
label_2a2f00:
    // 0x2a2f00: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2a2f04:
    if (ctx->pc == 0x2A2F04u) {
        ctx->pc = 0x2A2F08u;
        goto label_2a2f08;
    }
    ctx->pc = 0x2A2F00u;
    {
        const bool branch_taken_0x2a2f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f00) {
            ctx->pc = 0x2A2F1Cu;
            goto label_2a2f1c;
        }
    }
    ctx->pc = 0x2A2F08u;
label_2a2f08:
    // 0x2a2f08: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2a2f0c:
    if (ctx->pc == 0x2A2F0Cu) {
        ctx->pc = 0x2A2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F08u;
        // 0x2a2f0c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F10u;
        goto label_2a2f10;
    }
    ctx->pc = 0x2A2F08u;
    {
        const bool branch_taken_0x2a2f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F08u;
        // 0x2a2f0c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f08) {
            ctx->pc = 0x2A2F1Cu;
            goto label_2a2f1c;
        }
    }
    ctx->pc = 0x2A2F10u;
label_2a2f10:
    // 0x2a2f10: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2f14:
    // 0x2a2f14: 0xac446a0c  sw          $a0, 0x6A0C($v0)
    ctx->pc = 0x2a2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27148), GPR_U32(ctx, 4));
label_2a2f18:
    // 0x2a2f18: 0xac656a10  sw          $a1, 0x6A10($v1)
    ctx->pc = 0x2a2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27152), GPR_U32(ctx, 5));
label_2a2f1c:
    // 0x2a2f1c: 0x3e00008  jr          $ra
label_2a2f20:
    if (ctx->pc == 0x2A2F20u) {
        ctx->pc = 0x2A2F24u;
        goto label_2a2f24;
    }
    ctx->pc = 0x2A2F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2F24u;
label_2a2f24:
    // 0x2a2f24: 0x0  nop
    ctx->pc = 0x2a2f24u;
    // NOP
label_2a2f28:
    // 0x2a2f28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a2f2c:
    if (ctx->pc == 0x2A2F2Cu) {
        ctx->pc = 0x2A2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F28u;
        // 0x2a2f2c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F30u;
        goto label_2a2f30;
    }
    ctx->pc = 0x2A2F28u;
    {
        const bool branch_taken_0x2a2f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F28u;
        // 0x2a2f2c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f28) {
            ctx->pc = 0x2A2F38u;
            goto label_2a2f38;
        }
    }
    ctx->pc = 0x2A2F30u;
label_2a2f30:
    // 0x2a2f30: 0x8c436a14  lw          $v1, 0x6A14($v0)
    ctx->pc = 0x2a2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27156)));
label_2a2f34:
    // 0x2a2f34: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a2f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a2f38:
    // 0x2a2f38: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2a2f3c:
    if (ctx->pc == 0x2A2F3Cu) {
        ctx->pc = 0x2A2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F38u;
        // 0x2a2f3c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F40u;
        goto label_2a2f40;
    }
    ctx->pc = 0x2A2F38u;
    {
        const bool branch_taken_0x2a2f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F38u;
        // 0x2a2f3c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f38) {
            ctx->pc = 0x2A2F48u;
            goto label_2a2f48;
        }
    }
    ctx->pc = 0x2A2F40u;
label_2a2f40:
    // 0x2a2f40: 0x8c436a18  lw          $v1, 0x6A18($v0)
    ctx->pc = 0x2a2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27160)));
label_2a2f44:
    // 0x2a2f44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2a2f48:
    // 0x2a2f48: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2a2f4c:
    if (ctx->pc == 0x2A2F4Cu) {
        ctx->pc = 0x2A2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F48u;
        // 0x2a2f4c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F50u;
        goto label_2a2f50;
    }
    ctx->pc = 0x2A2F48u;
    {
        const bool branch_taken_0x2a2f48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F48u;
        // 0x2a2f4c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f48) {
            ctx->pc = 0x2A2F58u;
            goto label_2a2f58;
        }
    }
    ctx->pc = 0x2A2F50u;
label_2a2f50:
    // 0x2a2f50: 0x8c436a1c  lw          $v1, 0x6A1C($v0)
    ctx->pc = 0x2a2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27164)));
label_2a2f54:
    // 0x2a2f54: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2a2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2a2f58:
    // 0x2a2f58: 0x3e00008  jr          $ra
label_2a2f5c:
    if (ctx->pc == 0x2A2F5Cu) {
        ctx->pc = 0x2A2F60u;
        goto label_2a2f60;
    }
    ctx->pc = 0x2A2F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2F60u;
label_2a2f60:
    // 0x2a2f60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a2f64:
    if (ctx->pc == 0x2A2F64u) {
        ctx->pc = 0x2A2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F60u;
        // 0x2a2f64: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F68u;
        goto label_2a2f68;
    }
    ctx->pc = 0x2A2F60u;
    {
        const bool branch_taken_0x2a2f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F60u;
        // 0x2a2f64: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f60) {
            ctx->pc = 0x2A2F70u;
            goto label_2a2f70;
        }
    }
    ctx->pc = 0x2A2F68u;
label_2a2f68:
    // 0x2a2f68: 0x8c436a0c  lw          $v1, 0x6A0C($v0)
    ctx->pc = 0x2a2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27148)));
label_2a2f6c:
    // 0x2a2f6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a2f70:
    // 0x2a2f70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2a2f74:
    if (ctx->pc == 0x2A2F74u) {
        ctx->pc = 0x2A2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F70u;
        // 0x2a2f74: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F78u;
        goto label_2a2f78;
    }
    ctx->pc = 0x2A2F70u;
    {
        const bool branch_taken_0x2a2f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F70u;
        // 0x2a2f74: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f70) {
            ctx->pc = 0x2A2F80u;
            goto label_2a2f80;
        }
    }
    ctx->pc = 0x2A2F78u;
label_2a2f78:
    // 0x2a2f78: 0x8c436a10  lw          $v1, 0x6A10($v0)
    ctx->pc = 0x2a2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27152)));
label_2a2f7c:
    // 0x2a2f7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2a2f80:
    // 0x2a2f80: 0x3e00008  jr          $ra
label_2a2f84:
    if (ctx->pc == 0x2A2F84u) {
        ctx->pc = 0x2A2F88u;
        goto label_2a2f88;
    }
    ctx->pc = 0x2A2F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2F88u;
label_2a2f88:
    // 0x2a2f88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2f8c:
    // 0x2a2f8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a2f90:
    // 0x2a2f90: 0x8c626a0c  lw          $v0, 0x6A0C($v1)
    ctx->pc = 0x2a2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27148)));
label_2a2f94:
    // 0x2a2f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a2f98:
    // 0x2a2f98: 0x40f809  jalr        $v0
label_2a2f9c:
    if (ctx->pc == 0x2A2F9Cu) {
        ctx->pc = 0x2A2FA0u;
        goto label_2a2fa0;
    }
    ctx->pc = 0x2A2F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2FA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2F98u, 0x2A2FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2FA0u;
label_2a2fa0:
    // 0x2a2fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2fa4:
    // 0x2a2fa4: 0x3e00008  jr          $ra
label_2a2fa8:
    if (ctx->pc == 0x2A2FA8u) {
        ctx->pc = 0x2A2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FA4u;
        // 0x2a2fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FACu;
        goto label_2a2fac;
    }
    ctx->pc = 0x2A2FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FA4u;
        // 0x2a2fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2FACu;
label_2a2fac:
    // 0x2a2fac: 0x0  nop
    ctx->pc = 0x2a2facu;
    // NOP
label_2a2fb0:
    // 0x2a2fb0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2fb4:
    // 0x2a2fb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a2fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a2fb8:
    // 0x2a2fb8: 0x8c626a10  lw          $v0, 0x6A10($v1)
    ctx->pc = 0x2a2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27152)));
label_2a2fbc:
    // 0x2a2fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a2fc0:
    // 0x2a2fc0: 0x40f809  jalr        $v0
label_2a2fc4:
    if (ctx->pc == 0x2A2FC4u) {
        ctx->pc = 0x2A2FC8u;
        goto label_2a2fc8;
    }
    ctx->pc = 0x2A2FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2FC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FC0u, 0x2A2FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2FC8u;
label_2a2fc8:
    // 0x2a2fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2fcc:
    // 0x2a2fcc: 0x3e00008  jr          $ra
label_2a2fd0:
    if (ctx->pc == 0x2A2FD0u) {
        ctx->pc = 0x2A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FCCu;
        // 0x2a2fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FD4u;
        goto label_2a2fd4;
    }
    ctx->pc = 0x2A2FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FCCu;
        // 0x2a2fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2FD4u;
label_2a2fd4:
    // 0x2a2fd4: 0x0  nop
    ctx->pc = 0x2a2fd4u;
    // NOP
}
