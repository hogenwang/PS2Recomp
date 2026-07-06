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

// Function: sub_00200AE0
// Address: 0x200ae0 - 0x200cf8
void sub_00200AE0_0x200ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200AE0_0x200ae0");
#endif

    switch (ctx->pc) {
        case 0x200ae0u: goto label_200ae0;
        case 0x200ae4u: goto label_200ae4;
        case 0x200ae8u: goto label_200ae8;
        case 0x200aecu: goto label_200aec;
        case 0x200af0u: goto label_200af0;
        case 0x200af4u: goto label_200af4;
        case 0x200af8u: goto label_200af8;
        case 0x200afcu: goto label_200afc;
        case 0x200b00u: goto label_200b00;
        case 0x200b04u: goto label_200b04;
        case 0x200b08u: goto label_200b08;
        case 0x200b0cu: goto label_200b0c;
        case 0x200b10u: goto label_200b10;
        case 0x200b14u: goto label_200b14;
        case 0x200b18u: goto label_200b18;
        case 0x200b1cu: goto label_200b1c;
        case 0x200b20u: goto label_200b20;
        case 0x200b24u: goto label_200b24;
        case 0x200b28u: goto label_200b28;
        case 0x200b2cu: goto label_200b2c;
        case 0x200b30u: goto label_200b30;
        case 0x200b34u: goto label_200b34;
        case 0x200b38u: goto label_200b38;
        case 0x200b3cu: goto label_200b3c;
        case 0x200b40u: goto label_200b40;
        case 0x200b44u: goto label_200b44;
        case 0x200b48u: goto label_200b48;
        case 0x200b4cu: goto label_200b4c;
        case 0x200b50u: goto label_200b50;
        case 0x200b54u: goto label_200b54;
        case 0x200b58u: goto label_200b58;
        case 0x200b5cu: goto label_200b5c;
        case 0x200b60u: goto label_200b60;
        case 0x200b64u: goto label_200b64;
        case 0x200b68u: goto label_200b68;
        case 0x200b6cu: goto label_200b6c;
        case 0x200b70u: goto label_200b70;
        case 0x200b74u: goto label_200b74;
        case 0x200b78u: goto label_200b78;
        case 0x200b7cu: goto label_200b7c;
        case 0x200b80u: goto label_200b80;
        case 0x200b84u: goto label_200b84;
        case 0x200b88u: goto label_200b88;
        case 0x200b8cu: goto label_200b8c;
        case 0x200b90u: goto label_200b90;
        case 0x200b94u: goto label_200b94;
        case 0x200b98u: goto label_200b98;
        case 0x200b9cu: goto label_200b9c;
        case 0x200ba0u: goto label_200ba0;
        case 0x200ba4u: goto label_200ba4;
        case 0x200ba8u: goto label_200ba8;
        case 0x200bacu: goto label_200bac;
        case 0x200bb0u: goto label_200bb0;
        case 0x200bb4u: goto label_200bb4;
        case 0x200bb8u: goto label_200bb8;
        case 0x200bbcu: goto label_200bbc;
        case 0x200bc0u: goto label_200bc0;
        case 0x200bc4u: goto label_200bc4;
        case 0x200bc8u: goto label_200bc8;
        case 0x200bccu: goto label_200bcc;
        case 0x200bd0u: goto label_200bd0;
        case 0x200bd4u: goto label_200bd4;
        case 0x200bd8u: goto label_200bd8;
        case 0x200bdcu: goto label_200bdc;
        case 0x200be0u: goto label_200be0;
        case 0x200be4u: goto label_200be4;
        case 0x200be8u: goto label_200be8;
        case 0x200becu: goto label_200bec;
        case 0x200bf0u: goto label_200bf0;
        case 0x200bf4u: goto label_200bf4;
        case 0x200bf8u: goto label_200bf8;
        case 0x200bfcu: goto label_200bfc;
        case 0x200c00u: goto label_200c00;
        case 0x200c04u: goto label_200c04;
        case 0x200c08u: goto label_200c08;
        case 0x200c0cu: goto label_200c0c;
        case 0x200c10u: goto label_200c10;
        case 0x200c14u: goto label_200c14;
        case 0x200c18u: goto label_200c18;
        case 0x200c1cu: goto label_200c1c;
        case 0x200c20u: goto label_200c20;
        case 0x200c24u: goto label_200c24;
        case 0x200c28u: goto label_200c28;
        case 0x200c2cu: goto label_200c2c;
        case 0x200c30u: goto label_200c30;
        case 0x200c34u: goto label_200c34;
        case 0x200c38u: goto label_200c38;
        case 0x200c3cu: goto label_200c3c;
        case 0x200c40u: goto label_200c40;
        case 0x200c44u: goto label_200c44;
        case 0x200c48u: goto label_200c48;
        case 0x200c4cu: goto label_200c4c;
        case 0x200c50u: goto label_200c50;
        case 0x200c54u: goto label_200c54;
        case 0x200c58u: goto label_200c58;
        case 0x200c5cu: goto label_200c5c;
        case 0x200c60u: goto label_200c60;
        case 0x200c64u: goto label_200c64;
        case 0x200c68u: goto label_200c68;
        case 0x200c6cu: goto label_200c6c;
        case 0x200c70u: goto label_200c70;
        case 0x200c74u: goto label_200c74;
        case 0x200c78u: goto label_200c78;
        case 0x200c7cu: goto label_200c7c;
        case 0x200c80u: goto label_200c80;
        case 0x200c84u: goto label_200c84;
        case 0x200c88u: goto label_200c88;
        case 0x200c8cu: goto label_200c8c;
        case 0x200c90u: goto label_200c90;
        case 0x200c94u: goto label_200c94;
        case 0x200c98u: goto label_200c98;
        case 0x200c9cu: goto label_200c9c;
        case 0x200ca0u: goto label_200ca0;
        case 0x200ca4u: goto label_200ca4;
        case 0x200ca8u: goto label_200ca8;
        case 0x200cacu: goto label_200cac;
        case 0x200cb0u: goto label_200cb0;
        case 0x200cb4u: goto label_200cb4;
        case 0x200cb8u: goto label_200cb8;
        case 0x200cbcu: goto label_200cbc;
        case 0x200cc0u: goto label_200cc0;
        case 0x200cc4u: goto label_200cc4;
        case 0x200cc8u: goto label_200cc8;
        case 0x200cccu: goto label_200ccc;
        case 0x200cd0u: goto label_200cd0;
        case 0x200cd4u: goto label_200cd4;
        case 0x200cd8u: goto label_200cd8;
        case 0x200cdcu: goto label_200cdc;
        case 0x200ce0u: goto label_200ce0;
        case 0x200ce4u: goto label_200ce4;
        case 0x200ce8u: goto label_200ce8;
        case 0x200cecu: goto label_200cec;
        case 0x200cf0u: goto label_200cf0;
        case 0x200cf4u: goto label_200cf4;
        default: break;
    }

    ctx->pc = 0x200ae0u;

label_200ae0:
    // 0x200ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200ae4:
    // 0x200ae4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x200ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_200ae8:
    // 0x200ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_200aec:
    // 0x200aec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200af0:
    // 0x200af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_200af4:
    // 0x200af4: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_200af8:
    // 0x200af8: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
label_200afc:
    if (ctx->pc == 0x200AFCu) {
        ctx->pc = 0x200AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AF8u;
        // 0x200afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B00u;
        goto label_200b00;
    }
    ctx->pc = 0x200AF8u;
    {
        const bool branch_taken_0x200af8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x200AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AF8u;
        // 0x200afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200af8) {
            ctx->pc = 0x200B70u;
            goto label_200b70;
        }
    }
    ctx->pc = 0x200B00u;
label_200b00:
    // 0x200b00: 0x14c5001b  bne         $a2, $a1, . + 4 + (0x1B << 2)
label_200b04:
    if (ctx->pc == 0x200B04u) {
        ctx->pc = 0x200B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B00u;
        // 0x200b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B08u;
        goto label_200b08;
    }
    ctx->pc = 0x200B00u;
    {
        const bool branch_taken_0x200b00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x200B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B00u;
        // 0x200b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b00) {
            ctx->pc = 0x200B70u;
            goto label_200b70;
        }
    }
    ctx->pc = 0x200B08u;
label_200b08:
    // 0x200b08: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x200b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_200b0c:
    // 0x200b0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_200b10:
    if (ctx->pc == 0x200B10u) {
        ctx->pc = 0x200B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B0Cu;
        // 0x200b10: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B14u;
        goto label_200b14;
    }
    ctx->pc = 0x200B0Cu;
    {
        const bool branch_taken_0x200b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B0Cu;
        // 0x200b10: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b0c) {
            ctx->pc = 0x200B48u;
            goto label_200b48;
        }
    }
    ctx->pc = 0x200B14u;
label_200b14:
    // 0x200b14: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x200b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_200b18:
    // 0x200b18: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_200b1c:
    if (ctx->pc == 0x200B1Cu) {
        ctx->pc = 0x200B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B18u;
        // 0x200b1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B20u;
        goto label_200b20;
    }
    ctx->pc = 0x200B18u;
    {
        const bool branch_taken_0x200b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b18) {
            ctx->pc = 0x200B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200B18u;
            // 0x200b1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200B6Cu;
            goto label_200b6c;
        }
    }
    ctx->pc = 0x200B20u;
label_200b20:
    // 0x200b20: 0x50b00012  beql        $a1, $s0, . + 4 + (0x12 << 2)
label_200b24:
    if (ctx->pc == 0x200B24u) {
        ctx->pc = 0x200B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B20u;
        // 0x200b24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B28u;
        goto label_200b28;
    }
    ctx->pc = 0x200B20u;
    {
        const bool branch_taken_0x200b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x200b20) {
            ctx->pc = 0x200B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200B20u;
            // 0x200b24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200B6Cu;
            goto label_200b6c;
        }
    }
    ctx->pc = 0x200B28u;
label_200b28:
    // 0x200b28: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_200b2c:
    if (ctx->pc == 0x200B2Cu) {
        ctx->pc = 0x200B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B28u;
        // 0x200b2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B30u;
        goto label_200b30;
    }
    ctx->pc = 0x200B28u;
    {
        const bool branch_taken_0x200b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B28u;
        // 0x200b2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b28) {
            ctx->pc = 0x200B70u;
            goto label_200b70;
        }
    }
    ctx->pc = 0x200B30u;
label_200b30:
    // 0x200b30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x200b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200b34:
    // 0x200b34: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_200b38:
    if (ctx->pc == 0x200B38u) {
        ctx->pc = 0x200B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B34u;
        // 0x200b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B3Cu;
        goto label_200b3c;
    }
    ctx->pc = 0x200B34u;
    {
        const bool branch_taken_0x200b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x200B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B34u;
        // 0x200b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b34) {
            ctx->pc = 0x200B58u;
            goto label_200b58;
        }
    }
    ctx->pc = 0x200B3Cu;
label_200b3c:
    // 0x200b3c: 0x1000000d  b           . + 4 + (0xD << 2)
label_200b40:
    if (ctx->pc == 0x200B40u) {
        ctx->pc = 0x200B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B3Cu;
        // 0x200b40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B44u;
        goto label_200b44;
    }
    ctx->pc = 0x200B3Cu;
    {
        const bool branch_taken_0x200b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B3Cu;
        // 0x200b40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b3c) {
            ctx->pc = 0x200B74u;
            goto label_200b74;
        }
    }
    ctx->pc = 0x200B44u;
label_200b44:
    // 0x200b44: 0x0  nop
    ctx->pc = 0x200b44u;
    // NOP
label_200b48:
    // 0x200b48: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_200b4c:
    if (ctx->pc == 0x200B4Cu) {
        ctx->pc = 0x200B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B48u;
        // 0x200b4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B50u;
        goto label_200b50;
    }
    ctx->pc = 0x200B48u;
    {
        const bool branch_taken_0x200b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x200B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B48u;
        // 0x200b4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b48) {
            ctx->pc = 0x200B68u;
            goto label_200b68;
        }
    }
    ctx->pc = 0x200B50u;
label_200b50:
    // 0x200b50: 0x10000008  b           . + 4 + (0x8 << 2)
label_200b54:
    if (ctx->pc == 0x200B54u) {
        ctx->pc = 0x200B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B50u;
        // 0x200b54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B58u;
        goto label_200b58;
    }
    ctx->pc = 0x200B50u;
    {
        const bool branch_taken_0x200b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B50u;
        // 0x200b54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b50) {
            ctx->pc = 0x200B74u;
            goto label_200b74;
        }
    }
    ctx->pc = 0x200B58u;
label_200b58:
    // 0x200b58: 0xc0801ce  jal         func_200738
label_200b5c:
    if (ctx->pc == 0x200B5Cu) {
        ctx->pc = 0x200B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B58u;
        // 0x200b5c: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B60u;
        goto label_200b60;
    }
    ctx->pc = 0x200B58u;
    SET_GPR_U32(ctx, 31, 0x200B60u);
    ctx->pc = 0x200B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B58u;
    // 0x200b5c: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200738u, 0x200B58u, 0x200B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B60u;
label_200b60:
    // 0x200b60: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_200b64:
    if (ctx->pc == 0x200B64u) {
        ctx->pc = 0x200B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B60u;
        // 0x200b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B68u;
        goto label_200b68;
    }
    ctx->pc = 0x200B60u;
    {
        const bool branch_taken_0x200b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x200B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B60u;
        // 0x200b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b60) {
            ctx->pc = 0x200B70u;
            goto label_200b70;
        }
    }
    ctx->pc = 0x200B68u;
label_200b68:
    // 0x200b68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x200b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b6c:
    // 0x200b6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200b70:
    // 0x200b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200b74:
    // 0x200b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_200b78:
    // 0x200b78: 0x3e00008  jr          $ra
label_200b7c:
    if (ctx->pc == 0x200B7Cu) {
        ctx->pc = 0x200B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B78u;
        // 0x200b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B80u;
        goto label_200b80;
    }
    ctx->pc = 0x200B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B78u;
        // 0x200b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B80u;
label_200b80:
    // 0x200b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200b84:
    // 0x200b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200b88:
    // 0x200b88: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x200b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_200b8c:
    // 0x200b8c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x200b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_200b90:
    // 0x200b90: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x200b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_200b94:
    // 0x200b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200b98:
    // 0x200b98: 0x80808f2  j           func_2023C8
label_200b9c:
    if (ctx->pc == 0x200B9Cu) {
        ctx->pc = 0x200B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B98u;
        // 0x200b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BA0u;
        goto label_200ba0;
    }
    ctx->pc = 0x200B98u;
    ctx->pc = 0x200B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B98u;
    // 0x200b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023C8u, 0x200B98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200BA0u;
label_200ba0:
    // 0x200ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200ba4:
    // 0x200ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200ba8:
    // 0x200ba8: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x200ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_200bac:
    // 0x200bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200bb0:
    // 0x200bb0: 0x80802ee  j           func_200BB8
label_200bb4:
    if (ctx->pc == 0x200BB4u) {
        ctx->pc = 0x200BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BB0u;
        // 0x200bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BB8u;
        goto label_200bb8;
    }
    ctx->pc = 0x200BB0u;
    ctx->pc = 0x200BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200BB0u;
    // 0x200bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200BB8u;
    goto label_200bb8;
    ctx->pc = 0x200BB8u;
label_200bb8:
    // 0x200bb8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x200bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_200bbc:
    // 0x200bbc: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x200bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_200bc0:
    // 0x200bc0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x200bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_200bc4:
    // 0x200bc4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x200bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_200bc8:
    // 0x200bc8: 0x0  nop
    ctx->pc = 0x200bc8u;
    // NOP
label_200bcc:
    // 0x200bcc: 0x0  nop
    ctx->pc = 0x200bccu;
    // NOP
label_200bd0:
    // 0x200bd0: 0x0  nop
    ctx->pc = 0x200bd0u;
    // NOP
label_200bd4:
    // 0x200bd4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
label_200bd8:
    if (ctx->pc == 0x200BD8u) {
        ctx->pc = 0x200BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BD4u;
        // 0x200bd8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200BDCu;
        goto label_200bdc;
    }
    ctx->pc = 0x200BD4u;
    {
        const bool branch_taken_0x200bd4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x200BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BD4u;
        // 0x200bd8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bd4) {
            ctx->pc = 0x200BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200bc0;
        }
    }
    ctx->pc = 0x200BDCu;
label_200bdc:
    // 0x200bdc: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x200bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_200be0:
    // 0x200be0: 0x3421fdf3  ori         $at, $at, 0xFDF3
    ctx->pc = 0x200be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65011);
label_200be4:
    // 0x200be4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x200be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_200be8:
    // 0x200be8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x200be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200bec:
    // 0x200bec: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x200becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_200bf0:
    // 0x200bf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x200bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_200bf4:
    // 0x200bf4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x200bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_200bf8:
    // 0x200bf8: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x200bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_200bfc:
    // 0x200bfc: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x200bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_200c00:
    // 0x200c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_200c04:
    // 0x200c04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_200c08:
    // 0x200c08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_200c0c:
    // 0x200c0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x200c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_200c10:
    // 0x200c10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x200c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_200c14:
    // 0x200c14: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x200c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_200c18:
    // 0x200c18: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x200c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_200c1c:
    // 0x200c1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_200c20:
    if (ctx->pc == 0x200C20u) {
        ctx->pc = 0x200C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C1Cu;
        // 0x200c20: 0x28a300ec  slti        $v1, $a1, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C24u;
        goto label_200c24;
    }
    ctx->pc = 0x200C1Cu;
    {
        const bool branch_taken_0x200c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x200C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C1Cu;
        // 0x200c20: 0x28a300ec  slti        $v1, $a1, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c1c) {
            ctx->pc = 0x200C34u;
            goto label_200c34;
        }
    }
    ctx->pc = 0x200C24u;
label_200c24:
    // 0x200c24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x200c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_200c28:
    // 0x200c28: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x200c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_200c2c:
    // 0x200c2c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x200c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_200c30:
    // 0x200c30: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x200c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_200c34:
    // 0x200c34: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_200c38:
    if (ctx->pc == 0x200C38u) {
        ctx->pc = 0x200C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C34u;
        // 0x200c38: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C3Cu;
        goto label_200c3c;
    }
    ctx->pc = 0x200C34u;
    {
        const bool branch_taken_0x200c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C34u;
        // 0x200c38: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c34) {
            ctx->pc = 0x200BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200bf8;
        }
    }
    ctx->pc = 0x200C3Cu;
label_200c3c:
    // 0x200c3c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x200c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_200c40:
    // 0x200c40: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x200c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_200c44:
    // 0x200c44: 0x0  nop
    ctx->pc = 0x200c44u;
    // NOP
label_200c48:
    // 0x200c48: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_200c4c:
    // 0x200c4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_200c50:
    // 0x200c50: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x200c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_200c54:
    // 0x200c54: 0x0  nop
    ctx->pc = 0x200c54u;
    // NOP
label_200c58:
    // 0x200c58: 0x0  nop
    ctx->pc = 0x200c58u;
    // NOP
label_200c5c:
    // 0x200c5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_200c60:
    if (ctx->pc == 0x200C60u) {
        ctx->pc = 0x200C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C5Cu;
        // 0x200c60: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C64u;
        goto label_200c64;
    }
    ctx->pc = 0x200C5Cu;
    {
        const bool branch_taken_0x200c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C5Cu;
        // 0x200c60: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c5c) {
            ctx->pc = 0x200C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200c48;
        }
    }
    ctx->pc = 0x200C64u;
label_200c64:
    // 0x200c64: 0x3e00008  jr          $ra
label_200c68:
    if (ctx->pc == 0x200C68u) {
        ctx->pc = 0x200C6Cu;
        goto label_200c6c;
    }
    ctx->pc = 0x200C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C6Cu;
label_200c6c:
    // 0x200c6c: 0x0  nop
    ctx->pc = 0x200c6cu;
    // NOP
label_200c70:
    // 0x200c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200c74:
    // 0x200c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200c78:
    // 0x200c78: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x200c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_200c7c:
    // 0x200c7c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x200c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_200c80:
    // 0x200c80: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x200c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_200c84:
    // 0x200c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200c88:
    // 0x200c88: 0x80801a0  j           func_200680
label_200c8c:
    if (ctx->pc == 0x200C8Cu) {
        ctx->pc = 0x200C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C88u;
        // 0x200c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C90u;
        goto label_200c90;
    }
    ctx->pc = 0x200C88u;
    ctx->pc = 0x200C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C88u;
    // 0x200c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200680u, 0x200C88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200C90u;
label_200c90:
    // 0x200c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200c94:
    // 0x200c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200c98:
    // 0x200c98: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x200c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_200c9c:
    // 0x200c9c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x200c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_200ca0:
    // 0x200ca0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x200ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_200ca4:
    // 0x200ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200ca8:
    // 0x200ca8: 0x80801b2  j           func_2006C8
label_200cac:
    if (ctx->pc == 0x200CACu) {
        ctx->pc = 0x200CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CA8u;
        // 0x200cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CB0u;
        goto label_200cb0;
    }
    ctx->pc = 0x200CA8u;
    ctx->pc = 0x200CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CA8u;
    // 0x200cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006C8u, 0x200CA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200CB0u;
label_200cb0:
    // 0x200cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200cb4:
    // 0x200cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200cb8:
    // 0x200cb8: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x200cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_200cbc:
    // 0x200cbc: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x200cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_200cc0:
    // 0x200cc0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x200cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_200cc4:
    // 0x200cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200cc8:
    // 0x200cc8: 0x80801c0  j           func_200700
label_200ccc:
    if (ctx->pc == 0x200CCCu) {
        ctx->pc = 0x200CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CC8u;
        // 0x200ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CD0u;
        goto label_200cd0;
    }
    ctx->pc = 0x200CC8u;
    ctx->pc = 0x200CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CC8u;
    // 0x200ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200700u, 0x200CC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200CD0u;
label_200cd0:
    // 0x200cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200cd4:
    // 0x200cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200cd8:
    // 0x200cd8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x200cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_200cdc:
    // 0x200cdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_200ce0:
    if (ctx->pc == 0x200CE0u) {
        ctx->pc = 0x200CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CDCu;
        // 0x200ce0: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CE4u;
        goto label_200ce4;
    }
    ctx->pc = 0x200CDCu;
    {
        const bool branch_taken_0x200cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CDCu;
        // 0x200ce0: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cdc) {
            ctx->pc = 0x200CECu;
            goto label_200cec;
        }
    }
    ctx->pc = 0x200CE4u;
label_200ce4:
    // 0x200ce4: 0x40f809  jalr        $v0
label_200ce8:
    if (ctx->pc == 0x200CE8u) {
        ctx->pc = 0x200CECu;
        goto label_200cec;
    }
    ctx->pc = 0x200CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200CECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CE4u, 0x200CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200CECu;
label_200cec:
    // 0x200cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200cf0:
    // 0x200cf0: 0x3e00008  jr          $ra
label_200cf4:
    if (ctx->pc == 0x200CF4u) {
        ctx->pc = 0x200CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CF0u;
        // 0x200cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CF8u;
        goto label_fallthrough_0x200cf0;
    }
    ctx->pc = 0x200CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CF0u;
        // 0x200cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200cf0:
    ctx->pc = 0x200CF8u;
}
