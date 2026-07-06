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

// Function: sub_00125B00
// Address: 0x125b00 - 0x125ec8
void sub_00125B00_0x125b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125B00_0x125b00");
#endif

    switch (ctx->pc) {
        case 0x125b00u: goto label_125b00;
        case 0x125b04u: goto label_125b04;
        case 0x125b08u: goto label_125b08;
        case 0x125b0cu: goto label_125b0c;
        case 0x125b10u: goto label_125b10;
        case 0x125b14u: goto label_125b14;
        case 0x125b18u: goto label_125b18;
        case 0x125b1cu: goto label_125b1c;
        case 0x125b20u: goto label_125b20;
        case 0x125b24u: goto label_125b24;
        case 0x125b28u: goto label_125b28;
        case 0x125b2cu: goto label_125b2c;
        case 0x125b30u: goto label_125b30;
        case 0x125b34u: goto label_125b34;
        case 0x125b38u: goto label_125b38;
        case 0x125b3cu: goto label_125b3c;
        case 0x125b40u: goto label_125b40;
        case 0x125b44u: goto label_125b44;
        case 0x125b48u: goto label_125b48;
        case 0x125b4cu: goto label_125b4c;
        case 0x125b50u: goto label_125b50;
        case 0x125b54u: goto label_125b54;
        case 0x125b58u: goto label_125b58;
        case 0x125b5cu: goto label_125b5c;
        case 0x125b60u: goto label_125b60;
        case 0x125b64u: goto label_125b64;
        case 0x125b68u: goto label_125b68;
        case 0x125b6cu: goto label_125b6c;
        case 0x125b70u: goto label_125b70;
        case 0x125b74u: goto label_125b74;
        case 0x125b78u: goto label_125b78;
        case 0x125b7cu: goto label_125b7c;
        case 0x125b80u: goto label_125b80;
        case 0x125b84u: goto label_125b84;
        case 0x125b88u: goto label_125b88;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b90u: goto label_125b90;
        case 0x125b94u: goto label_125b94;
        case 0x125b98u: goto label_125b98;
        case 0x125b9cu: goto label_125b9c;
        case 0x125ba0u: goto label_125ba0;
        case 0x125ba4u: goto label_125ba4;
        case 0x125ba8u: goto label_125ba8;
        case 0x125bacu: goto label_125bac;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb4u: goto label_125bb4;
        case 0x125bb8u: goto label_125bb8;
        case 0x125bbcu: goto label_125bbc;
        case 0x125bc0u: goto label_125bc0;
        case 0x125bc4u: goto label_125bc4;
        case 0x125bc8u: goto label_125bc8;
        case 0x125bccu: goto label_125bcc;
        case 0x125bd0u: goto label_125bd0;
        case 0x125bd4u: goto label_125bd4;
        case 0x125bd8u: goto label_125bd8;
        case 0x125bdcu: goto label_125bdc;
        case 0x125be0u: goto label_125be0;
        case 0x125be4u: goto label_125be4;
        case 0x125be8u: goto label_125be8;
        case 0x125becu: goto label_125bec;
        case 0x125bf0u: goto label_125bf0;
        case 0x125bf4u: goto label_125bf4;
        case 0x125bf8u: goto label_125bf8;
        case 0x125bfcu: goto label_125bfc;
        case 0x125c00u: goto label_125c00;
        case 0x125c04u: goto label_125c04;
        case 0x125c08u: goto label_125c08;
        case 0x125c0cu: goto label_125c0c;
        case 0x125c10u: goto label_125c10;
        case 0x125c14u: goto label_125c14;
        case 0x125c18u: goto label_125c18;
        case 0x125c1cu: goto label_125c1c;
        case 0x125c20u: goto label_125c20;
        case 0x125c24u: goto label_125c24;
        case 0x125c28u: goto label_125c28;
        case 0x125c2cu: goto label_125c2c;
        case 0x125c30u: goto label_125c30;
        case 0x125c34u: goto label_125c34;
        case 0x125c38u: goto label_125c38;
        case 0x125c3cu: goto label_125c3c;
        case 0x125c40u: goto label_125c40;
        case 0x125c44u: goto label_125c44;
        case 0x125c48u: goto label_125c48;
        case 0x125c4cu: goto label_125c4c;
        case 0x125c50u: goto label_125c50;
        case 0x125c54u: goto label_125c54;
        case 0x125c58u: goto label_125c58;
        case 0x125c5cu: goto label_125c5c;
        case 0x125c60u: goto label_125c60;
        case 0x125c64u: goto label_125c64;
        case 0x125c68u: goto label_125c68;
        case 0x125c6cu: goto label_125c6c;
        case 0x125c70u: goto label_125c70;
        case 0x125c74u: goto label_125c74;
        case 0x125c78u: goto label_125c78;
        case 0x125c7cu: goto label_125c7c;
        case 0x125c80u: goto label_125c80;
        case 0x125c84u: goto label_125c84;
        case 0x125c88u: goto label_125c88;
        case 0x125c8cu: goto label_125c8c;
        case 0x125c90u: goto label_125c90;
        case 0x125c94u: goto label_125c94;
        case 0x125c98u: goto label_125c98;
        case 0x125c9cu: goto label_125c9c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125ca4u: goto label_125ca4;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cacu: goto label_125cac;
        case 0x125cb0u: goto label_125cb0;
        case 0x125cb4u: goto label_125cb4;
        case 0x125cb8u: goto label_125cb8;
        case 0x125cbcu: goto label_125cbc;
        case 0x125cc0u: goto label_125cc0;
        case 0x125cc4u: goto label_125cc4;
        case 0x125cc8u: goto label_125cc8;
        case 0x125cccu: goto label_125ccc;
        case 0x125cd0u: goto label_125cd0;
        case 0x125cd4u: goto label_125cd4;
        case 0x125cd8u: goto label_125cd8;
        case 0x125cdcu: goto label_125cdc;
        case 0x125ce0u: goto label_125ce0;
        case 0x125ce4u: goto label_125ce4;
        case 0x125ce8u: goto label_125ce8;
        case 0x125cecu: goto label_125cec;
        case 0x125cf0u: goto label_125cf0;
        case 0x125cf4u: goto label_125cf4;
        case 0x125cf8u: goto label_125cf8;
        case 0x125cfcu: goto label_125cfc;
        case 0x125d00u: goto label_125d00;
        case 0x125d04u: goto label_125d04;
        case 0x125d08u: goto label_125d08;
        case 0x125d0cu: goto label_125d0c;
        case 0x125d10u: goto label_125d10;
        case 0x125d14u: goto label_125d14;
        case 0x125d18u: goto label_125d18;
        case 0x125d1cu: goto label_125d1c;
        case 0x125d20u: goto label_125d20;
        case 0x125d24u: goto label_125d24;
        case 0x125d28u: goto label_125d28;
        case 0x125d2cu: goto label_125d2c;
        case 0x125d30u: goto label_125d30;
        case 0x125d34u: goto label_125d34;
        case 0x125d38u: goto label_125d38;
        case 0x125d3cu: goto label_125d3c;
        case 0x125d40u: goto label_125d40;
        case 0x125d44u: goto label_125d44;
        case 0x125d48u: goto label_125d48;
        case 0x125d4cu: goto label_125d4c;
        case 0x125d50u: goto label_125d50;
        case 0x125d54u: goto label_125d54;
        case 0x125d58u: goto label_125d58;
        case 0x125d5cu: goto label_125d5c;
        case 0x125d60u: goto label_125d60;
        case 0x125d64u: goto label_125d64;
        case 0x125d68u: goto label_125d68;
        case 0x125d6cu: goto label_125d6c;
        case 0x125d70u: goto label_125d70;
        case 0x125d74u: goto label_125d74;
        case 0x125d78u: goto label_125d78;
        case 0x125d7cu: goto label_125d7c;
        case 0x125d80u: goto label_125d80;
        case 0x125d84u: goto label_125d84;
        case 0x125d88u: goto label_125d88;
        case 0x125d8cu: goto label_125d8c;
        case 0x125d90u: goto label_125d90;
        case 0x125d94u: goto label_125d94;
        case 0x125d98u: goto label_125d98;
        case 0x125d9cu: goto label_125d9c;
        case 0x125da0u: goto label_125da0;
        case 0x125da4u: goto label_125da4;
        case 0x125da8u: goto label_125da8;
        case 0x125dacu: goto label_125dac;
        case 0x125db0u: goto label_125db0;
        case 0x125db4u: goto label_125db4;
        case 0x125db8u: goto label_125db8;
        case 0x125dbcu: goto label_125dbc;
        case 0x125dc0u: goto label_125dc0;
        case 0x125dc4u: goto label_125dc4;
        case 0x125dc8u: goto label_125dc8;
        case 0x125dccu: goto label_125dcc;
        case 0x125dd0u: goto label_125dd0;
        case 0x125dd4u: goto label_125dd4;
        case 0x125dd8u: goto label_125dd8;
        case 0x125ddcu: goto label_125ddc;
        case 0x125de0u: goto label_125de0;
        case 0x125de4u: goto label_125de4;
        case 0x125de8u: goto label_125de8;
        case 0x125decu: goto label_125dec;
        case 0x125df0u: goto label_125df0;
        case 0x125df4u: goto label_125df4;
        case 0x125df8u: goto label_125df8;
        case 0x125dfcu: goto label_125dfc;
        case 0x125e00u: goto label_125e00;
        case 0x125e04u: goto label_125e04;
        case 0x125e08u: goto label_125e08;
        case 0x125e0cu: goto label_125e0c;
        case 0x125e10u: goto label_125e10;
        case 0x125e14u: goto label_125e14;
        case 0x125e18u: goto label_125e18;
        case 0x125e1cu: goto label_125e1c;
        case 0x125e20u: goto label_125e20;
        case 0x125e24u: goto label_125e24;
        case 0x125e28u: goto label_125e28;
        case 0x125e2cu: goto label_125e2c;
        case 0x125e30u: goto label_125e30;
        case 0x125e34u: goto label_125e34;
        case 0x125e38u: goto label_125e38;
        case 0x125e3cu: goto label_125e3c;
        case 0x125e40u: goto label_125e40;
        case 0x125e44u: goto label_125e44;
        case 0x125e48u: goto label_125e48;
        case 0x125e4cu: goto label_125e4c;
        case 0x125e50u: goto label_125e50;
        case 0x125e54u: goto label_125e54;
        case 0x125e58u: goto label_125e58;
        case 0x125e5cu: goto label_125e5c;
        case 0x125e60u: goto label_125e60;
        case 0x125e64u: goto label_125e64;
        case 0x125e68u: goto label_125e68;
        case 0x125e6cu: goto label_125e6c;
        case 0x125e70u: goto label_125e70;
        case 0x125e74u: goto label_125e74;
        case 0x125e78u: goto label_125e78;
        case 0x125e7cu: goto label_125e7c;
        case 0x125e80u: goto label_125e80;
        case 0x125e84u: goto label_125e84;
        case 0x125e88u: goto label_125e88;
        case 0x125e8cu: goto label_125e8c;
        case 0x125e90u: goto label_125e90;
        case 0x125e94u: goto label_125e94;
        case 0x125e98u: goto label_125e98;
        case 0x125e9cu: goto label_125e9c;
        case 0x125ea0u: goto label_125ea0;
        case 0x125ea4u: goto label_125ea4;
        case 0x125ea8u: goto label_125ea8;
        case 0x125eacu: goto label_125eac;
        case 0x125eb0u: goto label_125eb0;
        case 0x125eb4u: goto label_125eb4;
        case 0x125eb8u: goto label_125eb8;
        case 0x125ebcu: goto label_125ebc;
        case 0x125ec0u: goto label_125ec0;
        case 0x125ec4u: goto label_125ec4;
        default: break;
    }

    ctx->pc = 0x125b00u;

label_125b00:
    // 0x125b00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_125b04:
    // 0x125b04: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x125b04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125b08:
    // 0x125b08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_125b0c:
    // 0x125b0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x125b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_125b10:
    // 0x125b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125b14:
    // 0x125b14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x125b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125b18:
    // 0x125b18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125b1c:
    // 0x125b1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125b20:
    // 0x125b20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_125b24:
    // 0x125b24: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x125b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_125b28:
    // 0x125b28: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x125b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_125b2c:
    // 0x125b2c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x125b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_125b30:
    // 0x125b30: 0x8cb20008  lw          $s2, 0x8($a1)
    ctx->pc = 0x125b30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_125b34:
    // 0x125b34: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_125b38:
    if (ctx->pc == 0x125B38u) {
        ctx->pc = 0x125B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B34u;
        // 0x125b38: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B3Cu;
        goto label_125b3c;
    }
    ctx->pc = 0x125B34u;
    {
        const bool branch_taken_0x125b34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B34u;
        // 0x125b38: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b34) {
            ctx->pc = 0x125BE4u;
            goto label_125be4;
        }
    }
    ctx->pc = 0x125B3Cu;
label_125b3c:
    // 0x125b3c: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x125b3cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_125b40:
    // 0x125b40: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x125b40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_125b44:
    // 0x125b44: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_125b48:
    if (ctx->pc == 0x125B48u) {
        ctx->pc = 0x125B4Cu;
        goto label_125b4c;
    }
    ctx->pc = 0x125B44u;
    {
        const bool branch_taken_0x125b44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b44) {
            ctx->pc = 0x125B58u;
            goto label_125b58;
        }
    }
    ctx->pc = 0x125B4Cu;
label_125b4c:
    // 0x125b4c: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_125b50:
    // 0x125b50: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
label_125b54:
    if (ctx->pc == 0x125B54u) {
        ctx->pc = 0x125B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B50u;
        // 0x125b54: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B58u;
        goto label_125b58;
    }
    ctx->pc = 0x125B50u;
    {
        const bool branch_taken_0x125b50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125b50) {
            ctx->pc = 0x125B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125B50u;
            // 0x125b54: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125B70u;
            goto label_125b70;
        }
    }
    ctx->pc = 0x125B58u;
label_125b58:
    // 0x125b58: 0xc04b9c6  jal         func_12E718
label_125b5c:
    if (ctx->pc == 0x125B5Cu) {
        ctx->pc = 0x125B60u;
        goto label_125b60;
    }
    ctx->pc = 0x125B58u;
    SET_GPR_U32(ctx, 31, 0x125B60u);
    ctx->pc = 0x12E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E718u, 0x125B58u, 0x125B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B60u;
label_125b60:
    // 0x125b60: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_125b64:
    if (ctx->pc == 0x125B64u) {
        ctx->pc = 0x125B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B60u;
        // 0x125b64: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B68u;
        goto label_125b68;
    }
    ctx->pc = 0x125B60u;
    {
        const bool branch_taken_0x125b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B60u;
        // 0x125b64: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b60) {
            ctx->pc = 0x125BE4u;
            goto label_125be4;
        }
    }
    ctx->pc = 0x125B68u;
label_125b68:
    // 0x125b68: 0x966e000c  lhu         $t6, 0xC($s3)
    ctx->pc = 0x125b68u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_125b6c:
    // 0x125b6c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x125b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_125b70:
    // 0x125b70: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x125b70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
label_125b74:
    // 0x125b74: 0x11e0002c  beqz        $t7, . + 4 + (0x2C << 2)
label_125b78:
    if (ctx->pc == 0x125B78u) {
        ctx->pc = 0x125B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B74u;
        // 0x125b78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B7Cu;
        goto label_125b7c;
    }
    ctx->pc = 0x125B74u;
    {
        const bool branch_taken_0x125b74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B74u;
        // 0x125b78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b74) {
            ctx->pc = 0x125C28u;
            goto label_125c28;
        }
    }
    ctx->pc = 0x125B7Cu;
label_125b7c:
    // 0x125b7c: 0x24160400  addiu       $s6, $zero, 0x400
    ctx->pc = 0x125b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_125b80:
    // 0x125b80: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_125b84:
    if (ctx->pc == 0x125B84u) {
        ctx->pc = 0x125B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B80u;
        // 0x125b84: 0x2e4f0401  sltiu       $t7, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B88u;
        goto label_125b88;
    }
    ctx->pc = 0x125B80u;
    {
        const bool branch_taken_0x125b80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B80u;
        // 0x125b84: 0x2e4f0401  sltiu       $t7, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b80) {
            ctx->pc = 0x125BACu;
            goto label_125bac;
        }
    }
    ctx->pc = 0x125B88u;
label_125b88:
    // 0x125b88: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125b8c:
    // 0x125b8c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x125b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125b90:
    // 0x125b90: 0x0  nop
    ctx->pc = 0x125b90u;
    // NOP
label_125b94:
    // 0x125b94: 0x0  nop
    ctx->pc = 0x125b94u;
    // NOP
label_125b98:
    // 0x125b98: 0x0  nop
    ctx->pc = 0x125b98u;
    // NOP
label_125b9c:
    // 0x125b9c: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_125ba0:
    if (ctx->pc == 0x125BA0u) {
        ctx->pc = 0x125BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B9Cu;
        // 0x125ba0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BA4u;
        goto label_125ba4;
    }
    ctx->pc = 0x125B9Cu;
    {
        const bool branch_taken_0x125b9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B9Cu;
        // 0x125ba0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b9c) {
            ctx->pc = 0x125B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125b88;
        }
    }
    ctx->pc = 0x125BA4u;
label_125ba4:
    // 0x125ba4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x125ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125ba8:
    // 0x125ba8: 0x2e4f0401  sltiu       $t7, $s2, 0x401
    ctx->pc = 0x125ba8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_125bac:
    // 0x125bac: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x125bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_125bb0:
    // 0x125bb0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x125bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_125bb4:
    // 0x125bb4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x125bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_125bb8:
    // 0x125bb8: 0x24f300b  movn        $a2, $s2, $t7
    ctx->pc = 0x125bb8u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_125bbc:
    // 0x125bbc: 0x40f809  jalr        $v0
label_125bc0:
    if (ctx->pc == 0x125BC0u) {
        ctx->pc = 0x125BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BBCu;
        // 0x125bc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BC4u;
        goto label_125bc4;
    }
    ctx->pc = 0x125BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125BC4u);
        ctx->pc = 0x125BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BBCu;
        // 0x125bc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125BBCu, 0x125BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125BC4u;
label_125bc4:
    // 0x125bc4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_125bc8:
    if (ctx->pc == 0x125BC8u) {
        ctx->pc = 0x125BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BC4u;
        // 0x125bc8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BCCu;
        goto label_125bcc;
    }
    ctx->pc = 0x125BC4u;
    {
        const bool branch_taken_0x125bc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x125BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BC4u;
        // 0x125bc8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bc4) {
            ctx->pc = 0x125C14u;
            goto label_125c14;
        }
    }
    ctx->pc = 0x125BCCu;
label_125bcc:
    // 0x125bcc: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_125bd0:
    // 0x125bd0: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x125bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_125bd4:
    // 0x125bd4: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x125bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_125bd8:
    // 0x125bd8: 0x15e0ffe9  bnez        $t7, . + 4 + (-0x17 << 2)
label_125bdc:
    if (ctx->pc == 0x125BDCu) {
        ctx->pc = 0x125BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BD8u;
        // 0x125bdc: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BE0u;
        goto label_125be0;
    }
    ctx->pc = 0x125BD8u;
    {
        const bool branch_taken_0x125bd8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BD8u;
        // 0x125bdc: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bd8) {
            ctx->pc = 0x125B80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125b80;
        }
    }
    ctx->pc = 0x125BE0u;
label_125be0:
    // 0x125be0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x125be0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125be4:
    // 0x125be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125be8:
    // 0x125be8: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x125be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_125bec:
    // 0x125bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125bf0:
    // 0x125bf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125bf4:
    // 0x125bf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125bf8:
    // 0x125bf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125bfc:
    // 0x125bfc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x125bfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125c00:
    // 0x125c00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x125c00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125c04:
    // 0x125c04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x125c04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125c08:
    // 0x125c08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x125c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125c0c:
    // 0x125c0c: 0x3e00008  jr          $ra
label_125c10:
    if (ctx->pc == 0x125C10u) {
        ctx->pc = 0x125C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C0Cu;
        // 0x125c10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C14u;
        goto label_125c14;
    }
    ctx->pc = 0x125C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C0Cu;
        // 0x125c10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C14u;
label_125c14:
    // 0x125c14: 0x966f000c  lhu         $t7, 0xC($s3)
    ctx->pc = 0x125c14u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_125c18:
    // 0x125c18: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x125c18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125c1c:
    // 0x125c1c: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x125c1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
label_125c20:
    // 0x125c20: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_125c24:
    if (ctx->pc == 0x125C24u) {
        ctx->pc = 0x125C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C20u;
        // 0x125c24: 0xa66f000c  sh          $t7, 0xC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C28u;
        goto label_125c28;
    }
    ctx->pc = 0x125C20u;
    {
        const bool branch_taken_0x125c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C20u;
        // 0x125c24: 0xa66f000c  sh          $t7, 0xC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c20) {
            ctx->pc = 0x125BE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125be4;
        }
    }
    ctx->pc = 0x125C28u;
label_125c28:
    // 0x125c28: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x125c28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_125c2c:
    // 0x125c2c: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x125c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
label_125c30:
    // 0x125c30: 0xf7c03  sra         $t7, $t7, 16
    ctx->pc = 0x125c30u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 16));
label_125c34:
    // 0x125c34: 0x15e0004f  bnez        $t7, . + 4 + (0x4F << 2)
label_125c38:
    if (ctx->pc == 0x125C38u) {
        ctx->pc = 0x125C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C34u;
        // 0x125c38: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C3Cu;
        goto label_125c3c;
    }
    ctx->pc = 0x125C34u;
    {
        const bool branch_taken_0x125c34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C34u;
        // 0x125c38: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c34) {
            ctx->pc = 0x125D74u;
            goto label_125d74;
        }
    }
    ctx->pc = 0x125C3Cu;
label_125c3c:
    // 0x125c3c: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_125c40:
    if (ctx->pc == 0x125C40u) {
        ctx->pc = 0x125C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C3Cu;
        // 0x125c40: 0x31cf0200  andi        $t7, $t6, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C44u;
        goto label_125c44;
    }
    ctx->pc = 0x125C3Cu;
    {
        const bool branch_taken_0x125c3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C3Cu;
        // 0x125c40: 0x31cf0200  andi        $t7, $t6, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c3c) {
            ctx->pc = 0x125C68u;
            goto label_125c68;
        }
    }
    ctx->pc = 0x125C44u;
label_125c44:
    // 0x125c44: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x125c44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125c48:
    // 0x125c48: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x125c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125c4c:
    // 0x125c4c: 0x0  nop
    ctx->pc = 0x125c4cu;
    // NOP
label_125c50:
    // 0x125c50: 0x0  nop
    ctx->pc = 0x125c50u;
    // NOP
label_125c54:
    // 0x125c54: 0x0  nop
    ctx->pc = 0x125c54u;
    // NOP
label_125c58:
    // 0x125c58: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_125c5c:
    if (ctx->pc == 0x125C5Cu) {
        ctx->pc = 0x125C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C58u;
        // 0x125c5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C60u;
        goto label_125c60;
    }
    ctx->pc = 0x125C58u;
    {
        const bool branch_taken_0x125c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C58u;
        // 0x125c5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c58) {
            ctx->pc = 0x125C44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c44;
        }
    }
    ctx->pc = 0x125C60u;
label_125c60:
    // 0x125c60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x125c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125c64:
    // 0x125c64: 0x31cf0200  andi        $t7, $t6, 0x200
    ctx->pc = 0x125c64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
label_125c68:
    // 0x125c68: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_125c6c:
    if (ctx->pc == 0x125C6Cu) {
        ctx->pc = 0x125C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C68u;
        // 0x125c6c: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C70u;
        goto label_125c70;
    }
    ctx->pc = 0x125C68u;
    {
        const bool branch_taken_0x125c68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C68u;
        // 0x125c6c: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c68) {
            ctx->pc = 0x125CC4u;
            goto label_125cc4;
        }
    }
    ctx->pc = 0x125C70u;
label_125c70:
    // 0x125c70: 0x250782b  sltu        $t7, $s2, $s0
    ctx->pc = 0x125c70u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_125c74:
    // 0x125c74: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x125c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125c78:
    // 0x125c78: 0x24f800b  movn        $s0, $s2, $t7
    ctx->pc = 0x125c78u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_125c7c:
    // 0x125c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125c80:
    // 0x125c80: 0xc049c74  jal         func_1271D0
label_125c84:
    if (ctx->pc == 0x125C84u) {
        ctx->pc = 0x125C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C80u;
        // 0x125c84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C88u;
        goto label_125c88;
    }
    ctx->pc = 0x125C80u;
    SET_GPR_U32(ctx, 31, 0x125C88u);
    ctx->pc = 0x125C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C80u;
    // 0x125c84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x125C80u, 0x125C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C88u;
label_125c88:
    // 0x125c88: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x125c88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_125c8c:
    // 0x125c8c: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125c90:
    // 0x125c90: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_125c94:
    // 0x125c94: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_125c98:
    // 0x125c98: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x125c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_125c9c:
    // 0x125c9c: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x125c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
label_125ca0:
    // 0x125ca0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x125ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125ca4:
    // 0x125ca4: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x125ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_125ca8:
    // 0x125ca8: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x125ca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_125cac:
    // 0x125cac: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x125cacu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_125cb0:
    // 0x125cb0: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_125cb4:
    // 0x125cb4: 0x11e0ffca  beqz        $t7, . + 4 + (-0x36 << 2)
label_125cb8:
    if (ctx->pc == 0x125CB8u) {
        ctx->pc = 0x125CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB4u;
        // 0x125cb8: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CBCu;
        goto label_125cbc;
    }
    ctx->pc = 0x125CB4u;
    {
        const bool branch_taken_0x125cb4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB4u;
        // 0x125cb8: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cb4) {
            ctx->pc = 0x125BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125be0;
        }
    }
    ctx->pc = 0x125CBCu;
label_125cbc:
    // 0x125cbc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_125cc0:
    if (ctx->pc == 0x125CC0u) {
        ctx->pc = 0x125CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CBCu;
        // 0x125cc0: 0x966e000c  lhu         $t6, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CC4u;
        goto label_125cc4;
    }
    ctx->pc = 0x125CBCu;
    {
        const bool branch_taken_0x125cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CBCu;
        // 0x125cc0: 0x966e000c  lhu         $t6, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cbc) {
            ctx->pc = 0x125C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c3c;
        }
    }
    ctx->pc = 0x125CC4u;
label_125cc4:
    // 0x125cc4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x125cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125cc8:
    // 0x125cc8: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x125cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_125ccc:
    // 0x125ccc: 0x1e4782b  sltu        $t7, $t7, $a0
    ctx->pc = 0x125cccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_125cd0:
    // 0x125cd0: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
label_125cd4:
    if (ctx->pc == 0x125CD4u) {
        ctx->pc = 0x125CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CD0u;
        // 0x125cd4: 0x212782b  sltu        $t7, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CD8u;
        goto label_125cd8;
    }
    ctx->pc = 0x125CD0u;
    {
        const bool branch_taken_0x125cd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CD0u;
        // 0x125cd4: 0x212782b  sltu        $t7, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cd0) {
            ctx->pc = 0x125D10u;
            goto label_125d10;
        }
    }
    ctx->pc = 0x125CD8u;
label_125cd8:
    // 0x125cd8: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
label_125cdc:
    if (ctx->pc == 0x125CDCu) {
        ctx->pc = 0x125CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CD8u;
        // 0x125cdc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CE0u;
        goto label_125ce0;
    }
    ctx->pc = 0x125CD8u;
    {
        const bool branch_taken_0x125cd8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CD8u;
        // 0x125cdc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cd8) {
            ctx->pc = 0x125D10u;
            goto label_125d10;
        }
    }
    ctx->pc = 0x125CE0u;
label_125ce0:
    // 0x125ce0: 0xc049c74  jal         func_1271D0
label_125ce4:
    if (ctx->pc == 0x125CE4u) {
        ctx->pc = 0x125CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CE0u;
        // 0x125ce4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CE8u;
        goto label_125ce8;
    }
    ctx->pc = 0x125CE0u;
    SET_GPR_U32(ctx, 31, 0x125CE8u);
    ctx->pc = 0x125CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CE0u;
    // 0x125ce4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x125CE0u, 0x125CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CE8u;
label_125ce8:
    // 0x125ce8: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x125ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125cec:
    // 0x125cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125cf0:
    // 0x125cf0: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x125cf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_125cf4:
    // 0x125cf4: 0xc049258  jal         func_124960
label_125cf8:
    if (ctx->pc == 0x125CF8u) {
        ctx->pc = 0x125CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CF4u;
        // 0x125cf8: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CFCu;
        goto label_125cfc;
    }
    ctx->pc = 0x125CF4u;
    SET_GPR_U32(ctx, 31, 0x125CFCu);
    ctx->pc = 0x125CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CF4u;
    // 0x125cf8: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124960u, 0x125CF4u, 0x125CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CFCu;
label_125cfc:
    // 0x125cfc: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_125d00:
    if (ctx->pc == 0x125D00u) {
        ctx->pc = 0x125D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CFCu;
        // 0x125d00: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D04u;
        goto label_125d04;
    }
    ctx->pc = 0x125CFCu;
    {
        const bool branch_taken_0x125cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125cfc) {
            ctx->pc = 0x125D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125CFCu;
            // 0x125d00: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ca8;
        }
    }
    ctx->pc = 0x125D04u;
label_125d04:
    // 0x125d04: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_125d08:
    if (ctx->pc == 0x125D08u) {
        ctx->pc = 0x125D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D04u;
        // 0x125d08: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D0Cu;
        goto label_125d0c;
    }
    ctx->pc = 0x125D04u;
    {
        const bool branch_taken_0x125d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D04u;
        // 0x125d08: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d04) {
            ctx->pc = 0x125C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c18;
        }
    }
    ctx->pc = 0x125D0Cu;
label_125d0c:
    // 0x125d0c: 0x0  nop
    ctx->pc = 0x125d0cu;
    // NOP
label_125d10:
    // 0x125d10: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_125d14:
    // 0x125d14: 0x250782b  sltu        $t7, $s2, $s0
    ctx->pc = 0x125d14u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_125d18:
    // 0x125d18: 0x55e0000b  bnel        $t7, $zero, . + 4 + (0xB << 2)
label_125d1c:
    if (ctx->pc == 0x125D1Cu) {
        ctx->pc = 0x125D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D18u;
        // 0x125d1c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D20u;
        goto label_125d20;
    }
    ctx->pc = 0x125D18u;
    {
        const bool branch_taken_0x125d18 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125d18) {
            ctx->pc = 0x125D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125D18u;
            // 0x125d1c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125D48u;
            goto label_125d48;
        }
    }
    ctx->pc = 0x125D20u;
label_125d20:
    // 0x125d20: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x125d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_125d24:
    // 0x125d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x125d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125d28:
    // 0x125d28: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x125d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_125d2c:
    // 0x125d2c: 0x40f809  jalr        $v0
label_125d30:
    if (ctx->pc == 0x125D30u) {
        ctx->pc = 0x125D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D2Cu;
        // 0x125d30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D34u;
        goto label_125d34;
    }
    ctx->pc = 0x125D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125D34u);
        ctx->pc = 0x125D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D2Cu;
        // 0x125d30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D2Cu, 0x125D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125D34u;
label_125d34:
    // 0x125d34: 0x1c40ffdb  bgtz        $v0, . + 4 + (-0x25 << 2)
label_125d38:
    if (ctx->pc == 0x125D38u) {
        ctx->pc = 0x125D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D34u;
        // 0x125d38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D3Cu;
        goto label_125d3c;
    }
    ctx->pc = 0x125D34u;
    {
        const bool branch_taken_0x125d34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x125D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D34u;
        // 0x125d38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d34) {
            ctx->pc = 0x125CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ca4;
        }
    }
    ctx->pc = 0x125D3Cu;
label_125d3c:
    // 0x125d3c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_125d40:
    if (ctx->pc == 0x125D40u) {
        ctx->pc = 0x125D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D3Cu;
        // 0x125d40: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D44u;
        goto label_125d44;
    }
    ctx->pc = 0x125D3Cu;
    {
        const bool branch_taken_0x125d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D3Cu;
        // 0x125d40: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d3c) {
            ctx->pc = 0x125C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c18;
        }
    }
    ctx->pc = 0x125D44u;
label_125d44:
    // 0x125d44: 0x0  nop
    ctx->pc = 0x125d44u;
    // NOP
label_125d48:
    // 0x125d48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125d4c:
    // 0x125d4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125d50:
    // 0x125d50: 0xc049c74  jal         func_1271D0
label_125d54:
    if (ctx->pc == 0x125D54u) {
        ctx->pc = 0x125D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D50u;
        // 0x125d54: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D58u;
        goto label_125d58;
    }
    ctx->pc = 0x125D50u;
    SET_GPR_U32(ctx, 31, 0x125D58u);
    ctx->pc = 0x125D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D50u;
    // 0x125d54: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x125D50u, 0x125D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D58u;
label_125d58:
    // 0x125d58: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x125d58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_125d5c:
    // 0x125d5c: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x125d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125d60:
    // 0x125d60: 0x1f27823  subu        $t7, $t7, $s2
    ctx->pc = 0x125d60u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_125d64:
    // 0x125d64: 0x1d27021  addu        $t6, $t6, $s2
    ctx->pc = 0x125d64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
label_125d68:
    // 0x125d68: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x125d68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_125d6c:
    // 0x125d6c: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_125d70:
    if (ctx->pc == 0x125D70u) {
        ctx->pc = 0x125D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D6Cu;
        // 0x125d70: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D74u;
        goto label_125d74;
    }
    ctx->pc = 0x125D6Cu;
    {
        const bool branch_taken_0x125d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D6Cu;
        // 0x125d70: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d6c) {
            ctx->pc = 0x125CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ca4;
        }
    }
    ctx->pc = 0x125D74u;
label_125d74:
    // 0x125d74: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_125d78:
    if (ctx->pc == 0x125D78u) {
        ctx->pc = 0x125D7Cu;
        goto label_125d7c;
    }
    ctx->pc = 0x125D74u;
    {
        const bool branch_taken_0x125d74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x125d74) {
            ctx->pc = 0x125DA0u;
            goto label_125da0;
        }
    }
    ctx->pc = 0x125D7Cu;
label_125d7c:
    // 0x125d7c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x125d7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125d80:
    // 0x125d80: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x125d80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125d84:
    // 0x125d84: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125d88:
    // 0x125d88: 0x0  nop
    ctx->pc = 0x125d88u;
    // NOP
label_125d8c:
    // 0x125d8c: 0x0  nop
    ctx->pc = 0x125d8cu;
    // NOP
label_125d90:
    // 0x125d90: 0x0  nop
    ctx->pc = 0x125d90u;
    // NOP
label_125d94:
    // 0x125d94: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_125d98:
    if (ctx->pc == 0x125D98u) {
        ctx->pc = 0x125D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D94u;
        // 0x125d98: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D9Cu;
        goto label_125d9c;
    }
    ctx->pc = 0x125D94u;
    {
        const bool branch_taken_0x125d94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D94u;
        // 0x125d98: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d94) {
            ctx->pc = 0x125D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125d80;
        }
    }
    ctx->pc = 0x125D9Cu;
label_125d9c:
    // 0x125d9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x125d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125da0:
    // 0x125da0: 0x16e0000a  bnez        $s7, . + 4 + (0xA << 2)
label_125da4:
    if (ctx->pc == 0x125DA4u) {
        ctx->pc = 0x125DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA0u;
        // 0x125da4: 0x256782b  sltu        $t7, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DA8u;
        goto label_125da8;
    }
    ctx->pc = 0x125DA0u;
    {
        const bool branch_taken_0x125da0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA0u;
        // 0x125da4: 0x256782b  sltu        $t7, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125da0) {
            ctx->pc = 0x125DCCu;
            goto label_125dcc;
        }
    }
    ctx->pc = 0x125DA8u;
label_125da8:
    // 0x125da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125dac:
    // 0x125dac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x125dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_125db0:
    // 0x125db0: 0xc049bea  jal         func_126FA8
label_125db4:
    if (ctx->pc == 0x125DB4u) {
        ctx->pc = 0x125DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB0u;
        // 0x125db4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DB8u;
        goto label_125db8;
    }
    ctx->pc = 0x125DB0u;
    SET_GPR_U32(ctx, 31, 0x125DB8u);
    ctx->pc = 0x125DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DB0u;
    // 0x125db4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126FA8u, 0x125DB0u, 0x125DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DB8u;
label_125db8:
    // 0x125db8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_125dbc:
    if (ctx->pc == 0x125DBCu) {
        ctx->pc = 0x125DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB8u;
        // 0x125dbc: 0x547823  subu        $t7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DC0u;
        goto label_125dc0;
    }
    ctx->pc = 0x125DB8u;
    {
        const bool branch_taken_0x125db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB8u;
        // 0x125dbc: 0x547823  subu        $t7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125db8) {
            ctx->pc = 0x125EBCu;
            goto label_125ebc;
        }
    }
    ctx->pc = 0x125DC0u;
label_125dc0:
    // 0x125dc0: 0x25f60001  addiu       $s6, $t7, 0x1
    ctx->pc = 0x125dc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_125dc4:
    // 0x125dc4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x125dc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125dc8:
    // 0x125dc8: 0x256782b  sltu        $t7, $s2, $s6
    ctx->pc = 0x125dc8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_125dcc:
    // 0x125dcc: 0x8e6e0008  lw          $t6, 0x8($s3)
    ctx->pc = 0x125dccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_125dd0:
    // 0x125dd0: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x125dd0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125dd4:
    // 0x125dd4: 0x8e6c0014  lw          $t4, 0x14($s3)
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_125dd8:
    // 0x125dd8: 0x2cf680a  movz        $t5, $s6, $t7
    ctx->pc = 0x125dd8u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 22));
label_125ddc:
    // 0x125ddc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x125ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125de0:
    // 0x125de0: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x125de0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_125de4:
    // 0x125de4: 0x1e4782b  sltu        $t7, $t7, $a0
    ctx->pc = 0x125de4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_125de8:
    // 0x125de8: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_125dec:
    if (ctx->pc == 0x125DECu) {
        ctx->pc = 0x125DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DE8u;
        // 0x125dec: 0x1cc8021  addu        $s0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DF0u;
        goto label_125df0;
    }
    ctx->pc = 0x125DE8u;
    {
        const bool branch_taken_0x125de8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DE8u;
        // 0x125dec: 0x1cc8021  addu        $s0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125de8) {
            ctx->pc = 0x125E60u;
            goto label_125e60;
        }
    }
    ctx->pc = 0x125DF0u;
label_125df0:
    // 0x125df0: 0x20d782a  slt         $t7, $s0, $t5
    ctx->pc = 0x125df0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_125df4:
    // 0x125df4: 0x11e0001a  beqz        $t7, . + 4 + (0x1A << 2)
label_125df8:
    if (ctx->pc == 0x125DF8u) {
        ctx->pc = 0x125DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DF4u;
        // 0x125df8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DFCu;
        goto label_125dfc;
    }
    ctx->pc = 0x125DF4u;
    {
        const bool branch_taken_0x125df4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DF4u;
        // 0x125df8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125df4) {
            ctx->pc = 0x125E60u;
            goto label_125e60;
        }
    }
    ctx->pc = 0x125DFCu;
label_125dfc:
    // 0x125dfc: 0xc049c74  jal         func_1271D0
label_125e00:
    if (ctx->pc == 0x125E00u) {
        ctx->pc = 0x125E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DFCu;
        // 0x125e00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E04u;
        goto label_125e04;
    }
    ctx->pc = 0x125DFCu;
    SET_GPR_U32(ctx, 31, 0x125E04u);
    ctx->pc = 0x125E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DFCu;
    // 0x125e00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x125DFCu, 0x125E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E04u;
label_125e04:
    // 0x125e04: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x125e04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125e08:
    // 0x125e08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125e0c:
    // 0x125e0c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x125e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_125e10:
    // 0x125e10: 0xc049258  jal         func_124960
label_125e14:
    if (ctx->pc == 0x125E14u) {
        ctx->pc = 0x125E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E10u;
        // 0x125e14: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E18u;
        goto label_125e18;
    }
    ctx->pc = 0x125E10u;
    SET_GPR_U32(ctx, 31, 0x125E18u);
    ctx->pc = 0x125E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E10u;
    // 0x125e14: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124960u, 0x125E10u, 0x125E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E18u;
label_125e18:
    // 0x125e18: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
label_125e1c:
    if (ctx->pc == 0x125E1Cu) {
        ctx->pc = 0x125E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E18u;
        // 0x125e1c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E20u;
        goto label_125e20;
    }
    ctx->pc = 0x125E18u;
    {
        const bool branch_taken_0x125e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125e18) {
            ctx->pc = 0x125E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125E18u;
            // 0x125e1c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c18;
        }
    }
    ctx->pc = 0x125E20u;
label_125e20:
    // 0x125e20: 0x2d0b023  subu        $s6, $s6, $s0
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_125e24:
    // 0x125e24: 0x56c00006  bnel        $s6, $zero, . + 4 + (0x6 << 2)
label_125e28:
    if (ctx->pc == 0x125E28u) {
        ctx->pc = 0x125E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E24u;
        // 0x125e28: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E2Cu;
        goto label_125e2c;
    }
    ctx->pc = 0x125E24u;
    {
        const bool branch_taken_0x125e24 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x125e24) {
            ctx->pc = 0x125E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125E24u;
            // 0x125e28: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E40u;
            goto label_125e40;
        }
    }
    ctx->pc = 0x125E2Cu;
label_125e2c:
    // 0x125e2c: 0xc049258  jal         func_124960
label_125e30:
    if (ctx->pc == 0x125E30u) {
        ctx->pc = 0x125E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E2Cu;
        // 0x125e30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E34u;
        goto label_125e34;
    }
    ctx->pc = 0x125E2Cu;
    SET_GPR_U32(ctx, 31, 0x125E34u);
    ctx->pc = 0x125E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E2Cu;
    // 0x125e30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124960u, 0x125E2Cu, 0x125E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E34u;
label_125e34:
    // 0x125e34: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
label_125e38:
    if (ctx->pc == 0x125E38u) {
        ctx->pc = 0x125E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E34u;
        // 0x125e38: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E3Cu;
        goto label_125e3c;
    }
    ctx->pc = 0x125E34u;
    {
        const bool branch_taken_0x125e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E34u;
        // 0x125e38: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e34) {
            ctx->pc = 0x125C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c14;
        }
    }
    ctx->pc = 0x125E3Cu;
label_125e3c:
    // 0x125e3c: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x125e3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_125e40:
    // 0x125e40: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x125e40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_125e44:
    // 0x125e44: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x125e44u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_125e48:
    // 0x125e48: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x125e48u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_125e4c:
    // 0x125e4c: 0x15e0ffc9  bnez        $t7, . + 4 + (-0x37 << 2)
label_125e50:
    if (ctx->pc == 0x125E50u) {
        ctx->pc = 0x125E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E4Cu;
        // 0x125e50: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E54u;
        goto label_125e54;
    }
    ctx->pc = 0x125E4Cu;
    {
        const bool branch_taken_0x125e4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E4Cu;
        // 0x125e50: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e4c) {
            ctx->pc = 0x125D74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125d74;
        }
    }
    ctx->pc = 0x125E54u;
label_125e54:
    // 0x125e54: 0x1000ff63  b           . + 4 + (-0x9D << 2)
label_125e58:
    if (ctx->pc == 0x125E58u) {
        ctx->pc = 0x125E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E54u;
        // 0x125e58: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E5Cu;
        goto label_125e5c;
    }
    ctx->pc = 0x125E54u;
    {
        const bool branch_taken_0x125e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E54u;
        // 0x125e58: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e54) {
            ctx->pc = 0x125BE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125be4;
        }
    }
    ctx->pc = 0x125E5Cu;
label_125e5c:
    // 0x125e5c: 0x0  nop
    ctx->pc = 0x125e5cu;
    // NOP
label_125e60:
    // 0x125e60: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x125e60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_125e64:
    // 0x125e64: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
label_125e68:
    if (ctx->pc == 0x125E68u) {
        ctx->pc = 0x125E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E64u;
        // 0x125e68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E6Cu;
        goto label_125e6c;
    }
    ctx->pc = 0x125E64u;
    {
        const bool branch_taken_0x125e64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125e64) {
            ctx->pc = 0x125E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125E64u;
            // 0x125e68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E90u;
            goto label_125e90;
        }
    }
    ctx->pc = 0x125E6Cu;
label_125e6c:
    // 0x125e6c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x125e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_125e70:
    // 0x125e70: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x125e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_125e74:
    // 0x125e74: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x125e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_125e78:
    // 0x125e78: 0x40f809  jalr        $v0
label_125e7c:
    if (ctx->pc == 0x125E7Cu) {
        ctx->pc = 0x125E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E78u;
        // 0x125e7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E80u;
        goto label_125e80;
    }
    ctx->pc = 0x125E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125E80u);
        ctx->pc = 0x125E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E78u;
        // 0x125e7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125E78u, 0x125E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125E80u;
label_125e80:
    // 0x125e80: 0x1c40ffe7  bgtz        $v0, . + 4 + (-0x19 << 2)
label_125e84:
    if (ctx->pc == 0x125E84u) {
        ctx->pc = 0x125E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E80u;
        // 0x125e84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E88u;
        goto label_125e88;
    }
    ctx->pc = 0x125E80u;
    {
        const bool branch_taken_0x125e80 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x125E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E80u;
        // 0x125e84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e80) {
            ctx->pc = 0x125E20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125e20;
        }
    }
    ctx->pc = 0x125E88u;
label_125e88:
    // 0x125e88: 0x1000ff63  b           . + 4 + (-0x9D << 2)
label_125e8c:
    if (ctx->pc == 0x125E8Cu) {
        ctx->pc = 0x125E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E88u;
        // 0x125e8c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E90u;
        goto label_125e90;
    }
    ctx->pc = 0x125E88u;
    {
        const bool branch_taken_0x125e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E88u;
        // 0x125e8c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e88) {
            ctx->pc = 0x125C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125c18;
        }
    }
    ctx->pc = 0x125E90u;
label_125e90:
    // 0x125e90: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x125e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_125e94:
    // 0x125e94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125e98:
    // 0x125e98: 0xc049c74  jal         func_1271D0
label_125e9c:
    if (ctx->pc == 0x125E9Cu) {
        ctx->pc = 0x125E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E98u;
        // 0x125e9c: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125EA0u;
        goto label_125ea0;
    }
    ctx->pc = 0x125E98u;
    SET_GPR_U32(ctx, 31, 0x125EA0u);
    ctx->pc = 0x125E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E98u;
    // 0x125e9c: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x125E98u, 0x125EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EA0u;
label_125ea0:
    // 0x125ea0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x125ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_125ea4:
    // 0x125ea4: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_125ea8:
    // 0x125ea8: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x125ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_125eac:
    // 0x125eac: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x125eacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_125eb0:
    // 0x125eb0: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x125eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_125eb4:
    // 0x125eb4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_125eb8:
    if (ctx->pc == 0x125EB8u) {
        ctx->pc = 0x125EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EB4u;
        // 0x125eb8: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125EBCu;
        goto label_125ebc;
    }
    ctx->pc = 0x125EB4u;
    {
        const bool branch_taken_0x125eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EB4u;
        // 0x125eb8: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125eb4) {
            ctx->pc = 0x125E20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125e20;
        }
    }
    ctx->pc = 0x125EBCu;
label_125ebc:
    // 0x125ebc: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
label_125ec0:
    if (ctx->pc == 0x125EC0u) {
        ctx->pc = 0x125EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EBCu;
        // 0x125ec0: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125EC4u;
        goto label_125ec4;
    }
    ctx->pc = 0x125EBCu;
    {
        const bool branch_taken_0x125ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EBCu;
        // 0x125ec0: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ebc) {
            ctx->pc = 0x125DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125dc4;
        }
    }
    ctx->pc = 0x125EC4u;
label_125ec4:
    // 0x125ec4: 0x0  nop
    ctx->pc = 0x125ec4u;
    // NOP
}
