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

// Function: sub_002A9BF8
// Address: 0x2a9bf8 - 0x2a9e88
void sub_002A9BF8_0x2a9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9BF8_0x2a9bf8");
#endif

    switch (ctx->pc) {
        case 0x2a9bf8u: goto label_2a9bf8;
        case 0x2a9bfcu: goto label_2a9bfc;
        case 0x2a9c00u: goto label_2a9c00;
        case 0x2a9c04u: goto label_2a9c04;
        case 0x2a9c08u: goto label_2a9c08;
        case 0x2a9c0cu: goto label_2a9c0c;
        case 0x2a9c10u: goto label_2a9c10;
        case 0x2a9c14u: goto label_2a9c14;
        case 0x2a9c18u: goto label_2a9c18;
        case 0x2a9c1cu: goto label_2a9c1c;
        case 0x2a9c20u: goto label_2a9c20;
        case 0x2a9c24u: goto label_2a9c24;
        case 0x2a9c28u: goto label_2a9c28;
        case 0x2a9c2cu: goto label_2a9c2c;
        case 0x2a9c30u: goto label_2a9c30;
        case 0x2a9c34u: goto label_2a9c34;
        case 0x2a9c38u: goto label_2a9c38;
        case 0x2a9c3cu: goto label_2a9c3c;
        case 0x2a9c40u: goto label_2a9c40;
        case 0x2a9c44u: goto label_2a9c44;
        case 0x2a9c48u: goto label_2a9c48;
        case 0x2a9c4cu: goto label_2a9c4c;
        case 0x2a9c50u: goto label_2a9c50;
        case 0x2a9c54u: goto label_2a9c54;
        case 0x2a9c58u: goto label_2a9c58;
        case 0x2a9c5cu: goto label_2a9c5c;
        case 0x2a9c60u: goto label_2a9c60;
        case 0x2a9c64u: goto label_2a9c64;
        case 0x2a9c68u: goto label_2a9c68;
        case 0x2a9c6cu: goto label_2a9c6c;
        case 0x2a9c70u: goto label_2a9c70;
        case 0x2a9c74u: goto label_2a9c74;
        case 0x2a9c78u: goto label_2a9c78;
        case 0x2a9c7cu: goto label_2a9c7c;
        case 0x2a9c80u: goto label_2a9c80;
        case 0x2a9c84u: goto label_2a9c84;
        case 0x2a9c88u: goto label_2a9c88;
        case 0x2a9c8cu: goto label_2a9c8c;
        case 0x2a9c90u: goto label_2a9c90;
        case 0x2a9c94u: goto label_2a9c94;
        case 0x2a9c98u: goto label_2a9c98;
        case 0x2a9c9cu: goto label_2a9c9c;
        case 0x2a9ca0u: goto label_2a9ca0;
        case 0x2a9ca4u: goto label_2a9ca4;
        case 0x2a9ca8u: goto label_2a9ca8;
        case 0x2a9cacu: goto label_2a9cac;
        case 0x2a9cb0u: goto label_2a9cb0;
        case 0x2a9cb4u: goto label_2a9cb4;
        case 0x2a9cb8u: goto label_2a9cb8;
        case 0x2a9cbcu: goto label_2a9cbc;
        case 0x2a9cc0u: goto label_2a9cc0;
        case 0x2a9cc4u: goto label_2a9cc4;
        case 0x2a9cc8u: goto label_2a9cc8;
        case 0x2a9cccu: goto label_2a9ccc;
        case 0x2a9cd0u: goto label_2a9cd0;
        case 0x2a9cd4u: goto label_2a9cd4;
        case 0x2a9cd8u: goto label_2a9cd8;
        case 0x2a9cdcu: goto label_2a9cdc;
        case 0x2a9ce0u: goto label_2a9ce0;
        case 0x2a9ce4u: goto label_2a9ce4;
        case 0x2a9ce8u: goto label_2a9ce8;
        case 0x2a9cecu: goto label_2a9cec;
        case 0x2a9cf0u: goto label_2a9cf0;
        case 0x2a9cf4u: goto label_2a9cf4;
        case 0x2a9cf8u: goto label_2a9cf8;
        case 0x2a9cfcu: goto label_2a9cfc;
        case 0x2a9d00u: goto label_2a9d00;
        case 0x2a9d04u: goto label_2a9d04;
        case 0x2a9d08u: goto label_2a9d08;
        case 0x2a9d0cu: goto label_2a9d0c;
        case 0x2a9d10u: goto label_2a9d10;
        case 0x2a9d14u: goto label_2a9d14;
        case 0x2a9d18u: goto label_2a9d18;
        case 0x2a9d1cu: goto label_2a9d1c;
        case 0x2a9d20u: goto label_2a9d20;
        case 0x2a9d24u: goto label_2a9d24;
        case 0x2a9d28u: goto label_2a9d28;
        case 0x2a9d2cu: goto label_2a9d2c;
        case 0x2a9d30u: goto label_2a9d30;
        case 0x2a9d34u: goto label_2a9d34;
        case 0x2a9d38u: goto label_2a9d38;
        case 0x2a9d3cu: goto label_2a9d3c;
        case 0x2a9d40u: goto label_2a9d40;
        case 0x2a9d44u: goto label_2a9d44;
        case 0x2a9d48u: goto label_2a9d48;
        case 0x2a9d4cu: goto label_2a9d4c;
        case 0x2a9d50u: goto label_2a9d50;
        case 0x2a9d54u: goto label_2a9d54;
        case 0x2a9d58u: goto label_2a9d58;
        case 0x2a9d5cu: goto label_2a9d5c;
        case 0x2a9d60u: goto label_2a9d60;
        case 0x2a9d64u: goto label_2a9d64;
        case 0x2a9d68u: goto label_2a9d68;
        case 0x2a9d6cu: goto label_2a9d6c;
        case 0x2a9d70u: goto label_2a9d70;
        case 0x2a9d74u: goto label_2a9d74;
        case 0x2a9d78u: goto label_2a9d78;
        case 0x2a9d7cu: goto label_2a9d7c;
        case 0x2a9d80u: goto label_2a9d80;
        case 0x2a9d84u: goto label_2a9d84;
        case 0x2a9d88u: goto label_2a9d88;
        case 0x2a9d8cu: goto label_2a9d8c;
        case 0x2a9d90u: goto label_2a9d90;
        case 0x2a9d94u: goto label_2a9d94;
        case 0x2a9d98u: goto label_2a9d98;
        case 0x2a9d9cu: goto label_2a9d9c;
        case 0x2a9da0u: goto label_2a9da0;
        case 0x2a9da4u: goto label_2a9da4;
        case 0x2a9da8u: goto label_2a9da8;
        case 0x2a9dacu: goto label_2a9dac;
        case 0x2a9db0u: goto label_2a9db0;
        case 0x2a9db4u: goto label_2a9db4;
        case 0x2a9db8u: goto label_2a9db8;
        case 0x2a9dbcu: goto label_2a9dbc;
        case 0x2a9dc0u: goto label_2a9dc0;
        case 0x2a9dc4u: goto label_2a9dc4;
        case 0x2a9dc8u: goto label_2a9dc8;
        case 0x2a9dccu: goto label_2a9dcc;
        case 0x2a9dd0u: goto label_2a9dd0;
        case 0x2a9dd4u: goto label_2a9dd4;
        case 0x2a9dd8u: goto label_2a9dd8;
        case 0x2a9ddcu: goto label_2a9ddc;
        case 0x2a9de0u: goto label_2a9de0;
        case 0x2a9de4u: goto label_2a9de4;
        case 0x2a9de8u: goto label_2a9de8;
        case 0x2a9decu: goto label_2a9dec;
        case 0x2a9df0u: goto label_2a9df0;
        case 0x2a9df4u: goto label_2a9df4;
        case 0x2a9df8u: goto label_2a9df8;
        case 0x2a9dfcu: goto label_2a9dfc;
        case 0x2a9e00u: goto label_2a9e00;
        case 0x2a9e04u: goto label_2a9e04;
        case 0x2a9e08u: goto label_2a9e08;
        case 0x2a9e0cu: goto label_2a9e0c;
        case 0x2a9e10u: goto label_2a9e10;
        case 0x2a9e14u: goto label_2a9e14;
        case 0x2a9e18u: goto label_2a9e18;
        case 0x2a9e1cu: goto label_2a9e1c;
        case 0x2a9e20u: goto label_2a9e20;
        case 0x2a9e24u: goto label_2a9e24;
        case 0x2a9e28u: goto label_2a9e28;
        case 0x2a9e2cu: goto label_2a9e2c;
        case 0x2a9e30u: goto label_2a9e30;
        case 0x2a9e34u: goto label_2a9e34;
        case 0x2a9e38u: goto label_2a9e38;
        case 0x2a9e3cu: goto label_2a9e3c;
        case 0x2a9e40u: goto label_2a9e40;
        case 0x2a9e44u: goto label_2a9e44;
        case 0x2a9e48u: goto label_2a9e48;
        case 0x2a9e4cu: goto label_2a9e4c;
        case 0x2a9e50u: goto label_2a9e50;
        case 0x2a9e54u: goto label_2a9e54;
        case 0x2a9e58u: goto label_2a9e58;
        case 0x2a9e5cu: goto label_2a9e5c;
        case 0x2a9e60u: goto label_2a9e60;
        case 0x2a9e64u: goto label_2a9e64;
        case 0x2a9e68u: goto label_2a9e68;
        case 0x2a9e6cu: goto label_2a9e6c;
        case 0x2a9e70u: goto label_2a9e70;
        case 0x2a9e74u: goto label_2a9e74;
        case 0x2a9e78u: goto label_2a9e78;
        case 0x2a9e7cu: goto label_2a9e7c;
        case 0x2a9e80u: goto label_2a9e80;
        case 0x2a9e84u: goto label_2a9e84;
        default: break;
    }

    ctx->pc = 0x2a9bf8u;

label_2a9bf8:
    // 0x2a9bf8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a9bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2a9bfc:
    // 0x2a9bfc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2a9c00:
    // 0x2a9c00: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a9c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2a9c04:
    // 0x2a9c04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a9c04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c08:
    // 0x2a9c08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a9c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a9c0c:
    // 0x2a9c0c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a9c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2a9c10:
    // 0x2a9c10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a9c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c14:
    // 0x2a9c14: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2a9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2a9c18:
    // 0x2a9c18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a9c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2a9c1c:
    // 0x2a9c1c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a9c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2a9c20:
    // 0x2a9c20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a9c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a9c24:
    // 0x2a9c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a9c28:
    // 0x2a9c28: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2a9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2a9c2c:
    // 0x2a9c2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a9c30:
    if (ctx->pc == 0x2A9C30u) {
        ctx->pc = 0x2A9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C2Cu;
        // 0x2a9c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C34u;
        goto label_2a9c34;
    }
    ctx->pc = 0x2A9C2Cu;
    {
        const bool branch_taken_0x2a9c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C2Cu;
        // 0x2a9c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c2c) {
            ctx->pc = 0x2A9C40u;
            goto label_2a9c40;
        }
    }
    ctx->pc = 0x2A9C34u;
label_2a9c34:
    // 0x2a9c34: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a9c34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c38:
    // 0x2a9c38: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a9c3c:
    if (ctx->pc == 0x2A9C3Cu) {
        ctx->pc = 0x2A9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C38u;
        // 0x2a9c3c: 0x8e5600c8  lw          $s6, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C40u;
        goto label_2a9c40;
    }
    ctx->pc = 0x2A9C38u;
    {
        const bool branch_taken_0x2a9c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C38u;
        // 0x2a9c3c: 0x8e5600c8  lw          $s6, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c38) {
            ctx->pc = 0x2A9C58u;
            goto label_2a9c58;
        }
    }
    ctx->pc = 0x2A9C40u;
label_2a9c40:
    // 0x2a9c40: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x2a9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2a9c44:
    // 0x2a9c44: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2a9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2a9c48:
    // 0x2a9c48: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a9c4c:
    if (ctx->pc == 0x2A9C4Cu) {
        ctx->pc = 0x2A9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C48u;
        // 0x2a9c4c: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C50u;
        goto label_2a9c50;
    }
    ctx->pc = 0x2A9C48u;
    {
        const bool branch_taken_0x2a9c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c48) {
            ctx->pc = 0x2A9C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9C48u;
            // 0x2a9c4c: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9C5Cu;
            goto label_2a9c5c;
        }
    }
    ctx->pc = 0x2A9C50u;
label_2a9c50:
    // 0x2a9c50: 0x8c560084  lw          $s6, 0x84($v0)
    ctx->pc = 0x2a9c50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2a9c54:
    // 0x2a9c54: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2a9c54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c58:
    // 0x2a9c58: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2a9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2a9c5c:
    // 0x2a9c5c: 0x24041210  addiu       $a0, $zero, 0x1210
    ctx->pc = 0x2a9c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2a9c60:
    // 0x2a9c60: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2a9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a9c64:
    // 0x2a9c64: 0x1464007b  bne         $v1, $a0, . + 4 + (0x7B << 2)
label_2a9c68:
    if (ctx->pc == 0x2A9C68u) {
        ctx->pc = 0x2A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C64u;
        // 0x2a9c68: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C6Cu;
        goto label_2a9c6c;
    }
    ctx->pc = 0x2A9C64u;
    {
        const bool branch_taken_0x2a9c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C64u;
        // 0x2a9c68: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c64) {
            ctx->pc = 0x2A9E54u;
            goto label_2a9e54;
        }
    }
    ctx->pc = 0x2A9C6Cu;
label_2a9c6c:
    // 0x2a9c6c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2a9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2a9c70:
    // 0x2a9c70: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x2a9c70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2a9c74:
    // 0x2a9c74: 0xc0a8d8a  jal         func_2A3628
label_2a9c78:
    if (ctx->pc == 0x2A9C78u) {
        ctx->pc = 0x2A9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C74u;
        // 0x2a9c78: 0x24540064  addiu       $s4, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C7Cu;
        goto label_2a9c7c;
    }
    ctx->pc = 0x2A9C74u;
    SET_GPR_U32(ctx, 31, 0x2A9C7Cu);
    ctx->pc = 0x2A9C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C74u;
    // 0x2a9c78: 0x24540064  addiu       $s4, $v0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2A9C74u, 0x2A9C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C7Cu;
label_2a9c7c:
    // 0x2a9c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a9c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c80:
    // 0x2a9c80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c84:
    // 0x2a9c84: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2a9c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2a9c88:
    // 0x2a9c88: 0xc0a8d02  jal         func_2A3408
label_2a9c8c:
    if (ctx->pc == 0x2A9C8Cu) {
        ctx->pc = 0x2A9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C88u;
        // 0x2a9c8c: 0x2674000b  addiu       $s4, $s3, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C90u;
        goto label_2a9c90;
    }
    ctx->pc = 0x2A9C88u;
    SET_GPR_U32(ctx, 31, 0x2A9C90u);
    ctx->pc = 0x2A9C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C88u;
    // 0x2a9c8c: 0x2674000b  addiu       $s4, $s3, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2A9C88u, 0x2A9C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C90u;
label_2a9c90:
    // 0x2a9c90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a9c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9c94:
    // 0x2a9c94: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2a9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_2a9c98:
    // 0x2a9c98: 0xa2640002  sb          $a0, 0x2($s3)
    ctx->pc = 0x2a9c98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a9c9c:
    // 0x2a9c9c: 0xde430100  ld          $v1, 0x100($s2)
    ctx->pc = 0x2a9c9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 256)));
label_2a9ca0:
    // 0x2a9ca0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a9ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a9ca4:
    // 0x2a9ca4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2a9ca8:
    if (ctx->pc == 0x2A9CA8u) {
        ctx->pc = 0x2A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CA4u;
        // 0x2a9ca8: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CACu;
        goto label_2a9cac;
    }
    ctx->pc = 0x2A9CA4u;
    {
        const bool branch_taken_0x2a9ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CA4u;
        // 0x2a9ca8: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ca4) {
            ctx->pc = 0x2A9CC0u;
            goto label_2a9cc0;
        }
    }
    ctx->pc = 0x2A9CACu;
label_2a9cac:
    // 0x2a9cac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9cb0:
    // 0x2a9cb0: 0xa2640004  sb          $a0, 0x4($s3)
    ctx->pc = 0x2a9cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 4));
label_2a9cb4:
    // 0x2a9cb4: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x2a9cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
label_2a9cb8:
    // 0x2a9cb8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a9cbc:
    if (ctx->pc == 0x2A9CBCu) {
        ctx->pc = 0x2A9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CB8u;
        // 0x2a9cbc: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CC0u;
        goto label_2a9cc0;
    }
    ctx->pc = 0x2A9CB8u;
    {
        const bool branch_taken_0x2a9cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CB8u;
        // 0x2a9cbc: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cb8) {
            ctx->pc = 0x2A9CF8u;
            goto label_2a9cf8;
        }
    }
    ctx->pc = 0x2A9CC0u;
label_2a9cc0:
    // 0x2a9cc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a9cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a9cc4:
    // 0x2a9cc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2a9cc8:
    if (ctx->pc == 0x2A9CC8u) {
        ctx->pc = 0x2A9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CC4u;
        // 0x2a9cc8: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CCCu;
        goto label_2a9ccc;
    }
    ctx->pc = 0x2A9CC4u;
    {
        const bool branch_taken_0x2a9cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CC4u;
        // 0x2a9cc8: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cc4) {
            ctx->pc = 0x2A9CE0u;
            goto label_2a9ce0;
        }
    }
    ctx->pc = 0x2A9CCCu;
label_2a9ccc:
    // 0x2a9ccc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9cd0:
    // 0x2a9cd0: 0xa2600004  sb          $zero, 0x4($s3)
    ctx->pc = 0x2a9cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a9cd4:
    // 0x2a9cd4: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x2a9cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
label_2a9cd8:
    // 0x2a9cd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a9cdc:
    if (ctx->pc == 0x2A9CDCu) {
        ctx->pc = 0x2A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CD8u;
        // 0x2a9cdc: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CE0u;
        goto label_2a9ce0;
    }
    ctx->pc = 0x2A9CD8u;
    {
        const bool branch_taken_0x2a9cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CD8u;
        // 0x2a9cdc: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cd8) {
            ctx->pc = 0x2A9CF8u;
            goto label_2a9cf8;
        }
    }
    ctx->pc = 0x2A9CE0u;
label_2a9ce0:
    // 0x2a9ce0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a9ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a9ce4:
    // 0x2a9ce4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2a9ce8:
    if (ctx->pc == 0x2A9CE8u) {
        ctx->pc = 0x2A9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CE4u;
        // 0x2a9ce8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CECu;
        goto label_2a9cec;
    }
    ctx->pc = 0x2A9CE4u;
    {
        const bool branch_taken_0x2a9ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CE4u;
        // 0x2a9ce8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ce4) {
            ctx->pc = 0x2A9D04u;
            goto label_2a9d04;
        }
    }
    ctx->pc = 0x2A9CECu;
label_2a9cec:
    // 0x2a9cec: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x2a9cecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
label_2a9cf0:
    // 0x2a9cf0: 0xa2630004  sb          $v1, 0x4($s3)
    ctx->pc = 0x2a9cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 3));
label_2a9cf4:
    // 0x2a9cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a9cf8:
    // 0x2a9cf8: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x2a9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
label_2a9cfc:
    // 0x2a9cfc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a9d00:
    if (ctx->pc == 0x2A9D00u) {
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CFCu;
        // 0x2a9d00: 0x26700005  addiu       $s0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D04u;
        goto label_2a9d04;
    }
    ctx->pc = 0x2A9CFCu;
    {
        const bool branch_taken_0x2a9cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CFCu;
        // 0x2a9d00: 0x26700005  addiu       $s0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cfc) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9D04u;
label_2a9d04:
    // 0x2a9d04: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2a9d08:
    if (ctx->pc == 0x2A9D08u) {
        ctx->pc = 0x2A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D04u;
        // 0x2a9d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D0Cu;
        goto label_2a9d0c;
    }
    ctx->pc = 0x2A9D04u;
    {
        const bool branch_taken_0x2a9d04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D04u;
        // 0x2a9d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d04) {
            ctx->pc = 0x2A9D1Cu;
            goto label_2a9d1c;
        }
    }
    ctx->pc = 0x2A9D0Cu;
label_2a9d0c:
    // 0x2a9d0c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2a9d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d10:
    // 0x2a9d10: 0x24054008  addiu       $a1, $zero, 0x4008
    ctx->pc = 0x2a9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
label_2a9d14:
    // 0x2a9d14: 0x2a0f809  jalr        $s5
label_2a9d18:
    if (ctx->pc == 0x2A9D18u) {
        ctx->pc = 0x2A9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D14u;
        // 0x2a9d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D1Cu;
        goto label_2a9d1c;
    }
    ctx->pc = 0x2A9D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2A9D1Cu);
        ctx->pc = 0x2A9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D14u;
        // 0x2a9d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D14u, 0x2A9D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9D1Cu;
label_2a9d1c:
    // 0x2a9d1c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2a9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a9d20:
    // 0x2a9d20: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x2a9d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2a9d24:
    // 0x2a9d24: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a9d28:
    if (ctx->pc == 0x2A9D28u) {
        ctx->pc = 0x2A9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D24u;
        // 0x2a9d28: 0x240600bf  addiu       $a2, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D2Cu;
        goto label_2a9d2c;
    }
    ctx->pc = 0x2A9D24u;
    {
        const bool branch_taken_0x2a9d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D24u;
        // 0x2a9d28: 0x240600bf  addiu       $a2, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d24) {
            ctx->pc = 0x2A9D74u;
            goto label_2a9d74;
        }
    }
    ctx->pc = 0x2A9D2Cu;
label_2a9d2c:
    // 0x2a9d2c: 0xc0ac1c4  jal         func_2B0710
label_2a9d30:
    if (ctx->pc == 0x2A9D30u) {
        ctx->pc = 0x2A9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D2Cu;
        // 0x2a9d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D34u;
        goto label_2a9d34;
    }
    ctx->pc = 0x2A9D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D34u);
    ctx->pc = 0x2A9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D2Cu;
    // 0x2a9d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0710u, 0x2A9D2Cu, 0x2A9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D34u;
label_2a9d34:
    // 0x2a9d34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a9d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d38:
    // 0x2a9d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d3c:
    // 0x2a9d3c: 0xc0ac1de  jal         func_2B0778
label_2a9d40:
    if (ctx->pc == 0x2A9D40u) {
        ctx->pc = 0x2A9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D3Cu;
        // 0x2a9d40: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D44u;
        goto label_2a9d44;
    }
    ctx->pc = 0x2A9D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D44u);
    ctx->pc = 0x2A9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D3Cu;
    // 0x2a9d40: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0778u, 0x2A9D3Cu, 0x2A9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D44u;
label_2a9d44:
    // 0x2a9d44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a9d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d48:
    // 0x2a9d48: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
label_2a9d4c:
    if (ctx->pc == 0x2A9D4Cu) {
        ctx->pc = 0x2A9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D48u;
        // 0x2a9d4c: 0x111203  sra         $v0, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D50u;
        goto label_2a9d50;
    }
    ctx->pc = 0x2A9D48u;
    {
        const bool branch_taken_0x2a9d48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D48u;
        // 0x2a9d4c: 0x111203  sra         $v0, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d48) {
            ctx->pc = 0x2A9D88u;
            goto label_2a9d88;
        }
    }
    ctx->pc = 0x2A9D50u;
label_2a9d50:
    // 0x2a9d50: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2a9d54:
    if (ctx->pc == 0x2A9D54u) {
        ctx->pc = 0x2A9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D50u;
        // 0x2a9d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D58u;
        goto label_2a9d58;
    }
    ctx->pc = 0x2A9D50u;
    {
        const bool branch_taken_0x2a9d50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D50u;
        // 0x2a9d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d50) {
            ctx->pc = 0x2A9D68u;
            goto label_2a9d68;
        }
    }
    ctx->pc = 0x2A9D58u;
label_2a9d58:
    // 0x2a9d58: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2a9d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d5c:
    // 0x2a9d5c: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2a9d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2a9d60:
    // 0x2a9d60: 0x2a0f809  jalr        $s5
label_2a9d64:
    if (ctx->pc == 0x2A9D64u) {
        ctx->pc = 0x2A9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D60u;
        // 0x2a9d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D68u;
        goto label_2a9d68;
    }
    ctx->pc = 0x2A9D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2A9D68u);
        ctx->pc = 0x2A9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D60u;
        // 0x2a9d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D60u, 0x2A9D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9D68u;
label_2a9d68:
    // 0x2a9d68: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2a9d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a9d6c:
    // 0x2a9d6c: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x2a9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2a9d70:
    // 0x2a9d70: 0x240600b5  addiu       $a2, $zero, 0xB5
    ctx->pc = 0x2a9d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_2a9d74:
    // 0x2a9d74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a9d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d78:
    // 0x2a9d78: 0xc0a5648  jal         func_295920
label_2a9d7c:
    if (ctx->pc == 0x2A9D7Cu) {
        ctx->pc = 0x2A9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D78u;
        // 0x2a9d7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D80u;
        goto label_2a9d80;
    }
    ctx->pc = 0x2A9D78u;
    SET_GPR_U32(ctx, 31, 0x2A9D80u);
    ctx->pc = 0x2A9D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D78u;
    // 0x2a9d7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2A9D78u, 0x2A9D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D80u;
label_2a9d80:
    // 0x2a9d80: 0x10000036  b           . + 4 + (0x36 << 2)
label_2a9d84:
    if (ctx->pc == 0x2A9D84u) {
        ctx->pc = 0x2A9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D80u;
        // 0x2a9d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D88u;
        goto label_2a9d88;
    }
    ctx->pc = 0x2A9D80u;
    {
        const bool branch_taken_0x2a9d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D80u;
        // 0x2a9d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d80) {
            ctx->pc = 0x2A9E5Cu;
            goto label_2a9e5c;
        }
    }
    ctx->pc = 0x2A9D88u;
label_2a9d88:
    // 0x2a9d88: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x2a9d88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_2a9d8c:
    // 0x2a9d8c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a9d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a9d90:
    // 0x2a9d90: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2a9d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a9d94:
    // 0x2a9d94: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2a9d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2a9d98:
    // 0x2a9d98: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2a9d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2a9d9c:
    // 0x2a9d9c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a9d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a9da0:
    // 0x2a9da0: 0x291a021  addu        $s4, $s4, $s1
    ctx->pc = 0x2a9da0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2a9da4:
    // 0x2a9da4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x2a9da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_2a9da8:
    // 0x2a9da8: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x2a9da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2a9dac:
    // 0x2a9dac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2a9dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2a9db0:
    // 0x2a9db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9db4:
    // 0x2a9db4: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2a9db4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
label_2a9db8:
    // 0x2a9db8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2a9db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2a9dbc:
    // 0x2a9dbc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a9dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a9dc0:
    // 0x2a9dc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a9dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2a9dc4:
    // 0x2a9dc4: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x2a9dc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_2a9dc8:
    // 0x2a9dc8: 0x28830021  slti        $v1, $a0, 0x21
    ctx->pc = 0x2a9dc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
label_2a9dcc:
    // 0x2a9dcc: 0x83880b  movn        $s1, $a0, $v1
    ctx->pc = 0x2a9dccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_2a9dd0:
    // 0x2a9dd0: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x2a9dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_2a9dd4:
    // 0x2a9dd4: 0x2630ff7c  addiu       $s0, $s1, -0x84
    ctx->pc = 0x2a9dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967164));
label_2a9dd8:
    // 0x2a9dd8: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2a9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2a9ddc:
    // 0x2a9ddc: 0xc049cb6  jal         func_1272D8
label_2a9de0:
    if (ctx->pc == 0x2A9DE0u) {
        ctx->pc = 0x2A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DDCu;
        // 0x2a9de0: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9DE4u;
        goto label_2a9de4;
    }
    ctx->pc = 0x2A9DDCu;
    SET_GPR_U32(ctx, 31, 0x2A9DE4u);
    ctx->pc = 0x2A9DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DDCu;
    // 0x2a9de0: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A9DDCu, 0x2A9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DE4u;
label_2a9de4:
    // 0x2a9de4: 0xc0a8d8a  jal         func_2A3628
label_2a9de8:
    if (ctx->pc == 0x2A9DE8u) {
        ctx->pc = 0x2A9DECu;
        goto label_2a9dec;
    }
    ctx->pc = 0x2A9DE4u;
    SET_GPR_U32(ctx, 31, 0x2A9DECu);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2A9DE4u, 0x2A9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DECu;
label_2a9dec:
    // 0x2a9dec: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x2a9decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2a9df0:
    // 0x2a9df0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a9df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9df4:
    // 0x2a9df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9df8:
    // 0x2a9df8: 0xc0a8d02  jal         func_2A3408
label_2a9dfc:
    if (ctx->pc == 0x2A9DFCu) {
        ctx->pc = 0x2A9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DF8u;
        // 0x2a9dfc: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9E00u;
        goto label_2a9e00;
    }
    ctx->pc = 0x2A9DF8u;
    SET_GPR_U32(ctx, 31, 0x2A9E00u);
    ctx->pc = 0x2A9DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DF8u;
    // 0x2a9dfc: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2A9DF8u, 0x2A9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E00u;
label_2a9e00:
    // 0x2a9e00: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x2a9e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2a9e04:
    // 0x2a9e04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a9e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e08:
    // 0x2a9e08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a9e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e0c:
    // 0x2a9e0c: 0x291a021  addu        $s4, $s4, $s1
    ctx->pc = 0x2a9e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2a9e10:
    // 0x2a9e10: 0xc049c48  jal         func_127120
label_2a9e14:
    if (ctx->pc == 0x2A9E14u) {
        ctx->pc = 0x2A9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E10u;
        // 0x2a9e14: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9E18u;
        goto label_2a9e18;
    }
    ctx->pc = 0x2A9E10u;
    SET_GPR_U32(ctx, 31, 0x2A9E18u);
    ctx->pc = 0x2A9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E10u;
    // 0x2a9e14: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2A9E10u, 0x2A9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E18u;
label_2a9e18:
    // 0x2a9e18: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x2a9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_2a9e1c:
    // 0x2a9e1c: 0x24071211  addiu       $a3, $zero, 0x1211
    ctx->pc = 0x2a9e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4625));
label_2a9e20:
    // 0x2a9e20: 0x738823  subu        $s1, $v1, $s3
    ctx->pc = 0x2a9e20u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2a9e24:
    // 0x2a9e24: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a9e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e28:
    // 0x2a9e28: 0x111203  sra         $v0, $s1, 8
    ctx->pc = 0x2a9e28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 8));
label_2a9e2c:
    // 0x2a9e2c: 0xa2710001  sb          $s1, 0x1($s3)
    ctx->pc = 0x2a9e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
label_2a9e30:
    // 0x2a9e30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2a9e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_2a9e34:
    // 0x2a9e34: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x2a9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2a9e38:
    // 0x2a9e38: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2a9e38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a9e3c:
    // 0x2a9e3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a9e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e40:
    // 0x2a9e40: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x2a9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_2a9e44:
    // 0x2a9e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e48:
    // 0x2a9e48: 0xae470030  sw          $a3, 0x30($s2)
    ctx->pc = 0x2a9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 7));
label_2a9e4c:
    // 0x2a9e4c: 0xc0ab99e  jal         func_2AE678
label_2a9e50:
    if (ctx->pc == 0x2A9E50u) {
        ctx->pc = 0x2A9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E4Cu;
        // 0x2a9e50: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9E54u;
        goto label_2a9e54;
    }
    ctx->pc = 0x2A9E4Cu;
    SET_GPR_U32(ctx, 31, 0x2A9E54u);
    ctx->pc = 0x2A9E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E4Cu;
    // 0x2a9e50: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE678u, 0x2A9E4Cu, 0x2A9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E54u;
label_2a9e54:
    // 0x2a9e54: 0xc0aa99e  jal         func_2AA678
label_2a9e58:
    if (ctx->pc == 0x2A9E58u) {
        ctx->pc = 0x2A9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E54u;
        // 0x2a9e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9E5Cu;
        goto label_2a9e5c;
    }
    ctx->pc = 0x2A9E54u;
    SET_GPR_U32(ctx, 31, 0x2A9E5Cu);
    ctx->pc = 0x2A9E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E54u;
    // 0x2a9e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA678u, 0x2A9E54u, 0x2A9E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E5Cu;
label_2a9e5c:
    // 0x2a9e5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a9e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a9e60:
    // 0x2a9e60: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2a9e60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a9e64:
    // 0x2a9e64: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a9e64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a9e68:
    // 0x2a9e68: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a9e68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9e6c:
    // 0x2a9e6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a9e6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9e70:
    // 0x2a9e70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a9e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9e74:
    // 0x2a9e74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a9e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9e78:
    // 0x2a9e78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a9e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9e7c:
    // 0x2a9e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9e80:
    // 0x2a9e80: 0x3e00008  jr          $ra
label_2a9e84:
    if (ctx->pc == 0x2A9E84u) {
        ctx->pc = 0x2A9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E80u;
        // 0x2a9e84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9E88u;
        goto label_fallthrough_0x2a9e80;
    }
    ctx->pc = 0x2A9E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E80u;
        // 0x2a9e84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a9e80:
    ctx->pc = 0x2A9E88u;
}
