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

// Function: sub_00105A48
// Address: 0x105a48 - 0x105c68
void sub_00105A48_0x105a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105A48_0x105a48");
#endif

    switch (ctx->pc) {
        case 0x105a48u: goto label_105a48;
        case 0x105a4cu: goto label_105a4c;
        case 0x105a50u: goto label_105a50;
        case 0x105a54u: goto label_105a54;
        case 0x105a58u: goto label_105a58;
        case 0x105a5cu: goto label_105a5c;
        case 0x105a60u: goto label_105a60;
        case 0x105a64u: goto label_105a64;
        case 0x105a68u: goto label_105a68;
        case 0x105a6cu: goto label_105a6c;
        case 0x105a70u: goto label_105a70;
        case 0x105a74u: goto label_105a74;
        case 0x105a78u: goto label_105a78;
        case 0x105a7cu: goto label_105a7c;
        case 0x105a80u: goto label_105a80;
        case 0x105a84u: goto label_105a84;
        case 0x105a88u: goto label_105a88;
        case 0x105a8cu: goto label_105a8c;
        case 0x105a90u: goto label_105a90;
        case 0x105a94u: goto label_105a94;
        case 0x105a98u: goto label_105a98;
        case 0x105a9cu: goto label_105a9c;
        case 0x105aa0u: goto label_105aa0;
        case 0x105aa4u: goto label_105aa4;
        case 0x105aa8u: goto label_105aa8;
        case 0x105aacu: goto label_105aac;
        case 0x105ab0u: goto label_105ab0;
        case 0x105ab4u: goto label_105ab4;
        case 0x105ab8u: goto label_105ab8;
        case 0x105abcu: goto label_105abc;
        case 0x105ac0u: goto label_105ac0;
        case 0x105ac4u: goto label_105ac4;
        case 0x105ac8u: goto label_105ac8;
        case 0x105accu: goto label_105acc;
        case 0x105ad0u: goto label_105ad0;
        case 0x105ad4u: goto label_105ad4;
        case 0x105ad8u: goto label_105ad8;
        case 0x105adcu: goto label_105adc;
        case 0x105ae0u: goto label_105ae0;
        case 0x105ae4u: goto label_105ae4;
        case 0x105ae8u: goto label_105ae8;
        case 0x105aecu: goto label_105aec;
        case 0x105af0u: goto label_105af0;
        case 0x105af4u: goto label_105af4;
        case 0x105af8u: goto label_105af8;
        case 0x105afcu: goto label_105afc;
        case 0x105b00u: goto label_105b00;
        case 0x105b04u: goto label_105b04;
        case 0x105b08u: goto label_105b08;
        case 0x105b0cu: goto label_105b0c;
        case 0x105b10u: goto label_105b10;
        case 0x105b14u: goto label_105b14;
        case 0x105b18u: goto label_105b18;
        case 0x105b1cu: goto label_105b1c;
        case 0x105b20u: goto label_105b20;
        case 0x105b24u: goto label_105b24;
        case 0x105b28u: goto label_105b28;
        case 0x105b2cu: goto label_105b2c;
        case 0x105b30u: goto label_105b30;
        case 0x105b34u: goto label_105b34;
        case 0x105b38u: goto label_105b38;
        case 0x105b3cu: goto label_105b3c;
        case 0x105b40u: goto label_105b40;
        case 0x105b44u: goto label_105b44;
        case 0x105b48u: goto label_105b48;
        case 0x105b4cu: goto label_105b4c;
        case 0x105b50u: goto label_105b50;
        case 0x105b54u: goto label_105b54;
        case 0x105b58u: goto label_105b58;
        case 0x105b5cu: goto label_105b5c;
        case 0x105b60u: goto label_105b60;
        case 0x105b64u: goto label_105b64;
        case 0x105b68u: goto label_105b68;
        case 0x105b6cu: goto label_105b6c;
        case 0x105b70u: goto label_105b70;
        case 0x105b74u: goto label_105b74;
        case 0x105b78u: goto label_105b78;
        case 0x105b7cu: goto label_105b7c;
        case 0x105b80u: goto label_105b80;
        case 0x105b84u: goto label_105b84;
        case 0x105b88u: goto label_105b88;
        case 0x105b8cu: goto label_105b8c;
        case 0x105b90u: goto label_105b90;
        case 0x105b94u: goto label_105b94;
        case 0x105b98u: goto label_105b98;
        case 0x105b9cu: goto label_105b9c;
        case 0x105ba0u: goto label_105ba0;
        case 0x105ba4u: goto label_105ba4;
        case 0x105ba8u: goto label_105ba8;
        case 0x105bacu: goto label_105bac;
        case 0x105bb0u: goto label_105bb0;
        case 0x105bb4u: goto label_105bb4;
        case 0x105bb8u: goto label_105bb8;
        case 0x105bbcu: goto label_105bbc;
        case 0x105bc0u: goto label_105bc0;
        case 0x105bc4u: goto label_105bc4;
        case 0x105bc8u: goto label_105bc8;
        case 0x105bccu: goto label_105bcc;
        case 0x105bd0u: goto label_105bd0;
        case 0x105bd4u: goto label_105bd4;
        case 0x105bd8u: goto label_105bd8;
        case 0x105bdcu: goto label_105bdc;
        case 0x105be0u: goto label_105be0;
        case 0x105be4u: goto label_105be4;
        case 0x105be8u: goto label_105be8;
        case 0x105becu: goto label_105bec;
        case 0x105bf0u: goto label_105bf0;
        case 0x105bf4u: goto label_105bf4;
        case 0x105bf8u: goto label_105bf8;
        case 0x105bfcu: goto label_105bfc;
        case 0x105c00u: goto label_105c00;
        case 0x105c04u: goto label_105c04;
        case 0x105c08u: goto label_105c08;
        case 0x105c0cu: goto label_105c0c;
        case 0x105c10u: goto label_105c10;
        case 0x105c14u: goto label_105c14;
        case 0x105c18u: goto label_105c18;
        case 0x105c1cu: goto label_105c1c;
        case 0x105c20u: goto label_105c20;
        case 0x105c24u: goto label_105c24;
        case 0x105c28u: goto label_105c28;
        case 0x105c2cu: goto label_105c2c;
        case 0x105c30u: goto label_105c30;
        case 0x105c34u: goto label_105c34;
        case 0x105c38u: goto label_105c38;
        case 0x105c3cu: goto label_105c3c;
        case 0x105c40u: goto label_105c40;
        case 0x105c44u: goto label_105c44;
        case 0x105c48u: goto label_105c48;
        case 0x105c4cu: goto label_105c4c;
        case 0x105c50u: goto label_105c50;
        case 0x105c54u: goto label_105c54;
        case 0x105c58u: goto label_105c58;
        case 0x105c5cu: goto label_105c5c;
        case 0x105c60u: goto label_105c60;
        case 0x105c64u: goto label_105c64;
        default: break;
    }

    ctx->pc = 0x105a48u;

label_105a48:
    // 0x105a48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_105a4c:
    // 0x105a4c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x105a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_105a50:
    // 0x105a50: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x105a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_105a54:
    // 0x105a54: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x105a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_105a58:
    // 0x105a58: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x105a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_105a5c:
    // 0x105a5c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x105a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_105a60:
    // 0x105a60: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x105a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_105a64:
    // 0x105a64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x105a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105a68:
    // 0x105a68: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x105a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_105a6c:
    // 0x105a6c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x105a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_105a70:
    // 0x105a70: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x105a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_105a74:
    // 0x105a74: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x105a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_105a78:
    // 0x105a78: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x105a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_105a7c:
    // 0x105a7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x105a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_105a80:
    // 0x105a80: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x105a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_105a84:
    // 0x105a84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x105a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_105a88:
    // 0x105a88: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x105a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_105a8c:
    // 0x105a8c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_105a90:
    if (ctx->pc == 0x105A90u) {
        ctx->pc = 0x105A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A8Cu;
        // 0x105a90: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A94u;
        goto label_105a94;
    }
    ctx->pc = 0x105A8Cu;
    {
        const bool branch_taken_0x105a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A8Cu;
        // 0x105a90: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a8c) {
            ctx->pc = 0x105B2Cu;
            goto label_105b2c;
        }
    }
    ctx->pc = 0x105A94u;
label_105a94:
    // 0x105a94: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x105a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_105a98:
    // 0x105a98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_105a9c:
    // 0x105a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105aa0:
    // 0x105aa0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_105aa4:
    if (ctx->pc == 0x105AA4u) {
        ctx->pc = 0x105AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AA0u;
        // 0x105aa4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105AA8u;
        goto label_105aa8;
    }
    ctx->pc = 0x105AA0u;
    {
        const bool branch_taken_0x105aa0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x105AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AA0u;
        // 0x105aa4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105aa0) {
            ctx->pc = 0x105B3Cu;
            goto label_105b3c;
        }
    }
    ctx->pc = 0x105AA8u;
label_105aa8:
    // 0x105aa8: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x105aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_105aac:
    // 0x105aac: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x105aacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_105ab0:
    // 0x105ab0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x105ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_105ab4:
    // 0x105ab4: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x105ab4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_105ab8:
    // 0x105ab8: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x105ab8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_105abc:
    // 0x105abc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x105abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_105ac0:
    // 0x105ac0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x105ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_105ac4:
    // 0x105ac4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x105ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_105ac8:
    // 0x105ac8: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x105ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_105acc:
    // 0x105acc: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x105accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_105ad0:
    // 0x105ad0: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x105ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_105ad4:
    // 0x105ad4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x105ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_105ad8:
    // 0x105ad8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x105ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_105adc:
    // 0x105adc: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x105adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_105ae0:
    // 0x105ae0: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x105ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_105ae4:
    // 0x105ae4: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x105ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_105ae8:
    // 0x105ae8: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x105ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_105aec:
    // 0x105aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105af0:
    // 0x105af0: 0x60f809  jalr        $v1
label_105af4:
    if (ctx->pc == 0x105AF4u) {
        ctx->pc = 0x105AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AF0u;
        // 0x105af4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105AF8u;
        goto label_105af8;
    }
    ctx->pc = 0x105AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105AF8u);
        ctx->pc = 0x105AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AF0u;
        // 0x105af4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105AF0u, 0x105AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105AF8u;
label_105af8:
    // 0x105af8: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x105af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_105afc:
    // 0x105afc: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x105afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_105b00:
    // 0x105b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105b04:
    // 0x105b04: 0x40f809  jalr        $v0
label_105b08:
    if (ctx->pc == 0x105B08u) {
        ctx->pc = 0x105B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B04u;
        // 0x105b08: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B0Cu;
        goto label_105b0c;
    }
    ctx->pc = 0x105B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105B0Cu);
        ctx->pc = 0x105B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B04u;
        // 0x105b08: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B04u, 0x105B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105B0Cu;
label_105b0c:
    // 0x105b0c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x105b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_105b10:
    // 0x105b10: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x105b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_105b14:
    // 0x105b14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x105b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_105b18:
    // 0x105b18: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x105b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_105b1c:
    // 0x105b1c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_105b20:
    if (ctx->pc == 0x105B20u) {
        ctx->pc = 0x105B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B1Cu;
        // 0x105b20: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B24u;
        goto label_105b24;
    }
    ctx->pc = 0x105B1Cu;
    {
        const bool branch_taken_0x105b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B1Cu;
        // 0x105b20: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b1c) {
            ctx->pc = 0x105AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105ac0;
        }
    }
    ctx->pc = 0x105B24u;
label_105b24:
    // 0x105b24: 0x10000009  b           . + 4 + (0x9 << 2)
label_105b28:
    if (ctx->pc == 0x105B28u) {
        ctx->pc = 0x105B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B24u;
        // 0x105b28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B2Cu;
        goto label_105b2c;
    }
    ctx->pc = 0x105B24u;
    {
        const bool branch_taken_0x105b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B24u;
        // 0x105b28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b24) {
            ctx->pc = 0x105B4Cu;
            goto label_105b4c;
        }
    }
    ctx->pc = 0x105B2Cu;
label_105b2c:
    // 0x105b2c: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x105b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_105b30:
    // 0x105b30: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x105b30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_105b34:
    // 0x105b34: 0x10000004  b           . + 4 + (0x4 << 2)
label_105b38:
    if (ctx->pc == 0x105B38u) {
        ctx->pc = 0x105B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B34u;
        // 0x105b38: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B3Cu;
        goto label_105b3c;
    }
    ctx->pc = 0x105B34u;
    {
        const bool branch_taken_0x105b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B34u;
        // 0x105b38: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b34) {
            ctx->pc = 0x105B48u;
            goto label_105b48;
        }
    }
    ctx->pc = 0x105B3Cu;
label_105b3c:
    // 0x105b3c: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x105b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_105b40:
    // 0x105b40: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_105b44:
    // 0x105b44: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x105b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_105b48:
    // 0x105b48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_105b4c:
    // 0x105b4c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x105b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_105b50:
    // 0x105b50: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x105b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_105b54:
    // 0x105b54: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x105b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_105b58:
    // 0x105b58: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x105b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_105b5c:
    // 0x105b5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_105b60:
    // 0x105b60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_105b64:
    if (ctx->pc == 0x105B64u) {
        ctx->pc = 0x105B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B60u;
        // 0x105b64: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B68u;
        goto label_105b68;
    }
    ctx->pc = 0x105B60u;
    {
        const bool branch_taken_0x105b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B60u;
        // 0x105b64: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b60) {
            ctx->pc = 0x105B80u;
            goto label_105b80;
        }
    }
    ctx->pc = 0x105B68u;
label_105b68:
    // 0x105b68: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x105b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_105b6c:
    // 0x105b6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_105b70:
    if (ctx->pc == 0x105B70u) {
        ctx->pc = 0x105B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B6Cu;
        // 0x105b70: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B74u;
        goto label_105b74;
    }
    ctx->pc = 0x105B6Cu;
    {
        const bool branch_taken_0x105b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B6Cu;
        // 0x105b70: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b6c) {
            ctx->pc = 0x105B80u;
            goto label_105b80;
        }
    }
    ctx->pc = 0x105B74u;
label_105b74:
    // 0x105b74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x105b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_105b78:
    // 0x105b78: 0xc04305a  jal         func_10C168
label_105b7c:
    if (ctx->pc == 0x105B7Cu) {
        ctx->pc = 0x105B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B78u;
        // 0x105b7c: 0x24a59fd0  addiu       $a1, $a1, -0x6030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B80u;
        goto label_105b80;
    }
    ctx->pc = 0x105B78u;
    SET_GPR_U32(ctx, 31, 0x105B80u);
    ctx->pc = 0x105B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B78u;
    // 0x105b7c: 0x24a59fd0  addiu       $a1, $a1, -0x6030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x105B78u, 0x105B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B80u;
label_105b80:
    // 0x105b80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_105b84:
    // 0x105b84: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x105b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_105b88:
    // 0x105b88: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x105b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_105b8c:
    // 0x105b8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x105b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_105b90:
    // 0x105b90: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x105b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_105b94:
    // 0x105b94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_105b98:
    // 0x105b98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_105b9c:
    if (ctx->pc == 0x105B9Cu) {
        ctx->pc = 0x105B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B98u;
        // 0x105b9c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105BA0u;
        goto label_105ba0;
    }
    ctx->pc = 0x105B98u;
    {
        const bool branch_taken_0x105b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B98u;
        // 0x105b9c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b98) {
            ctx->pc = 0x105BE0u;
            goto label_105be0;
        }
    }
    ctx->pc = 0x105BA0u;
label_105ba0:
    // 0x105ba0: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x105ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_105ba4:
    // 0x105ba4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x105ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_105ba8:
    // 0x105ba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x105ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105bac:
    // 0x105bac: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x105bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_105bb0:
    // 0x105bb0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_105bb4:
    // 0x105bb4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105bb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_105bb8:
    // 0x105bb8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x105bb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_105bbc:
    // 0x105bbc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105bbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_105bc0:
    // 0x105bc0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x105bc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_105bc4:
    // 0x105bc4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x105bc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_105bc8:
    // 0x105bc8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x105bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_105bcc:
    // 0x105bcc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_105bd0:
    // 0x105bd0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_105bd4:
    // 0x105bd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105bd8:
    // 0x105bd8: 0x8041d56  j           func_107558
label_105bdc:
    if (ctx->pc == 0x105BDCu) {
        ctx->pc = 0x105BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BD8u;
        // 0x105bdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105BE0u;
        goto label_105be0;
    }
    ctx->pc = 0x105BD8u;
    ctx->pc = 0x105BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BD8u;
    // 0x105bdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107558u, 0x105BD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x105BE0u;
label_105be0:
    // 0x105be0: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x105be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_105be4:
    // 0x105be4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_105be8:
    if (ctx->pc == 0x105BE8u) {
        ctx->pc = 0x105BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BE4u;
        // 0x105be8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105BECu;
        goto label_105bec;
    }
    ctx->pc = 0x105BE4u;
    {
        const bool branch_taken_0x105be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BE4u;
        // 0x105be8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105be4) {
            ctx->pc = 0x105C24u;
            goto label_105c24;
        }
    }
    ctx->pc = 0x105BECu;
label_105bec:
    // 0x105bec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_105bf0:
    // 0x105bf0: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_105bf4:
    // 0x105bf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x105bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105bf8:
    // 0x105bf8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105bf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_105bfc:
    // 0x105bfc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x105bfcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_105c00:
    // 0x105c00: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105c00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_105c04:
    // 0x105c04: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x105c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_105c08:
    // 0x105c08: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x105c08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_105c0c:
    // 0x105c0c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x105c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_105c10:
    // 0x105c10: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_105c14:
    // 0x105c14: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_105c18:
    // 0x105c18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105c1c:
    // 0x105c1c: 0x8041d56  j           func_107558
label_105c20:
    if (ctx->pc == 0x105C20u) {
        ctx->pc = 0x105C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C1Cu;
        // 0x105c20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C24u;
        goto label_105c24;
    }
    ctx->pc = 0x105C1Cu;
    ctx->pc = 0x105C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C1Cu;
    // 0x105c20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107558u, 0x105C1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x105C24u;
label_105c24:
    // 0x105c24: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x105c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_105c28:
    // 0x105c28: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x105c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_105c2c:
    // 0x105c2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x105c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105c30:
    // 0x105c30: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x105c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_105c34:
    // 0x105c34: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_105c38:
    // 0x105c38: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105c38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_105c3c:
    // 0x105c3c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x105c3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_105c40:
    // 0x105c40: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105c40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_105c44:
    // 0x105c44: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x105c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_105c48:
    // 0x105c48: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x105c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_105c4c:
    // 0x105c4c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x105c4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_105c50:
    // 0x105c50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_105c54:
    // 0x105c54: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_105c58:
    // 0x105c58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105c5c:
    // 0x105c5c: 0x8041d1a  j           func_107468
label_105c60:
    if (ctx->pc == 0x105C60u) {
        ctx->pc = 0x105C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C5Cu;
        // 0x105c60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C64u;
        goto label_105c64;
    }
    ctx->pc = 0x105C5Cu;
    ctx->pc = 0x105C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C5Cu;
    // 0x105c60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107468u, 0x105C5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x105C64u;
label_105c64:
    // 0x105c64: 0x0  nop
    ctx->pc = 0x105c64u;
    // NOP
}
