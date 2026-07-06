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

// Function: sub_00299C28
// Address: 0x299c28 - 0x299ee8
void sub_00299C28_0x299c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299C28_0x299c28");
#endif

    switch (ctx->pc) {
        case 0x299c28u: goto label_299c28;
        case 0x299c2cu: goto label_299c2c;
        case 0x299c30u: goto label_299c30;
        case 0x299c34u: goto label_299c34;
        case 0x299c38u: goto label_299c38;
        case 0x299c3cu: goto label_299c3c;
        case 0x299c40u: goto label_299c40;
        case 0x299c44u: goto label_299c44;
        case 0x299c48u: goto label_299c48;
        case 0x299c4cu: goto label_299c4c;
        case 0x299c50u: goto label_299c50;
        case 0x299c54u: goto label_299c54;
        case 0x299c58u: goto label_299c58;
        case 0x299c5cu: goto label_299c5c;
        case 0x299c60u: goto label_299c60;
        case 0x299c64u: goto label_299c64;
        case 0x299c68u: goto label_299c68;
        case 0x299c6cu: goto label_299c6c;
        case 0x299c70u: goto label_299c70;
        case 0x299c74u: goto label_299c74;
        case 0x299c78u: goto label_299c78;
        case 0x299c7cu: goto label_299c7c;
        case 0x299c80u: goto label_299c80;
        case 0x299c84u: goto label_299c84;
        case 0x299c88u: goto label_299c88;
        case 0x299c8cu: goto label_299c8c;
        case 0x299c90u: goto label_299c90;
        case 0x299c94u: goto label_299c94;
        case 0x299c98u: goto label_299c98;
        case 0x299c9cu: goto label_299c9c;
        case 0x299ca0u: goto label_299ca0;
        case 0x299ca4u: goto label_299ca4;
        case 0x299ca8u: goto label_299ca8;
        case 0x299cacu: goto label_299cac;
        case 0x299cb0u: goto label_299cb0;
        case 0x299cb4u: goto label_299cb4;
        case 0x299cb8u: goto label_299cb8;
        case 0x299cbcu: goto label_299cbc;
        case 0x299cc0u: goto label_299cc0;
        case 0x299cc4u: goto label_299cc4;
        case 0x299cc8u: goto label_299cc8;
        case 0x299cccu: goto label_299ccc;
        case 0x299cd0u: goto label_299cd0;
        case 0x299cd4u: goto label_299cd4;
        case 0x299cd8u: goto label_299cd8;
        case 0x299cdcu: goto label_299cdc;
        case 0x299ce0u: goto label_299ce0;
        case 0x299ce4u: goto label_299ce4;
        case 0x299ce8u: goto label_299ce8;
        case 0x299cecu: goto label_299cec;
        case 0x299cf0u: goto label_299cf0;
        case 0x299cf4u: goto label_299cf4;
        case 0x299cf8u: goto label_299cf8;
        case 0x299cfcu: goto label_299cfc;
        case 0x299d00u: goto label_299d00;
        case 0x299d04u: goto label_299d04;
        case 0x299d08u: goto label_299d08;
        case 0x299d0cu: goto label_299d0c;
        case 0x299d10u: goto label_299d10;
        case 0x299d14u: goto label_299d14;
        case 0x299d18u: goto label_299d18;
        case 0x299d1cu: goto label_299d1c;
        case 0x299d20u: goto label_299d20;
        case 0x299d24u: goto label_299d24;
        case 0x299d28u: goto label_299d28;
        case 0x299d2cu: goto label_299d2c;
        case 0x299d30u: goto label_299d30;
        case 0x299d34u: goto label_299d34;
        case 0x299d38u: goto label_299d38;
        case 0x299d3cu: goto label_299d3c;
        case 0x299d40u: goto label_299d40;
        case 0x299d44u: goto label_299d44;
        case 0x299d48u: goto label_299d48;
        case 0x299d4cu: goto label_299d4c;
        case 0x299d50u: goto label_299d50;
        case 0x299d54u: goto label_299d54;
        case 0x299d58u: goto label_299d58;
        case 0x299d5cu: goto label_299d5c;
        case 0x299d60u: goto label_299d60;
        case 0x299d64u: goto label_299d64;
        case 0x299d68u: goto label_299d68;
        case 0x299d6cu: goto label_299d6c;
        case 0x299d70u: goto label_299d70;
        case 0x299d74u: goto label_299d74;
        case 0x299d78u: goto label_299d78;
        case 0x299d7cu: goto label_299d7c;
        case 0x299d80u: goto label_299d80;
        case 0x299d84u: goto label_299d84;
        case 0x299d88u: goto label_299d88;
        case 0x299d8cu: goto label_299d8c;
        case 0x299d90u: goto label_299d90;
        case 0x299d94u: goto label_299d94;
        case 0x299d98u: goto label_299d98;
        case 0x299d9cu: goto label_299d9c;
        case 0x299da0u: goto label_299da0;
        case 0x299da4u: goto label_299da4;
        case 0x299da8u: goto label_299da8;
        case 0x299dacu: goto label_299dac;
        case 0x299db0u: goto label_299db0;
        case 0x299db4u: goto label_299db4;
        case 0x299db8u: goto label_299db8;
        case 0x299dbcu: goto label_299dbc;
        case 0x299dc0u: goto label_299dc0;
        case 0x299dc4u: goto label_299dc4;
        case 0x299dc8u: goto label_299dc8;
        case 0x299dccu: goto label_299dcc;
        case 0x299dd0u: goto label_299dd0;
        case 0x299dd4u: goto label_299dd4;
        case 0x299dd8u: goto label_299dd8;
        case 0x299ddcu: goto label_299ddc;
        case 0x299de0u: goto label_299de0;
        case 0x299de4u: goto label_299de4;
        case 0x299de8u: goto label_299de8;
        case 0x299decu: goto label_299dec;
        case 0x299df0u: goto label_299df0;
        case 0x299df4u: goto label_299df4;
        case 0x299df8u: goto label_299df8;
        case 0x299dfcu: goto label_299dfc;
        case 0x299e00u: goto label_299e00;
        case 0x299e04u: goto label_299e04;
        case 0x299e08u: goto label_299e08;
        case 0x299e0cu: goto label_299e0c;
        case 0x299e10u: goto label_299e10;
        case 0x299e14u: goto label_299e14;
        case 0x299e18u: goto label_299e18;
        case 0x299e1cu: goto label_299e1c;
        case 0x299e20u: goto label_299e20;
        case 0x299e24u: goto label_299e24;
        case 0x299e28u: goto label_299e28;
        case 0x299e2cu: goto label_299e2c;
        case 0x299e30u: goto label_299e30;
        case 0x299e34u: goto label_299e34;
        case 0x299e38u: goto label_299e38;
        case 0x299e3cu: goto label_299e3c;
        case 0x299e40u: goto label_299e40;
        case 0x299e44u: goto label_299e44;
        case 0x299e48u: goto label_299e48;
        case 0x299e4cu: goto label_299e4c;
        case 0x299e50u: goto label_299e50;
        case 0x299e54u: goto label_299e54;
        case 0x299e58u: goto label_299e58;
        case 0x299e5cu: goto label_299e5c;
        case 0x299e60u: goto label_299e60;
        case 0x299e64u: goto label_299e64;
        case 0x299e68u: goto label_299e68;
        case 0x299e6cu: goto label_299e6c;
        case 0x299e70u: goto label_299e70;
        case 0x299e74u: goto label_299e74;
        case 0x299e78u: goto label_299e78;
        case 0x299e7cu: goto label_299e7c;
        case 0x299e80u: goto label_299e80;
        case 0x299e84u: goto label_299e84;
        case 0x299e88u: goto label_299e88;
        case 0x299e8cu: goto label_299e8c;
        case 0x299e90u: goto label_299e90;
        case 0x299e94u: goto label_299e94;
        case 0x299e98u: goto label_299e98;
        case 0x299e9cu: goto label_299e9c;
        case 0x299ea0u: goto label_299ea0;
        case 0x299ea4u: goto label_299ea4;
        case 0x299ea8u: goto label_299ea8;
        case 0x299eacu: goto label_299eac;
        case 0x299eb0u: goto label_299eb0;
        case 0x299eb4u: goto label_299eb4;
        case 0x299eb8u: goto label_299eb8;
        case 0x299ebcu: goto label_299ebc;
        case 0x299ec0u: goto label_299ec0;
        case 0x299ec4u: goto label_299ec4;
        case 0x299ec8u: goto label_299ec8;
        case 0x299eccu: goto label_299ecc;
        case 0x299ed0u: goto label_299ed0;
        case 0x299ed4u: goto label_299ed4;
        case 0x299ed8u: goto label_299ed8;
        case 0x299edcu: goto label_299edc;
        case 0x299ee0u: goto label_299ee0;
        case 0x299ee4u: goto label_299ee4;
        default: break;
    }

    ctx->pc = 0x299c28u;

label_299c28:
    // 0x299c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_299c2c:
    // 0x299c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299c30:
    // 0x299c30: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x299c30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_299c34:
    // 0x299c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_299c38:
    // 0x299c38: 0x8e025308  lw          $v0, 0x5308($s0)
    ctx->pc = 0x299c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21256)));
label_299c3c:
    // 0x299c3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_299c40:
    if (ctx->pc == 0x299C40u) {
        ctx->pc = 0x299C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C3Cu;
        // 0x299c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C44u;
        goto label_299c44;
    }
    ctx->pc = 0x299C3Cu;
    {
        const bool branch_taken_0x299c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C3Cu;
        // 0x299c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c3c) {
            ctx->pc = 0x299C60u;
            goto label_299c60;
        }
    }
    ctx->pc = 0x299C44u;
label_299c44:
    // 0x299c44: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x299c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_299c48:
    // 0x299c48: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x299c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_299c4c:
    // 0x299c4c: 0x24849e70  addiu       $a0, $a0, -0x6190
    ctx->pc = 0x299c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942320));
label_299c50:
    // 0x299c50: 0xc0a6170  jal         func_2985C0
label_299c54:
    if (ctx->pc == 0x299C54u) {
        ctx->pc = 0x299C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C50u;
        // 0x299c54: 0x24a59df8  addiu       $a1, $a1, -0x6208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C58u;
        goto label_299c58;
    }
    ctx->pc = 0x299C50u;
    SET_GPR_U32(ctx, 31, 0x299C58u);
    ctx->pc = 0x299C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299C50u;
    // 0x299c54: 0x24a59df8  addiu       $a1, $a1, -0x6208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2985C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2985C0u, 0x299C50u, 0x299C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C58u;
label_299c58:
    // 0x299c58: 0xae025308  sw          $v0, 0x5308($s0)
    ctx->pc = 0x299c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 21256), GPR_U32(ctx, 2));
label_299c5c:
    // 0x299c5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x299c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_299c60:
    // 0x299c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299c64:
    // 0x299c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299c68:
    // 0x299c68: 0x3e00008  jr          $ra
label_299c6c:
    if (ctx->pc == 0x299C6Cu) {
        ctx->pc = 0x299C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C68u;
        // 0x299c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C70u;
        goto label_299c70;
    }
    ctx->pc = 0x299C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C68u;
        // 0x299c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299C70u;
label_299c70:
    // 0x299c70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x299c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_299c74:
    // 0x299c74: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x299c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_299c78:
    // 0x299c78: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x299c78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
label_299c7c:
    // 0x299c7c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x299c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_299c80:
    // 0x299c80: 0x8ec25318  lw          $v0, 0x5318($s6)
    ctx->pc = 0x299c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21272)));
label_299c84:
    // 0x299c84: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x299c84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299c88:
    // 0x299c88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x299c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_299c8c:
    // 0x299c8c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x299c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_299c90:
    // 0x299c90: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x299c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_299c94:
    // 0x299c94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x299c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_299c98:
    // 0x299c98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x299c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_299c9c:
    // 0x299c9c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_299ca0:
    // 0x299ca0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x299ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_299ca4:
    // 0x299ca4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x299ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_299ca8:
    // 0x299ca8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x299ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_299cac:
    // 0x299cac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_299cb0:
    if (ctx->pc == 0x299CB0u) {
        ctx->pc = 0x299CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CACu;
        // 0x299cb0: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CB4u;
        goto label_299cb4;
    }
    ctx->pc = 0x299CACu;
    {
        const bool branch_taken_0x299cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CACu;
        // 0x299cb0: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cac) {
            ctx->pc = 0x299CECu;
            goto label_299cec;
        }
    }
    ctx->pc = 0x299CB4u;
label_299cb4:
    // 0x299cb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299cb8:
    // 0x299cb8: 0xc0af004  jal         func_2BC010
label_299cbc:
    if (ctx->pc == 0x299CBCu) {
        ctx->pc = 0x299CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CB8u;
        // 0x299cbc: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CC0u;
        goto label_299cc0;
    }
    ctx->pc = 0x299CB8u;
    SET_GPR_U32(ctx, 31, 0x299CC0u);
    ctx->pc = 0x299CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CB8u;
    // 0x299cbc: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x299CB8u, 0x299CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CC0u;
label_299cc0:
    // 0x299cc0: 0x0  nop
    ctx->pc = 0x299cc0u;
    // NOP
label_299cc4:
    // 0x299cc4: 0xc0af004  jal         func_2BC010
label_299cc8:
    if (ctx->pc == 0x299CC8u) {
        ctx->pc = 0x299CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CC4u;
        // 0x299cc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CCCu;
        goto label_299ccc;
    }
    ctx->pc = 0x299CC4u;
    SET_GPR_U32(ctx, 31, 0x299CCCu);
    ctx->pc = 0x299CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CC4u;
    // 0x299cc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x299CC4u, 0x299CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CCCu;
label_299ccc:
    // 0x299ccc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x299cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_299cd0:
    // 0x299cd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299cd4:
    // 0x299cd4: 0xc0af004  jal         func_2BC010
label_299cd8:
    if (ctx->pc == 0x299CD8u) {
        ctx->pc = 0x299CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CD4u;
        // 0x299cd8: 0xac625310  sw          $v0, 0x5310($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CDCu;
        goto label_299cdc;
    }
    ctx->pc = 0x299CD4u;
    SET_GPR_U32(ctx, 31, 0x299CDCu);
    ctx->pc = 0x299CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CD4u;
    // 0x299cd8: 0xac625310  sw          $v0, 0x5310($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 21264), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x299CD4u, 0x299CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CDCu;
label_299cdc:
    // 0x299cdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_299ce0:
    if (ctx->pc == 0x299CE0u) {
        ctx->pc = 0x299CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CDCu;
        // 0x299ce0: 0xaec25318  sw          $v0, 0x5318($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 21272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CE4u;
        goto label_299ce4;
    }
    ctx->pc = 0x299CDCu;
    {
        const bool branch_taken_0x299cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CDCu;
        // 0x299ce0: 0xaec25318  sw          $v0, 0x5318($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 21272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cdc) {
            ctx->pc = 0x299D08u;
            goto label_299d08;
        }
    }
    ctx->pc = 0x299CE4u;
label_299ce4:
    // 0x299ce4: 0x10000003  b           . + 4 + (0x3 << 2)
label_299ce8:
    if (ctx->pc == 0x299CE8u) {
        ctx->pc = 0x299CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CE4u;
        // 0x299ce8: 0x8ee25314  lw          $v0, 0x5314($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CECu;
        goto label_299cec;
    }
    ctx->pc = 0x299CE4u;
    {
        const bool branch_taken_0x299ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CE4u;
        // 0x299ce8: 0x8ee25314  lw          $v0, 0x5314($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ce4) {
            ctx->pc = 0x299CF4u;
            goto label_299cf4;
        }
    }
    ctx->pc = 0x299CECu;
label_299cec:
    // 0x299cec: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x299cecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
label_299cf0:
    // 0x299cf0: 0x8ee25314  lw          $v0, 0x5314($s7)
    ctx->pc = 0x299cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
label_299cf4:
    // 0x299cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299cf8:
    if (ctx->pc == 0x299CF8u) {
        ctx->pc = 0x299CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CF4u;
        // 0x299cf8: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CFCu;
        goto label_299cfc;
    }
    ctx->pc = 0x299CF4u;
    {
        const bool branch_taken_0x299cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CF4u;
        // 0x299cf8: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cf4) {
            ctx->pc = 0x299D08u;
            goto label_299d08;
        }
    }
    ctx->pc = 0x299CFCu;
label_299cfc:
    // 0x299cfc: 0x8ea25310  lw          $v0, 0x5310($s5)
    ctx->pc = 0x299cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21264)));
label_299d00:
    // 0x299d00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_299d04:
    if (ctx->pc == 0x299D04u) {
        ctx->pc = 0x299D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D00u;
        // 0x299d04: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D08u;
        goto label_299d08;
    }
    ctx->pc = 0x299D00u;
    {
        const bool branch_taken_0x299d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D00u;
        // 0x299d04: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d00) {
            ctx->pc = 0x299D10u;
            goto label_299d10;
        }
    }
    ctx->pc = 0x299D08u;
label_299d08:
    // 0x299d08: 0x1000002f  b           . + 4 + (0x2F << 2)
label_299d0c:
    if (ctx->pc == 0x299D0Cu) {
        ctx->pc = 0x299D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D08u;
        // 0x299d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D10u;
        goto label_299d10;
    }
    ctx->pc = 0x299D08u;
    {
        const bool branch_taken_0x299d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D08u;
        // 0x299d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d08) {
            ctx->pc = 0x299DC8u;
            goto label_299dc8;
        }
    }
    ctx->pc = 0x299D10u;
label_299d10:
    // 0x299d10: 0x8ec25318  lw          $v0, 0x5318($s6)
    ctx->pc = 0x299d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21272)));
label_299d14:
    // 0x299d14: 0x8e91530c  lw          $s1, 0x530C($s4)
    ctx->pc = 0x299d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21260)));
label_299d18:
    // 0x299d18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x299d18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_299d1c:
    // 0x299d1c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x299d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_299d20:
    // 0x299d20: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x299d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_299d24:
    // 0x299d24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_299d28:
    if (ctx->pc == 0x299D28u) {
        ctx->pc = 0x299D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D24u;
        // 0x299d28: 0xae83530c  sw          $v1, 0x530C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 21260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D2Cu;
        goto label_299d2c;
    }
    ctx->pc = 0x299D24u;
    {
        const bool branch_taken_0x299d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D24u;
        // 0x299d28: 0xae83530c  sw          $v1, 0x530C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 21260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d24) {
            ctx->pc = 0x299D6Cu;
            goto label_299d6c;
        }
    }
    ctx->pc = 0x299D2Cu;
label_299d2c:
    // 0x299d2c: 0x3c130013  lui         $s3, 0x13
    ctx->pc = 0x299d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)19 << 16));
label_299d30:
    // 0x299d30: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x299d30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
label_299d34:
    // 0x299d34: 0x8ee45314  lw          $a0, 0x5314($s7)
    ctx->pc = 0x299d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
label_299d38:
    // 0x299d38: 0x26659e28  addiu       $a1, $s3, -0x61D8
    ctx->pc = 0x299d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942248));
label_299d3c:
    // 0x299d3c: 0xc0af10e  jal         func_2BC438
label_299d40:
    if (ctx->pc == 0x299D40u) {
        ctx->pc = 0x299D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D3Cu;
        // 0x299d40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D44u;
        goto label_299d44;
    }
    ctx->pc = 0x299D3Cu;
    SET_GPR_U32(ctx, 31, 0x299D44u);
    ctx->pc = 0x299D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D3Cu;
    // 0x299d40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x299D3Cu, 0x299D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D44u;
label_299d44:
    // 0x299d44: 0x8ea45310  lw          $a0, 0x5310($s5)
    ctx->pc = 0x299d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21264)));
label_299d48:
    // 0x299d48: 0xc0af10e  jal         func_2BC438
label_299d4c:
    if (ctx->pc == 0x299D4Cu) {
        ctx->pc = 0x299D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D48u;
        // 0x299d4c: 0x26458db8  addiu       $a1, $s2, -0x7248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D50u;
        goto label_299d50;
    }
    ctx->pc = 0x299D48u;
    SET_GPR_U32(ctx, 31, 0x299D50u);
    ctx->pc = 0x299D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D48u;
    // 0x299d4c: 0x26458db8  addiu       $a1, $s2, -0x7248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x299D48u, 0x299D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D50u;
label_299d50:
    // 0x299d50: 0x8ec45318  lw          $a0, 0x5318($s6)
    ctx->pc = 0x299d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21272)));
label_299d54:
    // 0x299d54: 0xc0af10e  jal         func_2BC438
label_299d58:
    if (ctx->pc == 0x299D58u) {
        ctx->pc = 0x299D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D54u;
        // 0x299d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D5Cu;
        goto label_299d5c;
    }
    ctx->pc = 0x299D54u;
    SET_GPR_U32(ctx, 31, 0x299D5Cu);
    ctx->pc = 0x299D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D54u;
    // 0x299d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x299D54u, 0x299D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D5Cu;
label_299d5c:
    // 0x299d5c: 0x8e83530c  lw          $v1, 0x530C($s4)
    ctx->pc = 0x299d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21260)));
label_299d60:
    // 0x299d60: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x299d60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_299d64:
    // 0x299d64: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_299d68:
    if (ctx->pc == 0x299D68u) {
        ctx->pc = 0x299D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D64u;
        // 0x299d68: 0x8ee45314  lw          $a0, 0x5314($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D6Cu;
        goto label_299d6c;
    }
    ctx->pc = 0x299D64u;
    {
        const bool branch_taken_0x299d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x299D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D64u;
        // 0x299d68: 0x8ee45314  lw          $a0, 0x5314($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d64) {
            ctx->pc = 0x299D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299d38;
        }
    }
    ctx->pc = 0x299D6Cu;
label_299d6c:
    // 0x299d6c: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_299d70:
    if (ctx->pc == 0x299D70u) {
        ctx->pc = 0x299D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D6Cu;
        // 0x299d70: 0x8ee25314  lw          $v0, 0x5314($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D74u;
        goto label_299d74;
    }
    ctx->pc = 0x299D6Cu;
    {
        const bool branch_taken_0x299d6c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D6Cu;
        // 0x299d70: 0x8ee25314  lw          $v0, 0x5314($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d6c) {
            ctx->pc = 0x299D84u;
            goto label_299d84;
        }
    }
    ctx->pc = 0x299D74u;
label_299d74:
    // 0x299d74: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x299d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_299d78:
    // 0x299d78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_299d7c:
    // 0x299d7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_299d80:
    // 0x299d80: 0xac7e0000  sw          $fp, 0x0($v1)
    ctx->pc = 0x299d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 30));
label_299d84:
    // 0x299d84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x299d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_299d88:
    // 0x299d88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_299d8c:
    if (ctx->pc == 0x299D8Cu) {
        ctx->pc = 0x299D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D88u;
        // 0x299d8c: 0x8ea25310  lw          $v0, 0x5310($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D90u;
        goto label_299d90;
    }
    ctx->pc = 0x299D88u;
    {
        const bool branch_taken_0x299d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D88u;
        // 0x299d8c: 0x8ea25310  lw          $v0, 0x5310($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d88) {
            ctx->pc = 0x299DA4u;
            goto label_299da4;
        }
    }
    ctx->pc = 0x299D90u;
label_299d90:
    // 0x299d90: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x299d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_299d94:
    // 0x299d94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_299d98:
    // 0x299d98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_299d9c:
    // 0x299d9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_299da0:
    // 0x299da0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_299da4:
    // 0x299da4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x299da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_299da8:
    // 0x299da8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_299dac:
    if (ctx->pc == 0x299DACu) {
        ctx->pc = 0x299DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DA8u;
        // 0x299dac: 0x8ec25318  lw          $v0, 0x5318($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DB0u;
        goto label_299db0;
    }
    ctx->pc = 0x299DA8u;
    {
        const bool branch_taken_0x299da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DA8u;
        // 0x299dac: 0x8ec25318  lw          $v0, 0x5318($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299da8) {
            ctx->pc = 0x299DC4u;
            goto label_299dc4;
        }
    }
    ctx->pc = 0x299DB0u;
label_299db0:
    // 0x299db0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x299db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_299db4:
    // 0x299db4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_299db8:
    // 0x299db8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x299db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_299dbc:
    // 0x299dbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_299dc0:
    // 0x299dc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_299dc4:
    // 0x299dc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x299dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299dc8:
    // 0x299dc8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x299dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_299dcc:
    // 0x299dcc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x299dccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_299dd0:
    // 0x299dd0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x299dd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_299dd4:
    // 0x299dd4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x299dd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_299dd8:
    // 0x299dd8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x299dd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_299ddc:
    // 0x299ddc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x299ddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_299de0:
    // 0x299de0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x299de0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_299de4:
    // 0x299de4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_299de8:
    // 0x299de8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x299de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_299dec:
    // 0x299dec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x299decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299df0:
    // 0x299df0: 0x3e00008  jr          $ra
label_299df4:
    if (ctx->pc == 0x299DF4u) {
        ctx->pc = 0x299DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DF0u;
        // 0x299df4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DF8u;
        goto label_299df8;
    }
    ctx->pc = 0x299DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DF0u;
        // 0x299df4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299DF8u;
label_299df8:
    // 0x299df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_299dfc:
    // 0x299dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_299e00:
    // 0x299e00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x299e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_299e04:
    // 0x299e04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x299e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_299e08:
    // 0x299e08: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x299e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_299e0c:
    // 0x299e0c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_299e10:
    if (ctx->pc == 0x299E10u) {
        ctx->pc = 0x299E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E0Cu;
        // 0x299e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E14u;
        goto label_299e14;
    }
    ctx->pc = 0x299E0Cu;
    {
        const bool branch_taken_0x299e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E0Cu;
        // 0x299e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e0c) {
            ctx->pc = 0x299E64u;
            goto label_299e64;
        }
    }
    ctx->pc = 0x299E14u;
label_299e14:
    // 0x299e14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x299e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_299e18:
    // 0x299e18: 0x8c465310  lw          $a2, 0x5310($v0)
    ctx->pc = 0x299e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21264)));
label_299e1c:
    // 0x299e1c: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
label_299e20:
    if (ctx->pc == 0x299E20u) {
        ctx->pc = 0x299E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E1Cu;
        // 0x299e20: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E24u;
        goto label_299e24;
    }
    ctx->pc = 0x299E1Cu;
    {
        const bool branch_taken_0x299e1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e1c) {
            ctx->pc = 0x299E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299E1Cu;
            // 0x299e20: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299E58u;
            goto label_299e58;
        }
    }
    ctx->pc = 0x299E24u;
label_299e24:
    // 0x299e24: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x299e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_299e28:
    // 0x299e28: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x299e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_299e2c:
    // 0x299e2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_299e30:
    if (ctx->pc == 0x299E30u) {
        ctx->pc = 0x299E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E2Cu;
        // 0x299e30: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E34u;
        goto label_299e34;
    }
    ctx->pc = 0x299E2Cu;
    {
        const bool branch_taken_0x299e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E2Cu;
        // 0x299e30: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e2c) {
            ctx->pc = 0x299E54u;
            goto label_299e54;
        }
    }
    ctx->pc = 0x299E34u;
label_299e34:
    // 0x299e34: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_299e38:
    // 0x299e38: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x299e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_299e3c:
    // 0x299e3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_299e40:
    // 0x299e40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_299e44:
    // 0x299e44: 0x40f809  jalr        $v0
label_299e48:
    if (ctx->pc == 0x299E48u) {
        ctx->pc = 0x299E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E44u;
        // 0x299e48: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E4Cu;
        goto label_299e4c;
    }
    ctx->pc = 0x299E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x299E4Cu);
        ctx->pc = 0x299E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E44u;
        // 0x299e48: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299E44u, 0x299E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299E4Cu;
label_299e4c:
    // 0x299e4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_299e50:
    if (ctx->pc == 0x299E50u) {
        ctx->pc = 0x299E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E4Cu;
        // 0x299e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E54u;
        goto label_299e54;
    }
    ctx->pc = 0x299E4Cu;
    {
        const bool branch_taken_0x299e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E4Cu;
        // 0x299e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e4c) {
            ctx->pc = 0x299E64u;
            goto label_299e64;
        }
    }
    ctx->pc = 0x299E54u;
label_299e54:
    // 0x299e54: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x299e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_299e58:
    // 0x299e58: 0xc04a78a  jal         func_129E28
label_299e5c:
    if (ctx->pc == 0x299E5Cu) {
        ctx->pc = 0x299E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E58u;
        // 0x299e5c: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E60u;
        goto label_299e60;
    }
    ctx->pc = 0x299E58u;
    SET_GPR_U32(ctx, 31, 0x299E60u);
    ctx->pc = 0x299E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E58u;
    // 0x299e5c: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x299E58u, 0x299E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E60u;
label_299e60:
    // 0x299e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299e64:
    // 0x299e64: 0x3e00008  jr          $ra
label_299e68:
    if (ctx->pc == 0x299E68u) {
        ctx->pc = 0x299E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E64u;
        // 0x299e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E6Cu;
        goto label_299e6c;
    }
    ctx->pc = 0x299E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E64u;
        // 0x299e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299E6Cu;
label_299e6c:
    // 0x299e6c: 0x0  nop
    ctx->pc = 0x299e6cu;
    // NOP
label_299e70:
    // 0x299e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_299e74:
    // 0x299e74: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x299e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_299e78:
    // 0x299e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299e7c:
    // 0x299e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299e80:
    // 0x299e80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_299e84:
    // 0x299e84: 0x8c445314  lw          $a0, 0x5314($v0)
    ctx->pc = 0x299e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21268)));
label_299e88:
    // 0x299e88: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_299e8c:
    if (ctx->pc == 0x299E8Cu) {
        ctx->pc = 0x299E90u;
        goto label_299e90;
    }
    ctx->pc = 0x299E88u;
    {
        const bool branch_taken_0x299e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e88) {
            ctx->pc = 0x299EC0u;
            goto label_299ec0;
        }
    }
    ctx->pc = 0x299E90u;
label_299e90:
    // 0x299e90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_299e94:
    // 0x299e94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_299e98:
    // 0x299e98: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x299e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_299e9c:
    // 0x299e9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_299ea0:
    if (ctx->pc == 0x299EA0u) {
        ctx->pc = 0x299EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E9Cu;
        // 0x299ea0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EA4u;
        goto label_299ea4;
    }
    ctx->pc = 0x299E9Cu;
    {
        const bool branch_taken_0x299e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E9Cu;
        // 0x299ea0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e9c) {
            ctx->pc = 0x299EC0u;
            goto label_299ec0;
        }
    }
    ctx->pc = 0x299EA4u;
label_299ea4:
    // 0x299ea4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x299ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_299ea8:
    // 0x299ea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_299eac:
    // 0x299eac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_299eb0:
    // 0x299eb0: 0x40f809  jalr        $v0
label_299eb4:
    if (ctx->pc == 0x299EB4u) {
        ctx->pc = 0x299EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EB0u;
        // 0x299eb4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EB8u;
        goto label_299eb8;
    }
    ctx->pc = 0x299EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x299EB8u);
        ctx->pc = 0x299EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EB0u;
        // 0x299eb4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299EB0u, 0x299EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299EB8u;
label_299eb8:
    // 0x299eb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_299ebc:
    if (ctx->pc == 0x299EBCu) {
        ctx->pc = 0x299EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EB8u;
        // 0x299ebc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EC0u;
        goto label_299ec0;
    }
    ctx->pc = 0x299EB8u;
    {
        const bool branch_taken_0x299eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EB8u;
        // 0x299ebc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299eb8) {
            ctx->pc = 0x299ECCu;
            goto label_299ecc;
        }
    }
    ctx->pc = 0x299EC0u;
label_299ec0:
    // 0x299ec0: 0xc0a636e  jal         func_298DB8
label_299ec4:
    if (ctx->pc == 0x299EC4u) {
        ctx->pc = 0x299EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EC0u;
        // 0x299ec4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EC8u;
        goto label_299ec8;
    }
    ctx->pc = 0x299EC0u;
    SET_GPR_U32(ctx, 31, 0x299EC8u);
    ctx->pc = 0x299EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299EC0u;
    // 0x299ec4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298DB8u, 0x299EC0u, 0x299EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EC8u;
label_299ec8:
    // 0x299ec8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x299ec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_299ecc:
    // 0x299ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x299eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_299ed0:
    // 0x299ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299ed4:
    // 0x299ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299ed8:
    // 0x299ed8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x299ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_299edc:
    // 0x299edc: 0x3e00008  jr          $ra
label_299ee0:
    if (ctx->pc == 0x299EE0u) {
        ctx->pc = 0x299EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EDCu;
        // 0x299ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EE4u;
        goto label_299ee4;
    }
    ctx->pc = 0x299EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EDCu;
        // 0x299ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299EE4u;
label_299ee4:
    // 0x299ee4: 0x0  nop
    ctx->pc = 0x299ee4u;
    // NOP
    if (ctx->pc == 0x299ee4u) { ctx->pc = 0x299ee8u; }
}
