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

// Function: sub_002B3CB0
// Address: 0x2b3cb0 - 0x2b3fa0
void sub_002B3CB0_0x2b3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3CB0_0x2b3cb0");
#endif

    switch (ctx->pc) {
        case 0x2b3cb0u: goto label_2b3cb0;
        case 0x2b3cb4u: goto label_2b3cb4;
        case 0x2b3cb8u: goto label_2b3cb8;
        case 0x2b3cbcu: goto label_2b3cbc;
        case 0x2b3cc0u: goto label_2b3cc0;
        case 0x2b3cc4u: goto label_2b3cc4;
        case 0x2b3cc8u: goto label_2b3cc8;
        case 0x2b3cccu: goto label_2b3ccc;
        case 0x2b3cd0u: goto label_2b3cd0;
        case 0x2b3cd4u: goto label_2b3cd4;
        case 0x2b3cd8u: goto label_2b3cd8;
        case 0x2b3cdcu: goto label_2b3cdc;
        case 0x2b3ce0u: goto label_2b3ce0;
        case 0x2b3ce4u: goto label_2b3ce4;
        case 0x2b3ce8u: goto label_2b3ce8;
        case 0x2b3cecu: goto label_2b3cec;
        case 0x2b3cf0u: goto label_2b3cf0;
        case 0x2b3cf4u: goto label_2b3cf4;
        case 0x2b3cf8u: goto label_2b3cf8;
        case 0x2b3cfcu: goto label_2b3cfc;
        case 0x2b3d00u: goto label_2b3d00;
        case 0x2b3d04u: goto label_2b3d04;
        case 0x2b3d08u: goto label_2b3d08;
        case 0x2b3d0cu: goto label_2b3d0c;
        case 0x2b3d10u: goto label_2b3d10;
        case 0x2b3d14u: goto label_2b3d14;
        case 0x2b3d18u: goto label_2b3d18;
        case 0x2b3d1cu: goto label_2b3d1c;
        case 0x2b3d20u: goto label_2b3d20;
        case 0x2b3d24u: goto label_2b3d24;
        case 0x2b3d28u: goto label_2b3d28;
        case 0x2b3d2cu: goto label_2b3d2c;
        case 0x2b3d30u: goto label_2b3d30;
        case 0x2b3d34u: goto label_2b3d34;
        case 0x2b3d38u: goto label_2b3d38;
        case 0x2b3d3cu: goto label_2b3d3c;
        case 0x2b3d40u: goto label_2b3d40;
        case 0x2b3d44u: goto label_2b3d44;
        case 0x2b3d48u: goto label_2b3d48;
        case 0x2b3d4cu: goto label_2b3d4c;
        case 0x2b3d50u: goto label_2b3d50;
        case 0x2b3d54u: goto label_2b3d54;
        case 0x2b3d58u: goto label_2b3d58;
        case 0x2b3d5cu: goto label_2b3d5c;
        case 0x2b3d60u: goto label_2b3d60;
        case 0x2b3d64u: goto label_2b3d64;
        case 0x2b3d68u: goto label_2b3d68;
        case 0x2b3d6cu: goto label_2b3d6c;
        case 0x2b3d70u: goto label_2b3d70;
        case 0x2b3d74u: goto label_2b3d74;
        case 0x2b3d78u: goto label_2b3d78;
        case 0x2b3d7cu: goto label_2b3d7c;
        case 0x2b3d80u: goto label_2b3d80;
        case 0x2b3d84u: goto label_2b3d84;
        case 0x2b3d88u: goto label_2b3d88;
        case 0x2b3d8cu: goto label_2b3d8c;
        case 0x2b3d90u: goto label_2b3d90;
        case 0x2b3d94u: goto label_2b3d94;
        case 0x2b3d98u: goto label_2b3d98;
        case 0x2b3d9cu: goto label_2b3d9c;
        case 0x2b3da0u: goto label_2b3da0;
        case 0x2b3da4u: goto label_2b3da4;
        case 0x2b3da8u: goto label_2b3da8;
        case 0x2b3dacu: goto label_2b3dac;
        case 0x2b3db0u: goto label_2b3db0;
        case 0x2b3db4u: goto label_2b3db4;
        case 0x2b3db8u: goto label_2b3db8;
        case 0x2b3dbcu: goto label_2b3dbc;
        case 0x2b3dc0u: goto label_2b3dc0;
        case 0x2b3dc4u: goto label_2b3dc4;
        case 0x2b3dc8u: goto label_2b3dc8;
        case 0x2b3dccu: goto label_2b3dcc;
        case 0x2b3dd0u: goto label_2b3dd0;
        case 0x2b3dd4u: goto label_2b3dd4;
        case 0x2b3dd8u: goto label_2b3dd8;
        case 0x2b3ddcu: goto label_2b3ddc;
        case 0x2b3de0u: goto label_2b3de0;
        case 0x2b3de4u: goto label_2b3de4;
        case 0x2b3de8u: goto label_2b3de8;
        case 0x2b3decu: goto label_2b3dec;
        case 0x2b3df0u: goto label_2b3df0;
        case 0x2b3df4u: goto label_2b3df4;
        case 0x2b3df8u: goto label_2b3df8;
        case 0x2b3dfcu: goto label_2b3dfc;
        case 0x2b3e00u: goto label_2b3e00;
        case 0x2b3e04u: goto label_2b3e04;
        case 0x2b3e08u: goto label_2b3e08;
        case 0x2b3e0cu: goto label_2b3e0c;
        case 0x2b3e10u: goto label_2b3e10;
        case 0x2b3e14u: goto label_2b3e14;
        case 0x2b3e18u: goto label_2b3e18;
        case 0x2b3e1cu: goto label_2b3e1c;
        case 0x2b3e20u: goto label_2b3e20;
        case 0x2b3e24u: goto label_2b3e24;
        case 0x2b3e28u: goto label_2b3e28;
        case 0x2b3e2cu: goto label_2b3e2c;
        case 0x2b3e30u: goto label_2b3e30;
        case 0x2b3e34u: goto label_2b3e34;
        case 0x2b3e38u: goto label_2b3e38;
        case 0x2b3e3cu: goto label_2b3e3c;
        case 0x2b3e40u: goto label_2b3e40;
        case 0x2b3e44u: goto label_2b3e44;
        case 0x2b3e48u: goto label_2b3e48;
        case 0x2b3e4cu: goto label_2b3e4c;
        case 0x2b3e50u: goto label_2b3e50;
        case 0x2b3e54u: goto label_2b3e54;
        case 0x2b3e58u: goto label_2b3e58;
        case 0x2b3e5cu: goto label_2b3e5c;
        case 0x2b3e60u: goto label_2b3e60;
        case 0x2b3e64u: goto label_2b3e64;
        case 0x2b3e68u: goto label_2b3e68;
        case 0x2b3e6cu: goto label_2b3e6c;
        case 0x2b3e70u: goto label_2b3e70;
        case 0x2b3e74u: goto label_2b3e74;
        case 0x2b3e78u: goto label_2b3e78;
        case 0x2b3e7cu: goto label_2b3e7c;
        case 0x2b3e80u: goto label_2b3e80;
        case 0x2b3e84u: goto label_2b3e84;
        case 0x2b3e88u: goto label_2b3e88;
        case 0x2b3e8cu: goto label_2b3e8c;
        case 0x2b3e90u: goto label_2b3e90;
        case 0x2b3e94u: goto label_2b3e94;
        case 0x2b3e98u: goto label_2b3e98;
        case 0x2b3e9cu: goto label_2b3e9c;
        case 0x2b3ea0u: goto label_2b3ea0;
        case 0x2b3ea4u: goto label_2b3ea4;
        case 0x2b3ea8u: goto label_2b3ea8;
        case 0x2b3eacu: goto label_2b3eac;
        case 0x2b3eb0u: goto label_2b3eb0;
        case 0x2b3eb4u: goto label_2b3eb4;
        case 0x2b3eb8u: goto label_2b3eb8;
        case 0x2b3ebcu: goto label_2b3ebc;
        case 0x2b3ec0u: goto label_2b3ec0;
        case 0x2b3ec4u: goto label_2b3ec4;
        case 0x2b3ec8u: goto label_2b3ec8;
        case 0x2b3eccu: goto label_2b3ecc;
        case 0x2b3ed0u: goto label_2b3ed0;
        case 0x2b3ed4u: goto label_2b3ed4;
        case 0x2b3ed8u: goto label_2b3ed8;
        case 0x2b3edcu: goto label_2b3edc;
        case 0x2b3ee0u: goto label_2b3ee0;
        case 0x2b3ee4u: goto label_2b3ee4;
        case 0x2b3ee8u: goto label_2b3ee8;
        case 0x2b3eecu: goto label_2b3eec;
        case 0x2b3ef0u: goto label_2b3ef0;
        case 0x2b3ef4u: goto label_2b3ef4;
        case 0x2b3ef8u: goto label_2b3ef8;
        case 0x2b3efcu: goto label_2b3efc;
        case 0x2b3f00u: goto label_2b3f00;
        case 0x2b3f04u: goto label_2b3f04;
        case 0x2b3f08u: goto label_2b3f08;
        case 0x2b3f0cu: goto label_2b3f0c;
        case 0x2b3f10u: goto label_2b3f10;
        case 0x2b3f14u: goto label_2b3f14;
        case 0x2b3f18u: goto label_2b3f18;
        case 0x2b3f1cu: goto label_2b3f1c;
        case 0x2b3f20u: goto label_2b3f20;
        case 0x2b3f24u: goto label_2b3f24;
        case 0x2b3f28u: goto label_2b3f28;
        case 0x2b3f2cu: goto label_2b3f2c;
        case 0x2b3f30u: goto label_2b3f30;
        case 0x2b3f34u: goto label_2b3f34;
        case 0x2b3f38u: goto label_2b3f38;
        case 0x2b3f3cu: goto label_2b3f3c;
        case 0x2b3f40u: goto label_2b3f40;
        case 0x2b3f44u: goto label_2b3f44;
        case 0x2b3f48u: goto label_2b3f48;
        case 0x2b3f4cu: goto label_2b3f4c;
        case 0x2b3f50u: goto label_2b3f50;
        case 0x2b3f54u: goto label_2b3f54;
        case 0x2b3f58u: goto label_2b3f58;
        case 0x2b3f5cu: goto label_2b3f5c;
        case 0x2b3f60u: goto label_2b3f60;
        case 0x2b3f64u: goto label_2b3f64;
        case 0x2b3f68u: goto label_2b3f68;
        case 0x2b3f6cu: goto label_2b3f6c;
        case 0x2b3f70u: goto label_2b3f70;
        case 0x2b3f74u: goto label_2b3f74;
        case 0x2b3f78u: goto label_2b3f78;
        case 0x2b3f7cu: goto label_2b3f7c;
        case 0x2b3f80u: goto label_2b3f80;
        case 0x2b3f84u: goto label_2b3f84;
        case 0x2b3f88u: goto label_2b3f88;
        case 0x2b3f8cu: goto label_2b3f8c;
        case 0x2b3f90u: goto label_2b3f90;
        case 0x2b3f94u: goto label_2b3f94;
        case 0x2b3f98u: goto label_2b3f98;
        case 0x2b3f9cu: goto label_2b3f9c;
        default: break;
    }

    ctx->pc = 0x2b3cb0u;

label_2b3cb0:
    // 0x2b3cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b3cb4:
    // 0x2b3cb4: 0x24051120  addiu       $a1, $zero, 0x1120
    ctx->pc = 0x2b3cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
label_2b3cb8:
    // 0x2b3cb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2b3cbc:
    // 0x2b3cbc: 0x24061121  addiu       $a2, $zero, 0x1121
    ctx->pc = 0x2b3cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
label_2b3cc0:
    // 0x2b3cc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b3cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b3cc4:
    // 0x2b3cc4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b3cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2b3cc8:
    // 0x2b3cc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b3cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2b3ccc:
    // 0x2b3ccc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b3cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2b3cd0:
    // 0x2b3cd0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b3cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b3cd4:
    // 0x2b3cd4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2b3cd8:
    // 0x2b3cd8: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x2b3cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2b3cdc:
    // 0x2b3cdc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b3ce0:
    // 0x2b3ce0: 0xc0ab498  jal         func_2AD260
label_2b3ce4:
    if (ctx->pc == 0x2B3CE4u) {
        ctx->pc = 0x2B3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CE0u;
        // 0x2b3ce4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CE8u;
        goto label_2b3ce8;
    }
    ctx->pc = 0x2B3CE0u;
    SET_GPR_U32(ctx, 31, 0x2B3CE8u);
    ctx->pc = 0x2B3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CE0u;
    // 0x2b3ce4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD260u, 0x2B3CE0u, 0x2B3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CE8u;
label_2b3ce8:
    // 0x2b3ce8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b3ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3cec:
    // 0x2b3cec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3cf0:
    // 0x2b3cf0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2b3cf4:
    if (ctx->pc == 0x2B3CF4u) {
        ctx->pc = 0x2B3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CF0u;
        // 0x2b3cf4: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CF8u;
        goto label_2b3cf8;
    }
    ctx->pc = 0x2B3CF0u;
    {
        const bool branch_taken_0x2b3cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3cf0) {
            ctx->pc = 0x2B3CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3CF0u;
            // 0x2b3cf4: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3D08u;
            goto label_2b3d08;
        }
    }
    ctx->pc = 0x2B3CF8u;
label_2b3cf8:
    // 0x2b3cf8: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x2b3cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_2b3cfc:
    // 0x2b3cfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b3cfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b3d00:
    // 0x2b3d00: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2b3d04:
    if (ctx->pc == 0x2B3D04u) {
        ctx->pc = 0x2B3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D00u;
        // 0x2b3d04: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D08u;
        goto label_2b3d08;
    }
    ctx->pc = 0x2B3D00u;
    {
        const bool branch_taken_0x2b3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D00u;
        // 0x2b3d04: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d00) {
            ctx->pc = 0x2B3F84u;
            goto label_2b3f84;
        }
    }
    ctx->pc = 0x2B3D08u;
label_2b3d08:
    // 0x2b3d08: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2b3d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b3d0c:
    // 0x2b3d0c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2b3d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b3d10:
    // 0x2b3d10: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x2b3d10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
label_2b3d14:
    // 0x2b3d14: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b3d14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3d18:
    // 0x2b3d18: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2b3d1c:
    if (ctx->pc == 0x2B3D1Cu) {
        ctx->pc = 0x2B3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D18u;
        // 0x2b3d1c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D20u;
        goto label_2b3d20;
    }
    ctx->pc = 0x2B3D18u;
    {
        const bool branch_taken_0x2b3d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D18u;
        // 0x2b3d1c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d18) {
            ctx->pc = 0x2B3D30u;
            goto label_2b3d30;
        }
    }
    ctx->pc = 0x2B3D20u;
label_2b3d20:
    // 0x2b3d20: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b3d20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2b3d24:
    // 0x2b3d24: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2b3d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2b3d28:
    // 0x2b3d28: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_2b3d2c:
    if (ctx->pc == 0x2B3D2Cu) {
        ctx->pc = 0x2B3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D28u;
        // 0x2b3d2c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D30u;
        goto label_2b3d30;
    }
    ctx->pc = 0x2B3D28u;
    {
        const bool branch_taken_0x2b3d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3d28) {
            ctx->pc = 0x2B3D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D28u;
            // 0x2b3d2c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3D64u;
            goto label_2b3d64;
        }
    }
    ctx->pc = 0x2B3D30u;
label_2b3d30:
    // 0x2b3d30: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b3d34:
    // 0x2b3d34: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2b3d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b3d38:
    // 0x2b3d38: 0x2406010a  addiu       $a2, $zero, 0x10A
    ctx->pc = 0x2b3d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
label_2b3d3c:
    // 0x2b3d3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3d40:
    // 0x2b3d40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b3d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3d44:
    // 0x2b3d44: 0xc0a5648  jal         func_295920
label_2b3d48:
    if (ctx->pc == 0x2B3D48u) {
        ctx->pc = 0x2B3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D44u;
        // 0x2b3d48: 0x24110046  addiu       $s1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D4Cu;
        goto label_2b3d4c;
    }
    ctx->pc = 0x2B3D44u;
    SET_GPR_U32(ctx, 31, 0x2B3D4Cu);
    ctx->pc = 0x2B3D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D44u;
    // 0x2b3d48: 0x24110046  addiu       $s1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B3D44u, 0x2B3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D4Cu;
label_2b3d4c:
    // 0x2b3d4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b3d50:
    // 0x2b3d50: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b3d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2b3d54:
    // 0x2b3d54: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b3d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2b3d58:
    // 0x2b3d58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b3d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b3d5c:
    // 0x2b3d5c: 0x10000083  b           . + 4 + (0x83 << 2)
label_2b3d60:
    if (ctx->pc == 0x2B3D60u) {
        ctx->pc = 0x2B3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D5Cu;
        // 0x2b3d60: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D64u;
        goto label_2b3d64;
    }
    ctx->pc = 0x2B3D5Cu;
    {
        const bool branch_taken_0x2b3d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D5Cu;
        // 0x2b3d60: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d5c) {
            ctx->pc = 0x2B3F6Cu;
            goto label_2b3f6c;
        }
    }
    ctx->pc = 0x2B3D64u;
label_2b3d64:
    // 0x2b3d64: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b3d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2b3d68:
    // 0x2b3d68: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x2b3d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b3d6c:
    // 0x2b3d6c: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x2b3d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2b3d70:
    // 0x2b3d70: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x2b3d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b3d74:
    // 0x2b3d74: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x2b3d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b3d78:
    // 0x2b3d78: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x2b3d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2b3d7c:
    // 0x2b3d7c: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x2b3d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2b3d80:
    // 0x2b3d80: 0x6a06001f  ldl         $a2, 0x1F($s0)
    ctx->pc = 0x2b3d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b3d84:
    // 0x2b3d84: 0x6e060018  ldr         $a2, 0x18($s0)
    ctx->pc = 0x2b3d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b3d88:
    // 0x2b3d88: 0xb043004b  sdl         $v1, 0x4B($v0)
    ctx->pc = 0x2b3d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3d8c:
    // 0x2b3d8c: 0xb4430044  sdr         $v1, 0x44($v0)
    ctx->pc = 0x2b3d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3d90:
    // 0x2b3d90: 0xb0440053  sdl         $a0, 0x53($v0)
    ctx->pc = 0x2b3d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3d94:
    // 0x2b3d94: 0xb444004c  sdr         $a0, 0x4C($v0)
    ctx->pc = 0x2b3d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3d98:
    // 0x2b3d98: 0xb045005b  sdl         $a1, 0x5B($v0)
    ctx->pc = 0x2b3d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3d9c:
    // 0x2b3d9c: 0xb4450054  sdr         $a1, 0x54($v0)
    ctx->pc = 0x2b3d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3da0:
    // 0x2b3da0: 0xb0460063  sdl         $a2, 0x63($v0)
    ctx->pc = 0x2b3da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3da4:
    // 0x2b3da4: 0xb446005c  sdr         $a2, 0x5C($v0)
    ctx->pc = 0x2b3da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b3da8:
    // 0x2b3da8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2b3da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2b3dac:
    // 0x2b3dac: 0x92110000  lbu         $s1, 0x0($s0)
    ctx->pc = 0x2b3dacu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3db0:
    // 0x2b3db0: 0x2e220021  sltiu       $v0, $s1, 0x21
    ctx->pc = 0x2b3db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_2b3db4:
    // 0x2b3db4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2b3db8:
    if (ctx->pc == 0x2B3DB8u) {
        ctx->pc = 0x2B3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB4u;
        // 0x2b3db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DBCu;
        goto label_2b3dbc;
    }
    ctx->pc = 0x2B3DB4u;
    {
        const bool branch_taken_0x2b3db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB4u;
        // 0x2b3db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3db4) {
            ctx->pc = 0x2B3DD0u;
            goto label_2b3dd0;
        }
    }
    ctx->pc = 0x2B3DBCu;
label_2b3dbc:
    // 0x2b3dbc: 0x2411002f  addiu       $s1, $zero, 0x2F
    ctx->pc = 0x2b3dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b3dc0:
    // 0x2b3dc0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b3dc4:
    // 0x2b3dc4: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2b3dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b3dc8:
    // 0x2b3dc8: 0x10000055  b           . + 4 + (0x55 << 2)
label_2b3dcc:
    if (ctx->pc == 0x2B3DCCu) {
        ctx->pc = 0x2B3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DC8u;
        // 0x2b3dcc: 0x24060451  addiu       $a2, $zero, 0x451 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DD0u;
        goto label_2b3dd0;
    }
    ctx->pc = 0x2B3DC8u;
    {
        const bool branch_taken_0x2b3dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DC8u;
        // 0x2b3dcc: 0x24060451  addiu       $a2, $zero, 0x451 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dc8) {
            ctx->pc = 0x2B3F20u;
            goto label_2b3f20;
        }
    }
    ctx->pc = 0x2B3DD0u;
label_2b3dd0:
    // 0x2b3dd0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2b3dd4:
    if (ctx->pc == 0x2B3DD4u) {
        ctx->pc = 0x2B3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD0u;
        // 0x2b3dd4: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DD8u;
        goto label_2b3dd8;
    }
    ctx->pc = 0x2B3DD0u;
    {
        const bool branch_taken_0x2b3dd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD0u;
        // 0x2b3dd4: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dd0) {
            ctx->pc = 0x2B3E08u;
            goto label_2b3e08;
        }
    }
    ctx->pc = 0x2B3DD8u;
label_2b3dd8:
    // 0x2b3dd8: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x2b3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2b3ddc:
    // 0x2b3ddc: 0x5622000b  bnel        $s1, $v0, . + 4 + (0xB << 2)
label_2b3de0:
    if (ctx->pc == 0x2B3DE0u) {
        ctx->pc = 0x2B3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DDCu;
        // 0x2b3de0: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DE4u;
        goto label_2b3de4;
    }
    ctx->pc = 0x2B3DDCu;
    {
        const bool branch_taken_0x2b3ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3ddc) {
            ctx->pc = 0x2B3DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3DDCu;
            // 0x2b3de0: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3E0Cu;
            goto label_2b3e0c;
        }
    }
    ctx->pc = 0x2B3DE4u;
label_2b3de4:
    // 0x2b3de4: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x2b3de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
label_2b3de8:
    // 0x2b3de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3dec:
    // 0x2b3dec: 0xc049c22  jal         func_127088
label_2b3df0:
    if (ctx->pc == 0x2B3DF0u) {
        ctx->pc = 0x2B3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DECu;
        // 0x2b3df0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DF4u;
        goto label_2b3df4;
    }
    ctx->pc = 0x2B3DECu;
    SET_GPR_U32(ctx, 31, 0x2B3DF4u);
    ctx->pc = 0x2B3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DECu;
    // 0x2b3df0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2B3DECu, 0x2B3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3DF4u;
label_2b3df4:
    // 0x2b3df4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b3df8:
    if (ctx->pc == 0x2B3DF8u) {
        ctx->pc = 0x2B3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DF4u;
        // 0x2b3df8: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DFCu;
        goto label_2b3dfc;
    }
    ctx->pc = 0x2B3DF4u;
    {
        const bool branch_taken_0x2b3df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3df4) {
            ctx->pc = 0x2B3DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3DF4u;
            // 0x2b3df8: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3E08u;
            goto label_2b3e08;
        }
    }
    ctx->pc = 0x2B3DFCu;
label_2b3dfc:
    // 0x2b3dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3e00:
    // 0x2b3e00: 0x10000012  b           . + 4 + (0x12 << 2)
label_2b3e04:
    if (ctx->pc == 0x2B3E04u) {
        ctx->pc = 0x2B3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E00u;
        // 0x2b3e04: 0xae42005c  sw          $v0, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E08u;
        goto label_2b3e08;
    }
    ctx->pc = 0x2B3E00u;
    {
        const bool branch_taken_0x2b3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E00u;
        // 0x2b3e04: 0xae42005c  sw          $v0, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e00) {
            ctx->pc = 0x2B3E4Cu;
            goto label_2b3e4c;
        }
    }
    ctx->pc = 0x2B3E08u;
label_2b3e08:
    // 0x2b3e08: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x2b3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_2b3e0c:
    // 0x2b3e0c: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x2b3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2b3e10:
    // 0x2b3e10: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2b3e14:
    if (ctx->pc == 0x2B3E14u) {
        ctx->pc = 0x2B3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E10u;
        // 0x2b3e14: 0xacb10044  sw          $s1, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E18u;
        goto label_2b3e18;
    }
    ctx->pc = 0x2B3E10u;
    {
        const bool branch_taken_0x2b3e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3e10) {
            ctx->pc = 0x2B3E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E10u;
            // 0x2b3e14: 0xacb10044  sw          $s1, 0x44($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3E38u;
            goto label_2b3e38;
        }
    }
    ctx->pc = 0x2B3E18u;
label_2b3e18:
    // 0x2b3e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b3e1c:
    // 0x2b3e1c: 0xc0aeb94  jal         func_2BAE50
label_2b3e20:
    if (ctx->pc == 0x2B3E20u) {
        ctx->pc = 0x2B3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E1Cu;
        // 0x2b3e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E24u;
        goto label_2b3e24;
    }
    ctx->pc = 0x2B3E1Cu;
    SET_GPR_U32(ctx, 31, 0x2B3E24u);
    ctx->pc = 0x2B3E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E1Cu;
    // 0x2b3e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE50u, 0x2B3E1Cu, 0x2B3E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E24u;
label_2b3e24:
    // 0x2b3e24: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2b3e28:
    if (ctx->pc == 0x2B3E28u) {
        ctx->pc = 0x2B3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E24u;
        // 0x2b3e28: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E2Cu;
        goto label_2b3e2c;
    }
    ctx->pc = 0x2B3E24u;
    {
        const bool branch_taken_0x2b3e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3e24) {
            ctx->pc = 0x2B3E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E24u;
            // 0x2b3e28: 0x8e4500b0  lw          $a1, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3E34u;
            goto label_2b3e34;
        }
    }
    ctx->pc = 0x2B3E2Cu;
label_2b3e2c:
    // 0x2b3e2c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2b3e30:
    if (ctx->pc == 0x2B3E30u) {
        ctx->pc = 0x2B3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E2Cu;
        // 0x2b3e30: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E34u;
        goto label_2b3e34;
    }
    ctx->pc = 0x2B3E2Cu;
    {
        const bool branch_taken_0x2b3e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E2Cu;
        // 0x2b3e30: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e2c) {
            ctx->pc = 0x2B3F6Cu;
            goto label_2b3f6c;
        }
    }
    ctx->pc = 0x2B3E34u;
label_2b3e34:
    // 0x2b3e34: 0xacb10044  sw          $s1, 0x44($a1)
    ctx->pc = 0x2b3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 17));
label_2b3e38:
    // 0x2b3e38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b3e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3e3c:
    // 0x2b3e3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b3e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3e40:
    // 0x2b3e40: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x2b3e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2b3e44:
    // 0x2b3e44: 0xc049c48  jal         func_127120
label_2b3e48:
    if (ctx->pc == 0x2B3E48u) {
        ctx->pc = 0x2B3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E44u;
        // 0x2b3e48: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E4Cu;
        goto label_2b3e4c;
    }
    ctx->pc = 0x2B3E44u;
    SET_GPR_U32(ctx, 31, 0x2B3E4Cu);
    ctx->pc = 0x2B3E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E44u;
    // 0x2b3e48: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B3E44u, 0x2B3E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E4Cu;
label_2b3e4c:
    // 0x2b3e4c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2b3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b3e50:
    // 0x2b3e50: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2b3e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2b3e54:
    // 0x2b3e54: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2b3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b3e58:
    // 0x2b3e58: 0x40f809  jalr        $v0
label_2b3e5c:
    if (ctx->pc == 0x2B3E5Cu) {
        ctx->pc = 0x2B3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E58u;
        // 0x2b3e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E60u;
        goto label_2b3e60;
    }
    ctx->pc = 0x2B3E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B3E60u);
        ctx->pc = 0x2B3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E58u;
        // 0x2b3e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3E58u, 0x2B3E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B3E60u;
label_2b3e60:
    // 0x2b3e60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b3e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3e64:
    // 0x2b3e64: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_2b3e68:
    if (ctx->pc == 0x2B3E68u) {
        ctx->pc = 0x2B3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E64u;
        // 0x2b3e68: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E6Cu;
        goto label_2b3e6c;
    }
    ctx->pc = 0x2B3E64u;
    {
        const bool branch_taken_0x2b3e64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3e64) {
            ctx->pc = 0x2B3E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E64u;
            // 0x2b3e68: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3E80u;
            goto label_2b3e80;
        }
    }
    ctx->pc = 0x2B3E6Cu;
label_2b3e6c:
    // 0x2b3e6c: 0x2411002f  addiu       $s1, $zero, 0x2F
    ctx->pc = 0x2b3e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b3e70:
    // 0x2b3e70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b3e74:
    // 0x2b3e74: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2b3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b3e78:
    // 0x2b3e78: 0x10000029  b           . + 4 + (0x29 << 2)
label_2b3e7c:
    if (ctx->pc == 0x2B3E7Cu) {
        ctx->pc = 0x2B3E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E78u;
        // 0x2b3e7c: 0x240600f8  addiu       $a2, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E80u;
        goto label_2b3e80;
    }
    ctx->pc = 0x2B3E78u;
    {
        const bool branch_taken_0x2b3e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E78u;
        // 0x2b3e7c: 0x240600f8  addiu       $a2, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e78) {
            ctx->pc = 0x2B3F20u;
            goto label_2b3f20;
        }
    }
    ctx->pc = 0x2B3E80u;
label_2b3e80:
    // 0x2b3e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b3e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3e84:
    // 0x2b3e84: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2b3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2b3e88:
    // 0x2b3e88: 0x40f809  jalr        $v0
label_2b3e8c:
    if (ctx->pc == 0x2B3E8Cu) {
        ctx->pc = 0x2B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E88u;
        // 0x2b3e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E90u;
        goto label_2b3e90;
    }
    ctx->pc = 0x2B3E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B3E90u);
        ctx->pc = 0x2B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E88u;
        // 0x2b3e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3E88u, 0x2B3E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B3E90u;
label_2b3e90:
    // 0x2b3e90: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b3e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b3e94:
    // 0x2b3e94: 0xc0ac1d0  jal         func_2B0740
label_2b3e98:
    if (ctx->pc == 0x2B3E98u) {
        ctx->pc = 0x2B3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E94u;
        // 0x2b3e98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E9Cu;
        goto label_2b3e9c;
    }
    ctx->pc = 0x2B3E94u;
    SET_GPR_U32(ctx, 31, 0x2B3E9Cu);
    ctx->pc = 0x2B3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E94u;
    // 0x2b3e98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0740u, 0x2B3E94u, 0x2B3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E9Cu;
label_2b3e9c:
    // 0x2b3e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3ea0:
    // 0x2b3ea0: 0xc0af0a6  jal         func_2BC298
label_2b3ea4:
    if (ctx->pc == 0x2B3EA4u) {
        ctx->pc = 0x2B3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EA0u;
        // 0x2b3ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EA8u;
        goto label_2b3ea8;
    }
    ctx->pc = 0x2B3EA0u;
    SET_GPR_U32(ctx, 31, 0x2B3EA8u);
    ctx->pc = 0x2B3EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EA0u;
    // 0x2b3ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC298u, 0x2B3EA0u, 0x2B3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EA8u;
label_2b3ea8:
    // 0x2b3ea8: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
label_2b3eac:
    if (ctx->pc == 0x2B3EACu) {
        ctx->pc = 0x2B3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EA8u;
        // 0x2b3eac: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EB0u;
        goto label_2b3eb0;
    }
    ctx->pc = 0x2B3EA8u;
    {
        const bool branch_taken_0x2b3ea8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b3ea8) {
            ctx->pc = 0x2B3EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3EA8u;
            // 0x2b3eac: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3EC4u;
            goto label_2b3ec4;
        }
    }
    ctx->pc = 0x2B3EB0u;
label_2b3eb0:
    // 0x2b3eb0: 0x2411002f  addiu       $s1, $zero, 0x2F
    ctx->pc = 0x2b3eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b3eb4:
    // 0x2b3eb4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b3eb8:
    // 0x2b3eb8: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2b3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b3ebc:
    // 0x2b3ebc: 0x10000018  b           . + 4 + (0x18 << 2)
label_2b3ec0:
    if (ctx->pc == 0x2B3EC0u) {
        ctx->pc = 0x2B3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EBCu;
        // 0x2b3ec0: 0x24060105  addiu       $a2, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EC4u;
        goto label_2b3ec4;
    }
    ctx->pc = 0x2B3EBCu;
    {
        const bool branch_taken_0x2b3ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EBCu;
        // 0x2b3ec0: 0x24060105  addiu       $a2, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ebc) {
            ctx->pc = 0x2B3F20u;
            goto label_2b3f20;
        }
    }
    ctx->pc = 0x2B3EC4u;
label_2b3ec4:
    // 0x2b3ec4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2b3ec8:
    if (ctx->pc == 0x2B3EC8u) {
        ctx->pc = 0x2B3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EC4u;
        // 0x2b3ec8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3ECCu;
        goto label_2b3ecc;
    }
    ctx->pc = 0x2B3EC4u;
    {
        const bool branch_taken_0x2b3ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ec4) {
            ctx->pc = 0x2B3EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3EC4u;
            // 0x2b3ec8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3F00u;
            goto label_2b3f00;
        }
    }
    ctx->pc = 0x2B3ECCu;
label_2b3ecc:
    // 0x2b3ecc: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2b3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2b3ed0:
    // 0x2b3ed0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2b3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2b3ed4:
    // 0x2b3ed4: 0x5071000a  beql        $v1, $s1, . + 4 + (0xA << 2)
label_2b3ed8:
    if (ctx->pc == 0x2B3ED8u) {
        ctx->pc = 0x2B3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED4u;
        // 0x2b3ed8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EDCu;
        goto label_2b3edc;
    }
    ctx->pc = 0x2B3ED4u;
    {
        const bool branch_taken_0x2b3ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b3ed4) {
            ctx->pc = 0x2B3ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3ED4u;
            // 0x2b3ed8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3F00u;
            goto label_2b3f00;
        }
    }
    ctx->pc = 0x2B3EDCu;
label_2b3edc:
    // 0x2b3edc: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2b3edcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
label_2b3ee0:
    // 0x2b3ee0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b3ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2b3ee4:
    // 0x2b3ee4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2b3ee8:
    if (ctx->pc == 0x2B3EE8u) {
        ctx->pc = 0x2B3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EE4u;
        // 0x2b3ee8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EECu;
        goto label_2b3eec;
    }
    ctx->pc = 0x2B3EE4u;
    {
        const bool branch_taken_0x2b3ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ee4) {
            ctx->pc = 0x2B3EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3EE4u;
            // 0x2b3ee8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3F00u;
            goto label_2b3f00;
        }
    }
    ctx->pc = 0x2B3EECu;
label_2b3eec:
    // 0x2b3eec: 0x2411002f  addiu       $s1, $zero, 0x2F
    ctx->pc = 0x2b3eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b3ef0:
    // 0x2b3ef0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b3ef4:
    // 0x2b3ef4: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2b3ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b3ef8:
    // 0x2b3ef8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b3efc:
    if (ctx->pc == 0x2B3EFCu) {
        ctx->pc = 0x2B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EF8u;
        // 0x2b3efc: 0x240600c5  addiu       $a2, $zero, 0xC5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F00u;
        goto label_2b3f00;
    }
    ctx->pc = 0x2B3EF8u;
    {
        const bool branch_taken_0x2b3ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EF8u;
        // 0x2b3efc: 0x240600c5  addiu       $a2, $zero, 0xC5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ef8) {
            ctx->pc = 0x2B3F20u;
            goto label_2b3f20;
        }
    }
    ctx->pc = 0x2B3F00u;
label_2b3f00:
    // 0x2b3f00: 0xac51015c  sw          $s1, 0x15C($v0)
    ctx->pc = 0x2b3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 17));
label_2b3f04:
    // 0x2b3f04: 0x92110000  lbu         $s1, 0x0($s0)
    ctx->pc = 0x2b3f04u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3f08:
    // 0x2b3f08: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_2b3f0c:
    if (ctx->pc == 0x2B3F0Cu) {
        ctx->pc = 0x2B3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F08u;
        // 0x2b3f0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F10u;
        goto label_2b3f10;
    }
    ctx->pc = 0x2B3F08u;
    {
        const bool branch_taken_0x2b3f08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F08u;
        // 0x2b3f0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f08) {
            ctx->pc = 0x2B3F34u;
            goto label_2b3f34;
        }
    }
    ctx->pc = 0x2B3F10u;
label_2b3f10:
    // 0x2b3f10: 0x2411002f  addiu       $s1, $zero, 0x2F
    ctx->pc = 0x2b3f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b3f14:
    // 0x2b3f14: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b3f18:
    // 0x2b3f18: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2b3f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b3f1c:
    // 0x2b3f1c: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x2b3f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_2b3f20:
    // 0x2b3f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f24:
    // 0x2b3f24: 0xc0a5648  jal         func_295920
label_2b3f28:
    if (ctx->pc == 0x2B3F28u) {
        ctx->pc = 0x2B3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F24u;
        // 0x2b3f28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F2Cu;
        goto label_2b3f2c;
    }
    ctx->pc = 0x2B3F24u;
    SET_GPR_U32(ctx, 31, 0x2B3F2Cu);
    ctx->pc = 0x2B3F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F24u;
    // 0x2b3f28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B3F24u, 0x2B3F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F2Cu;
label_2b3f2c:
    // 0x2b3f2c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b3f30:
    if (ctx->pc == 0x2B3F30u) {
        ctx->pc = 0x2B3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F2Cu;
        // 0x2b3f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F34u;
        goto label_2b3f34;
    }
    ctx->pc = 0x2B3F2Cu;
    {
        const bool branch_taken_0x2b3f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F2Cu;
        // 0x2b3f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f2c) {
            ctx->pc = 0x2B3F70u;
            goto label_2b3f70;
        }
    }
    ctx->pc = 0x2B3F34u;
label_2b3f34:
    // 0x2b3f34: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x2b3f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_2b3f38:
    // 0x2b3f38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b3f38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b3f3c:
    // 0x2b3f3c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2b3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2b3f40:
    // 0x2b3f40: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_2b3f44:
    if (ctx->pc == 0x2B3F44u) {
        ctx->pc = 0x2B3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F40u;
        // 0x2b3f44: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F48u;
        goto label_2b3f48;
    }
    ctx->pc = 0x2B3F40u;
    {
        const bool branch_taken_0x2b3f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F40u;
        // 0x2b3f44: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f40) {
            ctx->pc = 0x2B3F64u;
            goto label_2b3f64;
        }
    }
    ctx->pc = 0x2B3F48u;
label_2b3f48:
    // 0x2b3f48: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2b3f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b3f4c:
    // 0x2b3f4c: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x2b3f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_2b3f50:
    // 0x2b3f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f54:
    // 0x2b3f54: 0xc0a5648  jal         func_295920
label_2b3f58:
    if (ctx->pc == 0x2B3F58u) {
        ctx->pc = 0x2B3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F54u;
        // 0x2b3f58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F5Cu;
        goto label_2b3f5c;
    }
    ctx->pc = 0x2B3F54u;
    SET_GPR_U32(ctx, 31, 0x2B3F5Cu);
    ctx->pc = 0x2B3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F54u;
    // 0x2b3f58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B3F54u, 0x2B3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F5Cu;
label_2b3f5c:
    // 0x2b3f5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b3f60:
    if (ctx->pc == 0x2B3F60u) {
        ctx->pc = 0x2B3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F5Cu;
        // 0x2b3f60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F64u;
        goto label_2b3f64;
    }
    ctx->pc = 0x2B3F5Cu;
    {
        const bool branch_taken_0x2b3f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F5Cu;
        // 0x2b3f60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f5c) {
            ctx->pc = 0x2B3F80u;
            goto label_2b3f80;
        }
    }
    ctx->pc = 0x2B3F64u;
label_2b3f64:
    // 0x2b3f64: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b3f68:
    if (ctx->pc == 0x2B3F68u) {
        ctx->pc = 0x2B3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F64u;
        // 0x2b3f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F6Cu;
        goto label_2b3f6c;
    }
    ctx->pc = 0x2B3F64u;
    {
        const bool branch_taken_0x2b3f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F64u;
        // 0x2b3f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f64) {
            ctx->pc = 0x2B3F80u;
            goto label_2b3f80;
        }
    }
    ctx->pc = 0x2B3F6Cu;
label_2b3f6c:
    // 0x2b3f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f70:
    // 0x2b3f70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b3f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f74:
    // 0x2b3f74: 0xc0adb7e  jal         func_2B6DF8
label_2b3f78:
    if (ctx->pc == 0x2B3F78u) {
        ctx->pc = 0x2B3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F74u;
        // 0x2b3f78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F7Cu;
        goto label_2b3f7c;
    }
    ctx->pc = 0x2B3F74u;
    SET_GPR_U32(ctx, 31, 0x2B3F7Cu);
    ctx->pc = 0x2B3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F74u;
    // 0x2b3f78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B3F74u, 0x2B3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F7Cu;
label_2b3f7c:
    // 0x2b3f7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b3f80:
    // 0x2b3f80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b3f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b3f84:
    // 0x2b3f84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b3f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b3f88:
    // 0x2b3f88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b3f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b3f8c:
    // 0x2b3f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b3f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b3f90:
    // 0x2b3f90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b3f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b3f94:
    // 0x2b3f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3f98:
    // 0x2b3f98: 0x3e00008  jr          $ra
label_2b3f9c:
    if (ctx->pc == 0x2B3F9Cu) {
        ctx->pc = 0x2B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F98u;
        // 0x2b3f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3FA0u;
        goto label_fallthrough_0x2b3f98;
    }
    ctx->pc = 0x2B3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F98u;
        // 0x2b3f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b3f98:
    ctx->pc = 0x2B3FA0u;
}
