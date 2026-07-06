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

// Function: sub_00245A50
// Address: 0x245a50 - 0x245f50
void sub_00245A50_0x245a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245A50_0x245a50");
#endif

    switch (ctx->pc) {
        case 0x245a50u: goto label_245a50;
        case 0x245a54u: goto label_245a54;
        case 0x245a58u: goto label_245a58;
        case 0x245a5cu: goto label_245a5c;
        case 0x245a60u: goto label_245a60;
        case 0x245a64u: goto label_245a64;
        case 0x245a68u: goto label_245a68;
        case 0x245a6cu: goto label_245a6c;
        case 0x245a70u: goto label_245a70;
        case 0x245a74u: goto label_245a74;
        case 0x245a78u: goto label_245a78;
        case 0x245a7cu: goto label_245a7c;
        case 0x245a80u: goto label_245a80;
        case 0x245a84u: goto label_245a84;
        case 0x245a88u: goto label_245a88;
        case 0x245a8cu: goto label_245a8c;
        case 0x245a90u: goto label_245a90;
        case 0x245a94u: goto label_245a94;
        case 0x245a98u: goto label_245a98;
        case 0x245a9cu: goto label_245a9c;
        case 0x245aa0u: goto label_245aa0;
        case 0x245aa4u: goto label_245aa4;
        case 0x245aa8u: goto label_245aa8;
        case 0x245aacu: goto label_245aac;
        case 0x245ab0u: goto label_245ab0;
        case 0x245ab4u: goto label_245ab4;
        case 0x245ab8u: goto label_245ab8;
        case 0x245abcu: goto label_245abc;
        case 0x245ac0u: goto label_245ac0;
        case 0x245ac4u: goto label_245ac4;
        case 0x245ac8u: goto label_245ac8;
        case 0x245accu: goto label_245acc;
        case 0x245ad0u: goto label_245ad0;
        case 0x245ad4u: goto label_245ad4;
        case 0x245ad8u: goto label_245ad8;
        case 0x245adcu: goto label_245adc;
        case 0x245ae0u: goto label_245ae0;
        case 0x245ae4u: goto label_245ae4;
        case 0x245ae8u: goto label_245ae8;
        case 0x245aecu: goto label_245aec;
        case 0x245af0u: goto label_245af0;
        case 0x245af4u: goto label_245af4;
        case 0x245af8u: goto label_245af8;
        case 0x245afcu: goto label_245afc;
        case 0x245b00u: goto label_245b00;
        case 0x245b04u: goto label_245b04;
        case 0x245b08u: goto label_245b08;
        case 0x245b0cu: goto label_245b0c;
        case 0x245b10u: goto label_245b10;
        case 0x245b14u: goto label_245b14;
        case 0x245b18u: goto label_245b18;
        case 0x245b1cu: goto label_245b1c;
        case 0x245b20u: goto label_245b20;
        case 0x245b24u: goto label_245b24;
        case 0x245b28u: goto label_245b28;
        case 0x245b2cu: goto label_245b2c;
        case 0x245b30u: goto label_245b30;
        case 0x245b34u: goto label_245b34;
        case 0x245b38u: goto label_245b38;
        case 0x245b3cu: goto label_245b3c;
        case 0x245b40u: goto label_245b40;
        case 0x245b44u: goto label_245b44;
        case 0x245b48u: goto label_245b48;
        case 0x245b4cu: goto label_245b4c;
        case 0x245b50u: goto label_245b50;
        case 0x245b54u: goto label_245b54;
        case 0x245b58u: goto label_245b58;
        case 0x245b5cu: goto label_245b5c;
        case 0x245b60u: goto label_245b60;
        case 0x245b64u: goto label_245b64;
        case 0x245b68u: goto label_245b68;
        case 0x245b6cu: goto label_245b6c;
        case 0x245b70u: goto label_245b70;
        case 0x245b74u: goto label_245b74;
        case 0x245b78u: goto label_245b78;
        case 0x245b7cu: goto label_245b7c;
        case 0x245b80u: goto label_245b80;
        case 0x245b84u: goto label_245b84;
        case 0x245b88u: goto label_245b88;
        case 0x245b8cu: goto label_245b8c;
        case 0x245b90u: goto label_245b90;
        case 0x245b94u: goto label_245b94;
        case 0x245b98u: goto label_245b98;
        case 0x245b9cu: goto label_245b9c;
        case 0x245ba0u: goto label_245ba0;
        case 0x245ba4u: goto label_245ba4;
        case 0x245ba8u: goto label_245ba8;
        case 0x245bacu: goto label_245bac;
        case 0x245bb0u: goto label_245bb0;
        case 0x245bb4u: goto label_245bb4;
        case 0x245bb8u: goto label_245bb8;
        case 0x245bbcu: goto label_245bbc;
        case 0x245bc0u: goto label_245bc0;
        case 0x245bc4u: goto label_245bc4;
        case 0x245bc8u: goto label_245bc8;
        case 0x245bccu: goto label_245bcc;
        case 0x245bd0u: goto label_245bd0;
        case 0x245bd4u: goto label_245bd4;
        case 0x245bd8u: goto label_245bd8;
        case 0x245bdcu: goto label_245bdc;
        case 0x245be0u: goto label_245be0;
        case 0x245be4u: goto label_245be4;
        case 0x245be8u: goto label_245be8;
        case 0x245becu: goto label_245bec;
        case 0x245bf0u: goto label_245bf0;
        case 0x245bf4u: goto label_245bf4;
        case 0x245bf8u: goto label_245bf8;
        case 0x245bfcu: goto label_245bfc;
        case 0x245c00u: goto label_245c00;
        case 0x245c04u: goto label_245c04;
        case 0x245c08u: goto label_245c08;
        case 0x245c0cu: goto label_245c0c;
        case 0x245c10u: goto label_245c10;
        case 0x245c14u: goto label_245c14;
        case 0x245c18u: goto label_245c18;
        case 0x245c1cu: goto label_245c1c;
        case 0x245c20u: goto label_245c20;
        case 0x245c24u: goto label_245c24;
        case 0x245c28u: goto label_245c28;
        case 0x245c2cu: goto label_245c2c;
        case 0x245c30u: goto label_245c30;
        case 0x245c34u: goto label_245c34;
        case 0x245c38u: goto label_245c38;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c40u: goto label_245c40;
        case 0x245c44u: goto label_245c44;
        case 0x245c48u: goto label_245c48;
        case 0x245c4cu: goto label_245c4c;
        case 0x245c50u: goto label_245c50;
        case 0x245c54u: goto label_245c54;
        case 0x245c58u: goto label_245c58;
        case 0x245c5cu: goto label_245c5c;
        case 0x245c60u: goto label_245c60;
        case 0x245c64u: goto label_245c64;
        case 0x245c68u: goto label_245c68;
        case 0x245c6cu: goto label_245c6c;
        case 0x245c70u: goto label_245c70;
        case 0x245c74u: goto label_245c74;
        case 0x245c78u: goto label_245c78;
        case 0x245c7cu: goto label_245c7c;
        case 0x245c80u: goto label_245c80;
        case 0x245c84u: goto label_245c84;
        case 0x245c88u: goto label_245c88;
        case 0x245c8cu: goto label_245c8c;
        case 0x245c90u: goto label_245c90;
        case 0x245c94u: goto label_245c94;
        case 0x245c98u: goto label_245c98;
        case 0x245c9cu: goto label_245c9c;
        case 0x245ca0u: goto label_245ca0;
        case 0x245ca4u: goto label_245ca4;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        case 0x245e98u: goto label_245e98;
        case 0x245e9cu: goto label_245e9c;
        case 0x245ea0u: goto label_245ea0;
        case 0x245ea4u: goto label_245ea4;
        case 0x245ea8u: goto label_245ea8;
        case 0x245eacu: goto label_245eac;
        case 0x245eb0u: goto label_245eb0;
        case 0x245eb4u: goto label_245eb4;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ebcu: goto label_245ebc;
        case 0x245ec0u: goto label_245ec0;
        case 0x245ec4u: goto label_245ec4;
        case 0x245ec8u: goto label_245ec8;
        case 0x245eccu: goto label_245ecc;
        case 0x245ed0u: goto label_245ed0;
        case 0x245ed4u: goto label_245ed4;
        case 0x245ed8u: goto label_245ed8;
        case 0x245edcu: goto label_245edc;
        case 0x245ee0u: goto label_245ee0;
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        case 0x245eecu: goto label_245eec;
        case 0x245ef0u: goto label_245ef0;
        case 0x245ef4u: goto label_245ef4;
        case 0x245ef8u: goto label_245ef8;
        case 0x245efcu: goto label_245efc;
        case 0x245f00u: goto label_245f00;
        case 0x245f04u: goto label_245f04;
        case 0x245f08u: goto label_245f08;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f10u: goto label_245f10;
        case 0x245f14u: goto label_245f14;
        case 0x245f18u: goto label_245f18;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f20u: goto label_245f20;
        case 0x245f24u: goto label_245f24;
        case 0x245f28u: goto label_245f28;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f30u: goto label_245f30;
        case 0x245f34u: goto label_245f34;
        case 0x245f38u: goto label_245f38;
        case 0x245f3cu: goto label_245f3c;
        case 0x245f40u: goto label_245f40;
        case 0x245f44u: goto label_245f44;
        case 0x245f48u: goto label_245f48;
        case 0x245f4cu: goto label_245f4c;
        default: break;
    }

    ctx->pc = 0x245a50u;

label_245a50:
    // 0x245a50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x245a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_245a54:
    // 0x245a54: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x245a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_245a58:
    // 0x245a58: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x245a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_245a5c:
    // 0x245a5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x245a5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245a60:
    // 0x245a60: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x245a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_245a64:
    // 0x245a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245a68:
    // 0x245a68: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x245a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_245a6c:
    // 0x245a6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x245a6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_245a70:
    // 0x245a70: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x245a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_245a74:
    // 0x245a74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245a78:
    // 0x245a78: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x245a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_245a7c:
    // 0x245a7c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x245a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_245a80:
    // 0x245a80: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x245a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_245a84:
    // 0x245a84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a88:
    // 0x245a88: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x245a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_245a8c:
    // 0x245a8c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x245a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_245a90:
    // 0x245a90: 0xc048c96  jal         func_123258
label_245a94:
    if (ctx->pc == 0x245A94u) {
        ctx->pc = 0x245A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A90u;
        // 0x245a94: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A98u;
        goto label_245a98;
    }
    ctx->pc = 0x245A90u;
    SET_GPR_U32(ctx, 31, 0x245A98u);
    ctx->pc = 0x245A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A90u;
    // 0x245a94: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x245A90u, 0x245A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A98u;
label_245a98:
    // 0x245a98: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x245a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_245a9c:
    // 0x245a9c: 0x8c52fcd0  lw          $s2, -0x330($v0)
    ctx->pc = 0x245a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
label_245aa0:
    // 0x245aa0: 0x1240007b  beqz        $s2, . + 4 + (0x7B << 2)
label_245aa4:
    if (ctx->pc == 0x245AA4u) {
        ctx->pc = 0x245AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AA0u;
        // 0x245aa4: 0x24160004  addiu       $s6, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AA8u;
        goto label_245aa8;
    }
    ctx->pc = 0x245AA0u;
    {
        const bool branch_taken_0x245aa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AA0u;
        // 0x245aa4: 0x24160004  addiu       $s6, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245aa0) {
            ctx->pc = 0x245C90u;
            goto label_245c90;
        }
    }
    ctx->pc = 0x245AA8u;
label_245aa8:
    // 0x245aa8: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x245aa8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
label_245aac:
    // 0x245aac: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x245aacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
label_245ab0:
    // 0x245ab0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x245ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_245ab4:
    // 0x245ab4: 0x0  nop
    ctx->pc = 0x245ab4u;
    // NOP
label_245ab8:
    // 0x245ab8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_245abc:
    if (ctx->pc == 0x245ABCu) {
        ctx->pc = 0x245ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AB8u;
        // 0x245abc: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AC0u;
        goto label_245ac0;
    }
    ctx->pc = 0x245AB8u;
    {
        const bool branch_taken_0x245ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ab8) {
            ctx->pc = 0x245ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245AB8u;
            // 0x245abc: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245AD0u;
            goto label_245ad0;
        }
    }
    ctx->pc = 0x245AC0u;
label_245ac0:
    // 0x245ac0: 0x9642002c  lhu         $v0, 0x2C($s2)
    ctx->pc = 0x245ac0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_245ac4:
    // 0x245ac4: 0x54620070  bnel        $v1, $v0, . + 4 + (0x70 << 2)
label_245ac8:
    if (ctx->pc == 0x245AC8u) {
        ctx->pc = 0x245AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AC4u;
        // 0x245ac8: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245ACCu;
        goto label_245acc;
    }
    ctx->pc = 0x245AC4u;
    {
        const bool branch_taken_0x245ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x245ac4) {
            ctx->pc = 0x245AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245AC4u;
            // 0x245ac8: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C88u;
            goto label_245c88;
        }
    }
    ctx->pc = 0x245ACCu;
label_245acc:
    // 0x245acc: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x245accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_245ad0:
    // 0x245ad0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x245ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_245ad4:
    // 0x245ad4: 0x16b60009  bne         $s5, $s6, . + 4 + (0x9 << 2)
label_245ad8:
    if (ctx->pc == 0x245AD8u) {
        ctx->pc = 0x245AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AD4u;
        // 0x245ad8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245ADCu;
        goto label_245adc;
    }
    ctx->pc = 0x245AD4u;
    {
        const bool branch_taken_0x245ad4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x245AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AD4u;
        // 0x245ad8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ad4) {
            ctx->pc = 0x245AFCu;
            goto label_245afc;
        }
    }
    ctx->pc = 0x245ADCu;
label_245adc:
    // 0x245adc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x245adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_245ae0:
    // 0x245ae0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x245ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245ae4:
    // 0x245ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245ae8:
    // 0x245ae8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x245ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245aec:
    // 0x245aec: 0xc09148a  jal         func_245228
label_245af0:
    if (ctx->pc == 0x245AF0u) {
        ctx->pc = 0x245AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AECu;
        // 0x245af0: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AF4u;
        goto label_245af4;
    }
    ctx->pc = 0x245AECu;
    SET_GPR_U32(ctx, 31, 0x245AF4u);
    ctx->pc = 0x245AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245AECu;
    // 0x245af0: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245228u, 0x245AECu, 0x245AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245AF4u;
label_245af4:
    // 0x245af4: 0x10000003  b           . + 4 + (0x3 << 2)
label_245af8:
    if (ctx->pc == 0x245AF8u) {
        ctx->pc = 0x245AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AF4u;
        // 0x245af8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AFCu;
        goto label_245afc;
    }
    ctx->pc = 0x245AF4u;
    {
        const bool branch_taken_0x245af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AF4u;
        // 0x245af8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245af4) {
            ctx->pc = 0x245B04u;
            goto label_245b04;
        }
    }
    ctx->pc = 0x245AFCu;
label_245afc:
    // 0x245afc: 0xc08b5e0  jal         func_22D780
label_245b00:
    if (ctx->pc == 0x245B00u) {
        ctx->pc = 0x245B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AFCu;
        // 0x245b00: 0x27c46770  addiu       $a0, $fp, 0x6770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 26480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B04u;
        goto label_245b04;
    }
    ctx->pc = 0x245AFCu;
    SET_GPR_U32(ctx, 31, 0x245B04u);
    ctx->pc = 0x245B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245AFCu;
    // 0x245b00: 0x27c46770  addiu       $a0, $fp, 0x6770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 26480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x245AFCu, 0x245B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B04u;
label_245b04:
    // 0x245b04: 0x16600063  bnez        $s3, . + 4 + (0x63 << 2)
label_245b08:
    if (ctx->pc == 0x245B08u) {
        ctx->pc = 0x245B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B04u;
        // 0x245b08: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B0Cu;
        goto label_245b0c;
    }
    ctx->pc = 0x245B04u;
    {
        const bool branch_taken_0x245b04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B04u;
        // 0x245b08: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b04) {
            ctx->pc = 0x245C94u;
            goto label_245c94;
        }
    }
    ctx->pc = 0x245B0Cu;
label_245b0c:
    // 0x245b0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x245b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_245b10:
    // 0x245b10: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_245b14:
    if (ctx->pc == 0x245B14u) {
        ctx->pc = 0x245B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B10u;
        // 0x245b14: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B18u;
        goto label_245b18;
    }
    ctx->pc = 0x245B10u;
    {
        const bool branch_taken_0x245b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B10u;
        // 0x245b14: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b10) {
            ctx->pc = 0x245C6Cu;
            goto label_245c6c;
        }
    }
    ctx->pc = 0x245B18u;
label_245b18:
    // 0x245b18: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x245b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_245b1c:
    // 0x245b1c: 0x50c00054  beql        $a2, $zero, . + 4 + (0x54 << 2)
label_245b20:
    if (ctx->pc == 0x245B20u) {
        ctx->pc = 0x245B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B1Cu;
        // 0x245b20: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B24u;
        goto label_245b24;
    }
    ctx->pc = 0x245B1Cu;
    {
        const bool branch_taken_0x245b1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b1c) {
            ctx->pc = 0x245B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245B1Cu;
            // 0x245b20: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245B24u;
label_245b24:
    // 0x245b24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x245b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_245b28:
    // 0x245b28: 0x5c400051  bgtzl       $v0, . + 4 + (0x51 << 2)
label_245b2c:
    if (ctx->pc == 0x245B2Cu) {
        ctx->pc = 0x245B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B28u;
        // 0x245b2c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B30u;
        goto label_245b30;
    }
    ctx->pc = 0x245B28u;
    {
        const bool branch_taken_0x245b28 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x245b28) {
            ctx->pc = 0x245B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245B28u;
            // 0x245b2c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245B30u;
label_245b30:
    // 0x245b30: 0x16b6001a  bne         $s5, $s6, . + 4 + (0x1A << 2)
label_245b34:
    if (ctx->pc == 0x245B34u) {
        ctx->pc = 0x245B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B30u;
        // 0x245b34: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B38u;
        goto label_245b38;
    }
    ctx->pc = 0x245B30u;
    {
        const bool branch_taken_0x245b30 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x245B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B30u;
        // 0x245b34: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b30) {
            ctx->pc = 0x245B9Cu;
            goto label_245b9c;
        }
    }
    ctx->pc = 0x245B38u;
label_245b38:
    // 0x245b38: 0x9643002c  lhu         $v1, 0x2C($s2)
    ctx->pc = 0x245b38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_245b3c:
    // 0x245b3c: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x245b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_245b40:
    // 0x245b40: 0x264700b8  addiu       $a3, $s2, 0xB8
    ctx->pc = 0x245b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
label_245b44:
    // 0x245b44: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x245b44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
label_245b48:
    // 0x245b48: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x245b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_245b4c:
    // 0x245b4c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x245b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_245b50:
    // 0x245b50: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x245b50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_245b54:
    // 0x245b54: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x245b54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_245b58:
    // 0x245b58: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x245b58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_245b5c:
    // 0x245b5c: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x245b5cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_245b60:
    // 0x245b60: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x245b60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_245b64:
    // 0x245b64: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x245b64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
label_245b68:
    // 0x245b68: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x245b68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
label_245b6c:
    // 0x245b6c: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x245b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
label_245b70:
    // 0x245b70: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_245b74:
    // 0x245b74: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x245b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_245b78:
    // 0x245b78: 0x0  nop
    ctx->pc = 0x245b78u;
    // NOP
label_245b7c:
    // 0x245b7c: 0x1487fff4  bne         $a0, $a3, . + 4 + (-0xC << 2)
label_245b80:
    if (ctx->pc == 0x245B80u) {
        ctx->pc = 0x245B84u;
        goto label_245b84;
    }
    ctx->pc = 0x245B7Cu;
    {
        const bool branch_taken_0x245b7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x245b7c) {
            ctx->pc = 0x245B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245b50;
        }
    }
    ctx->pc = 0x245B84u;
label_245b84:
    // 0x245b84: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x245b84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_245b88:
    // 0x245b88: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x245b88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_245b8c:
    // 0x245b8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x245b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_245b90:
    // 0x245b90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x245b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_245b94:
    // 0x245b94: 0x1000002e  b           . + 4 + (0x2E << 2)
label_245b98:
    if (ctx->pc == 0x245B98u) {
        ctx->pc = 0x245B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B94u;
        // 0x245b98: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B9Cu;
        goto label_245b9c;
    }
    ctx->pc = 0x245B94u;
    {
        const bool branch_taken_0x245b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B94u;
        // 0x245b98: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b94) {
            ctx->pc = 0x245C50u;
            goto label_245c50;
        }
    }
    ctx->pc = 0x245B9Cu;
label_245b9c:
    // 0x245b9c: 0xc08b5e0  jal         func_22D780
label_245ba0:
    if (ctx->pc == 0x245BA0u) {
        ctx->pc = 0x245BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B9Cu;
        // 0x245ba0: 0x26e46788  addiu       $a0, $s7, 0x6788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 26504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BA4u;
        goto label_245ba4;
    }
    ctx->pc = 0x245B9Cu;
    SET_GPR_U32(ctx, 31, 0x245BA4u);
    ctx->pc = 0x245BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B9Cu;
    // 0x245ba0: 0x26e46788  addiu       $a0, $s7, 0x6788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 26504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x245B9Cu, 0x245BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BA4u;
label_245ba4:
    // 0x245ba4: 0x10000032  b           . + 4 + (0x32 << 2)
label_245ba8:
    if (ctx->pc == 0x245BA8u) {
        ctx->pc = 0x245BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BA4u;
        // 0x245ba8: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BACu;
        goto label_245bac;
    }
    ctx->pc = 0x245BA4u;
    {
        const bool branch_taken_0x245ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BA4u;
        // 0x245ba8: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ba4) {
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245BACu;
label_245bac:
    // 0x245bac: 0x0  nop
    ctx->pc = 0x245bacu;
    // NOP
label_245bb0:
    // 0x245bb0: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_245bb4:
    if (ctx->pc == 0x245BB4u) {
        ctx->pc = 0x245BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BB0u;
        // 0x245bb4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BB8u;
        goto label_245bb8;
    }
    ctx->pc = 0x245BB0u;
    {
        const bool branch_taken_0x245bb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BB0u;
        // 0x245bb4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bb0) {
            ctx->pc = 0x245BCCu;
            goto label_245bcc;
        }
    }
    ctx->pc = 0x245BB8u;
label_245bb8:
    // 0x245bb8: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x245bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_245bbc:
    // 0x245bbc: 0x5682002c  bnel        $s4, $v0, . + 4 + (0x2C << 2)
label_245bc0:
    if (ctx->pc == 0x245BC0u) {
        ctx->pc = 0x245BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BBCu;
        // 0x245bc0: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BC4u;
        goto label_245bc4;
    }
    ctx->pc = 0x245BBCu;
    {
        const bool branch_taken_0x245bbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x245bbc) {
            ctx->pc = 0x245BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245BBCu;
            // 0x245bc0: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245BC4u;
label_245bc4:
    // 0x245bc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_245bc8:
    if (ctx->pc == 0x245BC8u) {
        ctx->pc = 0x245BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BC4u;
        // 0x245bc8: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BCCu;
        goto label_245bcc;
    }
    ctx->pc = 0x245BC4u;
    {
        const bool branch_taken_0x245bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BC4u;
        // 0x245bc8: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bc4) {
            ctx->pc = 0x245BD0u;
            goto label_245bd0;
        }
    }
    ctx->pc = 0x245BCCu;
label_245bcc:
    // 0x245bcc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x245bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_245bd0:
    // 0x245bd0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x245bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_245bd4:
    // 0x245bd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x245bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245bd8:
    // 0x245bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245bdc:
    // 0x245bdc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x245bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_245be0:
    // 0x245be0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x245be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245be4:
    // 0x245be4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x245be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_245be8:
    // 0x245be8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x245be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_245bec:
    // 0x245bec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x245becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_245bf0:
    // 0x245bf0: 0xc09148a  jal         func_245228
label_245bf4:
    if (ctx->pc == 0x245BF4u) {
        ctx->pc = 0x245BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BF0u;
        // 0x245bf4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BF8u;
        goto label_245bf8;
    }
    ctx->pc = 0x245BF0u;
    SET_GPR_U32(ctx, 31, 0x245BF8u);
    ctx->pc = 0x245BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BF0u;
    // 0x245bf4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245228u, 0x245BF0u, 0x245BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BF8u;
label_245bf8:
    // 0x245bf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x245bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245bfc:
    // 0x245bfc: 0x16600026  bnez        $s3, . + 4 + (0x26 << 2)
label_245c00:
    if (ctx->pc == 0x245C00u) {
        ctx->pc = 0x245C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BFCu;
        // 0x245c00: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C04u;
        goto label_245c04;
    }
    ctx->pc = 0x245BFCu;
    {
        const bool branch_taken_0x245bfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x245C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BFCu;
        // 0x245c00: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bfc) {
            ctx->pc = 0x245C98u;
            goto label_245c98;
        }
    }
    ctx->pc = 0x245C04u;
label_245c04:
    // 0x245c04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x245c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_245c08:
    // 0x245c08: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_245c0c:
    if (ctx->pc == 0x245C0Cu) {
        ctx->pc = 0x245C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C08u;
        // 0x245c0c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C10u;
        goto label_245c10;
    }
    ctx->pc = 0x245C08u;
    {
        const bool branch_taken_0x245c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c08) {
            ctx->pc = 0x245C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245C08u;
            // 0x245c0c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245C10u;
label_245c10:
    // 0x245c10: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x245c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_245c14:
    // 0x245c14: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
label_245c18:
    if (ctx->pc == 0x245C18u) {
        ctx->pc = 0x245C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C14u;
        // 0x245c18: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C1Cu;
        goto label_245c1c;
    }
    ctx->pc = 0x245C14u;
    {
        const bool branch_taken_0x245c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c14) {
            ctx->pc = 0x245C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245C14u;
            // 0x245c18: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245C1Cu;
label_245c1c:
    // 0x245c1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x245c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_245c20:
    // 0x245c20: 0x5c400013  bgtzl       $v0, . + 4 + (0x13 << 2)
label_245c24:
    if (ctx->pc == 0x245C24u) {
        ctx->pc = 0x245C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C20u;
        // 0x245c24: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C28u;
        goto label_245c28;
    }
    ctx->pc = 0x245C20u;
    {
        const bool branch_taken_0x245c20 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x245c20) {
            ctx->pc = 0x245C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245C20u;
            // 0x245c24: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C70u;
            goto label_245c70;
        }
    }
    ctx->pc = 0x245C28u;
label_245c28:
    // 0x245c28: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_245c2c:
    // 0x245c2c: 0x9443002c  lhu         $v1, 0x2C($v0)
    ctx->pc = 0x245c2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_245c30:
    // 0x245c30: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x245c30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
label_245c34:
    // 0x245c34: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x245c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_245c38:
    // 0x245c38: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x245c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_245c3c:
    // 0x245c3c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x245c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_245c40:
    // 0x245c40: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x245c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_245c44:
    // 0x245c44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x245c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_245c48:
    // 0x245c48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x245c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_245c4c:
    // 0x245c4c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x245c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_245c50:
    // 0x245c50: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x245c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_245c54:
    // 0x245c54: 0xc08b4f8  jal         func_22D3E0
label_245c58:
    if (ctx->pc == 0x245C58u) {
        ctx->pc = 0x245C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C54u;
        // 0x245c58: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C5Cu;
        goto label_245c5c;
    }
    ctx->pc = 0x245C54u;
    SET_GPR_U32(ctx, 31, 0x245C5Cu);
    ctx->pc = 0x245C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C54u;
    // 0x245c58: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x245C54u, 0x245C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C5Cu;
label_245c5c:
    // 0x245c5c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x245c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_245c60:
    // 0x245c60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x245c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_245c64:
    // 0x245c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245c68:
    // 0x245c68: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x245c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_245c6c:
    // 0x245c6c: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x245c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_245c70:
    // 0x245c70: 0x1600ffcf  bnez        $s0, . + 4 + (-0x31 << 2)
label_245c74:
    if (ctx->pc == 0x245C74u) {
        ctx->pc = 0x245C78u;
        goto label_245c78;
    }
    ctx->pc = 0x245C70u;
    {
        const bool branch_taken_0x245c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x245c70) {
            ctx->pc = 0x245BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245bb0;
        }
    }
    ctx->pc = 0x245C78u;
label_245c78:
    // 0x245c78: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x245c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_245c7c:
    // 0x245c7c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x245c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_245c80:
    // 0x245c80: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x245c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_245c84:
    // 0x245c84: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x245c84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_245c88:
    // 0x245c88: 0x5640ff8b  bnel        $s2, $zero, . + 4 + (-0x75 << 2)
label_245c8c:
    if (ctx->pc == 0x245C8Cu) {
        ctx->pc = 0x245C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C88u;
        // 0x245c8c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C90u;
        goto label_245c90;
    }
    ctx->pc = 0x245C88u;
    {
        const bool branch_taken_0x245c88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x245c88) {
            ctx->pc = 0x245C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245C88u;
            // 0x245c8c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245ab8;
        }
    }
    ctx->pc = 0x245C90u;
label_245c90:
    // 0x245c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245c94:
    // 0x245c94: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x245c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_245c98:
    // 0x245c98: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x245c98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_245c9c:
    // 0x245c9c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x245c9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_245ca0:
    // 0x245ca0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x245ca0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_245ca4:
    // 0x245ca4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x245ca4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_245ca8:
    // 0x245ca8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x245ca8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_245cac:
    // 0x245cac: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x245cacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_245cb0:
    // 0x245cb0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x245cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_245cb4:
    // 0x245cb4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x245cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_245cb8:
    // 0x245cb8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x245cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_245cbc:
    // 0x245cbc: 0x3e00008  jr          $ra
label_245cc0:
    if (ctx->pc == 0x245CC0u) {
        ctx->pc = 0x245CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CBCu;
        // 0x245cc0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CC4u;
        goto label_245cc4;
    }
    ctx->pc = 0x245CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CBCu;
        // 0x245cc0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245CC4u;
label_245cc4:
    // 0x245cc4: 0x0  nop
    ctx->pc = 0x245cc4u;
    // NOP
label_245cc8:
    // 0x245cc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x245cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_245ccc:
    // 0x245ccc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x245cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_245cd0:
    // 0x245cd0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x245cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_245cd4:
    // 0x245cd4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x245cd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245cd8:
    // 0x245cd8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x245cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_245cdc:
    // 0x245cdc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x245cdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_245ce0:
    // 0x245ce0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x245ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_245ce4:
    // 0x245ce4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x245ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245ce8:
    // 0x245ce8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x245ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_245cec:
    // 0x245cec: 0x24130016  addiu       $s3, $zero, 0x16
    ctx->pc = 0x245cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_245cf0:
    // 0x245cf0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x245cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_245cf4:
    // 0x245cf4: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x245cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_245cf8:
    // 0x245cf8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x245cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_245cfc:
    // 0x245cfc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x245cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_245d00:
    // 0x245d00: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x245d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_245d04:
    // 0x245d04: 0x15000066  bnez        $t0, . + 4 + (0x66 << 2)
label_245d08:
    if (ctx->pc == 0x245D08u) {
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D0Cu;
        goto label_245d0c;
    }
    ctx->pc = 0x245D04u;
    {
        const bool branch_taken_0x245d04 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d04) {
            ctx->pc = 0x245EA0u;
            goto label_245ea0;
        }
    }
    ctx->pc = 0x245D0Cu;
label_245d0c:
    // 0x245d0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x245d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_245d10:
    // 0x245d10: 0x14a20063  bne         $a1, $v0, . + 4 + (0x63 << 2)
label_245d14:
    if (ctx->pc == 0x245D14u) {
        ctx->pc = 0x245D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D10u;
        // 0x245d14: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D18u;
        goto label_245d18;
    }
    ctx->pc = 0x245D10u;
    {
        const bool branch_taken_0x245d10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x245D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D10u;
        // 0x245d14: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d10) {
            ctx->pc = 0x245EA0u;
            goto label_245ea0;
        }
    }
    ctx->pc = 0x245D18u;
label_245d18:
    // 0x245d18: 0x92920000  lbu         $s2, 0x0($s4)
    ctx->pc = 0x245d18u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_245d1c:
    // 0x245d1c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x245d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_245d20:
    // 0x245d20: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x245d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_245d24:
    // 0x245d24: 0x1000000a  b           . + 4 + (0xA << 2)
label_245d28:
    if (ctx->pc == 0x245D28u) {
        ctx->pc = 0x245D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D24u;
        // 0x245d28: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D2Cu;
        goto label_245d2c;
    }
    ctx->pc = 0x245D24u;
    {
        const bool branch_taken_0x245d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D24u;
        // 0x245d28: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d24) {
            ctx->pc = 0x245D50u;
            goto label_245d50;
        }
    }
    ctx->pc = 0x245D2Cu;
label_245d2c:
    // 0x245d2c: 0xc098552  jal         func_261548
label_245d30:
    if (ctx->pc == 0x245D30u) {
        ctx->pc = 0x245D34u;
        goto label_245d34;
    }
    ctx->pc = 0x245D2Cu;
    SET_GPR_U32(ctx, 31, 0x245D34u);
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x245D2Cu, 0x245D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D34u;
label_245d34:
    // 0x245d34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_245d38:
    if (ctx->pc == 0x245D38u) {
        ctx->pc = 0x245D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D34u;
        // 0x245d38: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D3Cu;
        goto label_245d3c;
    }
    ctx->pc = 0x245D34u;
    {
        const bool branch_taken_0x245d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D34u;
        // 0x245d38: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d34) {
            ctx->pc = 0x245D44u;
            goto label_245d44;
        }
    }
    ctx->pc = 0x245D3Cu;
label_245d3c:
    // 0x245d3c: 0x10000058  b           . + 4 + (0x58 << 2)
label_245d40:
    if (ctx->pc == 0x245D40u) {
        ctx->pc = 0x245D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D3Cu;
        // 0x245d40: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D44u;
        goto label_245d44;
    }
    ctx->pc = 0x245D3Cu;
    {
        const bool branch_taken_0x245d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D3Cu;
        // 0x245d40: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d3c) {
            ctx->pc = 0x245EA0u;
            goto label_245ea0;
        }
    }
    ctx->pc = 0x245D44u;
label_245d44:
    // 0x245d44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_245d48:
    // 0x245d48: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x245d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_245d4c:
    // 0x245d4c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x245d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_245d50:
    // 0x245d50: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x245d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_245d54:
    // 0x245d54: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x245d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_245d58:
    // 0x245d58: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x245d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_245d5c:
    // 0x245d5c: 0x52023  negu        $a0, $a1
    ctx->pc = 0x245d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_245d60:
    // 0x245d60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x245d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_245d64:
    // 0x245d64: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x245d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_245d68:
    // 0x245d68: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x245d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_245d6c:
    // 0x245d6c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x245d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_245d70:
    // 0x245d70: 0xc08c682  jal         func_231A08
label_245d74:
    if (ctx->pc == 0x245D74u) {
        ctx->pc = 0x245D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D70u;
        // 0x245d74: 0xafb50010  sw          $s5, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D78u;
        goto label_245d78;
    }
    ctx->pc = 0x245D70u;
    SET_GPR_U32(ctx, 31, 0x245D78u);
    ctx->pc = 0x245D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D70u;
    // 0x245d74: 0xafb50010  sw          $s5, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x245D70u, 0x245D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D78u;
label_245d78:
    // 0x245d78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x245d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_245d7c:
    // 0x245d7c: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_245d80:
    if (ctx->pc == 0x245D80u) {
        ctx->pc = 0x245D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D7Cu;
        // 0x245d80: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D84u;
        goto label_245d84;
    }
    ctx->pc = 0x245D7Cu;
    {
        const bool branch_taken_0x245d7c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x245D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D7Cu;
        // 0x245d80: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d7c) {
            ctx->pc = 0x245E18u;
            goto label_245e18;
        }
    }
    ctx->pc = 0x245D84u;
label_245d84:
    // 0x245d84: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x245d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_245d88:
    // 0x245d88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_245d8c:
    if (ctx->pc == 0x245D8Cu) {
        ctx->pc = 0x245D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D88u;
        // 0x245d8c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D90u;
        goto label_245d90;
    }
    ctx->pc = 0x245D88u;
    {
        const bool branch_taken_0x245d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D88u;
        // 0x245d8c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d88) {
            ctx->pc = 0x245DA4u;
            goto label_245da4;
        }
    }
    ctx->pc = 0x245D90u;
label_245d90:
    // 0x245d90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x245d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_245d94:
    // 0x245d94: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_245d98:
    if (ctx->pc == 0x245D98u) {
        ctx->pc = 0x245D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D94u;
        // 0x245d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D9Cu;
        goto label_245d9c;
    }
    ctx->pc = 0x245D94u;
    {
        const bool branch_taken_0x245d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x245D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D94u;
        // 0x245d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d94) {
            ctx->pc = 0x245E08u;
            goto label_245e08;
        }
    }
    ctx->pc = 0x245D9Cu;
label_245d9c:
    // 0x245d9c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_245da0:
    if (ctx->pc == 0x245DA0u) {
        ctx->pc = 0x245DA4u;
        goto label_245da4;
    }
    ctx->pc = 0x245D9Cu;
    {
        const bool branch_taken_0x245d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d9c) {
            ctx->pc = 0x245E18u;
            goto label_245e18;
        }
    }
    ctx->pc = 0x245DA4u;
label_245da4:
    // 0x245da4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x245da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245da8:
    // 0x245da8: 0x2442ff10  addiu       $v0, $v0, -0xF0
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
label_245dac:
    // 0x245dac: 0x3c170024  lui         $s7, 0x24
    ctx->pc = 0x245dacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)36 << 16));
label_245db0:
    // 0x245db0: 0x10000002  b           . + 4 + (0x2 << 2)
label_245db4:
    if (ctx->pc == 0x245DB4u) {
        ctx->pc = 0x245DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB0u;
        // 0x245db4: 0x24510004  addiu       $s1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DB8u;
        goto label_245db8;
    }
    ctx->pc = 0x245DB0u;
    {
        const bool branch_taken_0x245db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB0u;
        // 0x245db4: 0x24510004  addiu       $s1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245db0) {
            ctx->pc = 0x245DBCu;
            goto label_245dbc;
        }
    }
    ctx->pc = 0x245DB8u;
label_245db8:
    // 0x245db8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_245dbc:
    // 0x245dbc: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x245dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_245dc0:
    // 0x245dc0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_245dc4:
    if (ctx->pc == 0x245DC4u) {
        ctx->pc = 0x245DC8u;
        goto label_245dc8;
    }
    ctx->pc = 0x245DC0u;
    {
        const bool branch_taken_0x245dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245dc0) {
            ctx->pc = 0x245E18u;
            goto label_245e18;
        }
    }
    ctx->pc = 0x245DC8u;
label_245dc8:
    // 0x245dc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x245dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_245dcc:
    // 0x245dcc: 0x5080fffa  beql        $a0, $zero, . + 4 + (-0x6 << 2)
label_245dd0:
    if (ctx->pc == 0x245DD0u) {
        ctx->pc = 0x245DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DCCu;
        // 0x245dd0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DD4u;
        goto label_245dd4;
    }
    ctx->pc = 0x245DCCu;
    {
        const bool branch_taken_0x245dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245dcc) {
            ctx->pc = 0x245DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245DCCu;
            // 0x245dd0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245db8;
        }
    }
    ctx->pc = 0x245DD4u;
label_245dd4:
    // 0x245dd4: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
label_245dd8:
    if (ctx->pc == 0x245DD8u) {
        ctx->pc = 0x245DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DD4u;
        // 0x245dd8: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DDCu;
        goto label_245ddc;
    }
    ctx->pc = 0x245DD4u;
    {
        const bool branch_taken_0x245dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x245dd4) {
            ctx->pc = 0x245DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245DD4u;
            // 0x245dd8: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245DE8u;
            goto label_245de8;
        }
    }
    ctx->pc = 0x245DDCu;
label_245ddc:
    // 0x245ddc: 0x5650fff6  bnel        $s2, $s0, . + 4 + (-0xA << 2)
label_245de0:
    if (ctx->pc == 0x245DE0u) {
        ctx->pc = 0x245DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DDCu;
        // 0x245de0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DE4u;
        goto label_245de4;
    }
    ctx->pc = 0x245DDCu;
    {
        const bool branch_taken_0x245ddc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x245ddc) {
            ctx->pc = 0x245DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245DDCu;
            // 0x245de0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245db8;
        }
    }
    ctx->pc = 0x245DE4u;
label_245de4:
    // 0x245de4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x245de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_245de8:
    // 0x245de8: 0x26e558a0  addiu       $a1, $s7, 0x58A0
    ctx->pc = 0x245de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 22688));
label_245dec:
    // 0x245dec: 0x40f809  jalr        $v0
label_245df0:
    if (ctx->pc == 0x245DF0u) {
        ctx->pc = 0x245DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DECu;
        // 0x245df0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DF4u;
        goto label_245df4;
    }
    ctx->pc = 0x245DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245DF4u);
        ctx->pc = 0x245DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DECu;
        // 0x245df0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245DECu, 0x245DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245DF4u;
label_245df4:
    // 0x245df4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x245df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245df8:
    // 0x245df8: 0x1260ffef  beqz        $s3, . + 4 + (-0x11 << 2)
label_245dfc:
    if (ctx->pc == 0x245DFCu) {
        ctx->pc = 0x245DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DF8u;
        // 0x245dfc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E00u;
        goto label_245e00;
    }
    ctx->pc = 0x245DF8u;
    {
        const bool branch_taken_0x245df8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DF8u;
        // 0x245dfc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245df8) {
            ctx->pc = 0x245DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245db8;
        }
    }
    ctx->pc = 0x245E00u;
label_245e00:
    // 0x245e00: 0x10000005  b           . + 4 + (0x5 << 2)
label_245e04:
    if (ctx->pc == 0x245E04u) {
        ctx->pc = 0x245E08u;
        goto label_245e08;
    }
    ctx->pc = 0x245E00u;
    {
        const bool branch_taken_0x245e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e00) {
            ctx->pc = 0x245E18u;
            goto label_245e18;
        }
    }
    ctx->pc = 0x245E08u;
label_245e08:
    // 0x245e08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x245e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245e0c:
    // 0x245e0c: 0xc091694  jal         func_245A50
label_245e10:
    if (ctx->pc == 0x245E10u) {
        ctx->pc = 0x245E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E0Cu;
        // 0x245e10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E14u;
        goto label_245e14;
    }
    ctx->pc = 0x245E0Cu;
    SET_GPR_U32(ctx, 31, 0x245E14u);
    ctx->pc = 0x245E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E0Cu;
    // 0x245e10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245A50u;
    goto label_245a50;
    ctx->pc = 0x245E14u;
label_245e14:
    // 0x245e14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x245e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245e18:
    // 0x245e18: 0xc08c698  jal         func_231A60
label_245e1c:
    if (ctx->pc == 0x245E1Cu) {
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E20u;
        goto label_245e20;
    }
    ctx->pc = 0x245E18u;
    SET_GPR_U32(ctx, 31, 0x245E20u);
    ctx->pc = 0x245E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E18u;
    // 0x245e1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x245E18u, 0x245E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E20u;
label_245e20:
    // 0x245e20: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x245e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_245e24:
    // 0x245e24: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_245e28:
    if (ctx->pc == 0x245E28u) {
        ctx->pc = 0x245E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E24u;
        // 0x245e28: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E2Cu;
        goto label_245e2c;
    }
    ctx->pc = 0x245E24u;
    {
        const bool branch_taken_0x245e24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x245E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E24u;
        // 0x245e28: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e24) {
            ctx->pc = 0x245E3Cu;
            goto label_245e3c;
        }
    }
    ctx->pc = 0x245E2Cu;
label_245e2c:
    // 0x245e2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_245e30:
    if (ctx->pc == 0x245E30u) {
        ctx->pc = 0x245E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E2Cu;
        // 0x245e30: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E34u;
        goto label_245e34;
    }
    ctx->pc = 0x245E2Cu;
    {
        const bool branch_taken_0x245e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E2Cu;
        // 0x245e30: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e2c) {
            ctx->pc = 0x245E44u;
            goto label_245e44;
        }
    }
    ctx->pc = 0x245E34u;
label_245e34:
    // 0x245e34: 0x1480ffbd  bnez        $a0, . + 4 + (-0x43 << 2)
label_245e38:
    if (ctx->pc == 0x245E38u) {
        ctx->pc = 0x245E3Cu;
        goto label_245e3c;
    }
    ctx->pc = 0x245E34u;
    {
        const bool branch_taken_0x245e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e34) {
            ctx->pc = 0x245D2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245d2c;
        }
    }
    ctx->pc = 0x245E3Cu;
label_245e3c:
    // 0x245e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_245e40:
    if (ctx->pc == 0x245E40u) {
        ctx->pc = 0x245E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E3Cu;
        // 0x245e40: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E44u;
        goto label_245e44;
    }
    ctx->pc = 0x245E3Cu;
    {
        const bool branch_taken_0x245e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E3Cu;
        // 0x245e40: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e3c) {
            ctx->pc = 0x245E50u;
            goto label_245e50;
        }
    }
    ctx->pc = 0x245E44u;
label_245e44:
    // 0x245e44: 0xc098560  jal         func_261580
label_245e48:
    if (ctx->pc == 0x245E48u) {
        ctx->pc = 0x245E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E44u;
        // 0x245e48: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E4Cu;
        goto label_245e4c;
    }
    ctx->pc = 0x245E44u;
    SET_GPR_U32(ctx, 31, 0x245E4Cu);
    ctx->pc = 0x245E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E44u;
    // 0x245e48: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x245E44u, 0x245E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E4Cu;
label_245e4c:
    // 0x245e4c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x245e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_245e50:
    // 0x245e50: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x245e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_245e54:
    // 0x245e54: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x245e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_245e58:
    // 0x245e58: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_245e5c:
    if (ctx->pc == 0x245E5Cu) {
        ctx->pc = 0x245E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E58u;
        // 0x245e5c: 0xafa4000c  sw          $a0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E60u;
        goto label_245e60;
    }
    ctx->pc = 0x245E58u;
    {
        const bool branch_taken_0x245e58 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E58u;
        // 0x245e5c: 0xafa4000c  sw          $a0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e58) {
            ctx->pc = 0x245E7Cu;
            goto label_245e7c;
        }
    }
    ctx->pc = 0x245E60u;
label_245e60:
    // 0x245e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_245e64:
    // 0x245e64: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x245e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_245e68:
    // 0x245e68: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x245e68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_245e6c:
    // 0x245e6c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_245e70:
    if (ctx->pc == 0x245E70u) {
        ctx->pc = 0x245E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E6Cu;
        // 0x245e70: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E74u;
        goto label_245e74;
    }
    ctx->pc = 0x245E6Cu;
    {
        const bool branch_taken_0x245e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E6Cu;
        // 0x245e70: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e6c) {
            ctx->pc = 0x245E9Cu;
            goto label_245e9c;
        }
    }
    ctx->pc = 0x245E74u;
label_245e74:
    // 0x245e74: 0x1000000a  b           . + 4 + (0xA << 2)
label_245e78:
    if (ctx->pc == 0x245E78u) {
        ctx->pc = 0x245E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E74u;
        // 0x245e78: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E7Cu;
        goto label_245e7c;
    }
    ctx->pc = 0x245E74u;
    {
        const bool branch_taken_0x245e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E74u;
        // 0x245e78: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e74) {
            ctx->pc = 0x245EA0u;
            goto label_245ea0;
        }
    }
    ctx->pc = 0x245E7Cu;
label_245e7c:
    // 0x245e7c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x245e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_245e80:
    // 0x245e80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x245e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_245e84:
    // 0x245e84: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x245e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_245e88:
    // 0x245e88: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_245e8c:
    if (ctx->pc == 0x245E8Cu) {
        ctx->pc = 0x245E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E88u;
        // 0x245e8c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E90u;
        goto label_245e90;
    }
    ctx->pc = 0x245E88u;
    {
        const bool branch_taken_0x245e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e88) {
            ctx->pc = 0x245E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245E88u;
            // 0x245e8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x245E90u;
            goto label_245e90;
        }
    }
    ctx->pc = 0x245E90u;
label_245e90:
    // 0x245e90: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x245e90u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_245e94:
    // 0x245e94: 0x1012  mflo        $v0
    ctx->pc = 0x245e94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_245e98:
    // 0x245e98: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x245e98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_245e9c:
    // 0x245e9c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x245e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245ea0:
    // 0x245ea0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x245ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_245ea4:
    // 0x245ea4: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x245ea4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_245ea8:
    // 0x245ea8: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x245ea8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_245eac:
    // 0x245eac: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x245eacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_245eb0:
    // 0x245eb0: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x245eb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_245eb4:
    // 0x245eb4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x245eb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_245eb8:
    // 0x245eb8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x245eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_245ebc:
    // 0x245ebc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x245ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_245ec0:
    // 0x245ec0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x245ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_245ec4:
    // 0x245ec4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x245ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_245ec8:
    // 0x245ec8: 0x3e00008  jr          $ra
label_245ecc:
    if (ctx->pc == 0x245ECCu) {
        ctx->pc = 0x245ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EC8u;
        // 0x245ecc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245ED0u;
        goto label_245ed0;
    }
    ctx->pc = 0x245EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EC8u;
        // 0x245ecc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245ED0u;
label_245ed0:
    // 0x245ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_245ed4:
    // 0x245ed4: 0x24051e88  addiu       $a1, $zero, 0x1E88
    ctx->pc = 0x245ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7816));
label_245ed8:
    // 0x245ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_245edc:
    // 0x245edc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x245edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_245ee0:
    // 0x245ee0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x245ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_245ee4:
    // 0x245ee4: 0xc048c96  jal         func_123258
label_245ee8:
    if (ctx->pc == 0x245EE8u) {
        ctx->pc = 0x245EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EE4u;
        // 0x245ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EECu;
        goto label_245eec;
    }
    ctx->pc = 0x245EE4u;
    SET_GPR_U32(ctx, 31, 0x245EECu);
    ctx->pc = 0x245EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EE4u;
    // 0x245ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x245EE4u, 0x245EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EECu;
label_245eec:
    // 0x245eec: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x245eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_245ef0:
    // 0x245ef0: 0x26050e54  addiu       $a1, $s0, 0xE54
    ctx->pc = 0x245ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3668));
label_245ef4:
    // 0x245ef4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x245ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_245ef8:
    // 0x245ef8: 0x26030d60  addiu       $v1, $s0, 0xD60
    ctx->pc = 0x245ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3424));
label_245efc:
    // 0x245efc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x245efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245f00:
    // 0x245f00: 0xa0440006  sb          $a0, 0x6($v0)
    ctx->pc = 0x245f00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 4));
label_245f04:
    // 0x245f04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x245f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_245f08:
    // 0x245f08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x245f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_245f0c:
    // 0x245f0c: 0x2463ff0c  addiu       $v1, $v1, -0xF4
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967052));
label_245f10:
    // 0x245f10: 0x2442ff0c  addiu       $v0, $v0, -0xF4
    ctx->pc = 0x245f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967052));
label_245f14:
    // 0x245f14: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_245f18:
    if (ctx->pc == 0x245F18u) {
        ctx->pc = 0x245F1Cu;
        goto label_245f1c;
    }
    ctx->pc = 0x245F14u;
    {
        const bool branch_taken_0x245f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x245f14) {
            ctx->pc = 0x245F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245f00;
        }
    }
    ctx->pc = 0x245F1Cu;
label_245f1c:
    // 0x245f1c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x245f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_245f20:
    // 0x245f20: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x245f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_245f24:
    // 0x245f24: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x245f24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
label_245f28:
    // 0x245f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245f2c:
    // 0x245f2c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x245f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_245f30:
    // 0x245f30: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x245f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_245f34:
    // 0x245f34: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x245f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
label_245f38:
    // 0x245f38: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x245f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_245f3c:
    // 0x245f3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x245f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_245f40:
    // 0x245f40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x245f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_245f44:
    // 0x245f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245f48:
    // 0x245f48: 0x3e00008  jr          $ra
label_245f4c:
    if (ctx->pc == 0x245F4Cu) {
        ctx->pc = 0x245F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F48u;
        // 0x245f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F50u;
        goto label_fallthrough_0x245f48;
    }
    ctx->pc = 0x245F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F48u;
        // 0x245f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245f48:
    ctx->pc = 0x245F50u;
}
