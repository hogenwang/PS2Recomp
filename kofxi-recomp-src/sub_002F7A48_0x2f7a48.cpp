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

// Function: sub_002F7A48
// Address: 0x2f7a48 - 0x2f7c28
void sub_002F7A48_0x2f7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7A48_0x2f7a48");
#endif

    switch (ctx->pc) {
        case 0x2f7a9cu: goto label_2f7a9c;
        case 0x2f7ab4u: goto label_2f7ab4;
        case 0x2f7accu: goto label_2f7acc;
        case 0x2f7ae4u: goto label_2f7ae4;
        case 0x2f7b1cu: goto label_2f7b1c;
        case 0x2f7b2cu: goto label_2f7b2c;
        case 0x2f7b78u: goto label_2f7b78;
        case 0x2f7b8cu: goto label_2f7b8c;
        case 0x2f7bccu: goto label_2f7bcc;
        case 0x2f7be0u: goto label_2f7be0;
        case 0x2f7bf0u: goto label_2f7bf0;
        default: break;
    }

    ctx->pc = 0x2f7a48u;

    // 0x2f7a48: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f7a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f7a4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f7a50: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2f7a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2f7a54: 0x24422440  addiu       $v0, $v0, 0x2440
    ctx->pc = 0x2f7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9280));
    // 0x2f7a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a5c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2f7a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2f7a60: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2f7a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2f7a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7a68: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2f7a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2f7a6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f7a6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a70: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2f7a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2f7a74: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f7a74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a78: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f7a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f7a7c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f7a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f7a80: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2f7a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2f7a84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a88: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f7a8c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f7a8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7a90: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f7a94: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2F7A94u;
    SET_GPR_U32(ctx, 31, 0x2F7A9Cu);
    ctx->pc = 0x2F7A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7A94u;
    // 0x2f7a98: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F7A94u, 0x2F7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A9Cu;
label_2f7a9c:
    // 0x2f7a9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f7aa0: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x2f7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x2f7aa4: 0x24632458  addiu       $v1, $v1, 0x2458
    ctx->pc = 0x2f7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9304));
    // 0x2f7aa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7aac: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2F7AACu;
    SET_GPR_U32(ctx, 31, 0x2F7AB4u);
    ctx->pc = 0x2F7AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7AACu;
    // 0x2f7ab0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F7AACu, 0x2F7AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AB4u;
label_2f7ab4:
    // 0x2f7ab4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f7ab8: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x2f7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x2f7abc: 0x24632470  addiu       $v1, $v1, 0x2470
    ctx->pc = 0x2f7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
    // 0x2f7ac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ac4: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2F7AC4u;
    SET_GPR_U32(ctx, 31, 0x2F7ACCu);
    ctx->pc = 0x2F7AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7AC4u;
    // 0x2f7ac8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F7AC4u, 0x2F7ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7ACCu;
label_2f7acc:
    // 0x2f7acc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f7accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f7ad0: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x2f7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x2f7ad4: 0x24632488  addiu       $v1, $v1, 0x2488
    ctx->pc = 0x2f7ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9352));
    // 0x2f7ad8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7adc: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2F7ADCu;
    SET_GPR_U32(ctx, 31, 0x2F7AE4u);
    ctx->pc = 0x2F7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7ADCu;
    // 0x2f7ae0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F7ADCu, 0x2F7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AE4u;
label_2f7ae4:
    // 0x2f7ae4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f7ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ae8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f7aec: 0x1052003e  beq         $v0, $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F7AECu;
    {
        const bool branch_taken_0x2f7aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AECu;
        // 0x2f7af0: 0xae03015c  sw          $v1, 0x15C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7aec) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7AF4u;
    // 0x2f7af4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x2f7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x2f7af8: 0x1052003b  beq         $v0, $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F7AF8u;
    {
        const bool branch_taken_0x2f7af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f7af8) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7B00u;
    // 0x2f7b00: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x2f7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x2f7b04: 0x10520038  beq         $v0, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x2F7B04u;
    {
        const bool branch_taken_0x2f7b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f7b04) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7B0Cu;
    // 0x2f7b0c: 0x10720036  beq         $v1, $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F7B0Cu;
    {
        const bool branch_taken_0x2f7b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f7b0c) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7B14u;
    // 0x2f7b14: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F7B14u;
    SET_GPR_U32(ctx, 31, 0x2F7B1Cu);
    ctx->pc = 0x2F7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B14u;
    // 0x2f7b18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F7B14u, 0x2F7B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B1Cu;
label_2f7b1c:
    // 0x2f7b1c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F7B1Cu;
    {
        const bool branch_taken_0x2f7b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B1Cu;
        // 0x2f7b20: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b1c) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7B24u;
    // 0x2f7b24: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F7B24u;
    SET_GPR_U32(ctx, 31, 0x2F7B2Cu);
    ctx->pc = 0x2F7B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B24u;
    // 0x2f7b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F7B24u, 0x2F7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B2Cu;
label_2f7b2c:
    // 0x2f7b2c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F7B2Cu;
    {
        const bool branch_taken_0x2f7b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B2Cu;
        // 0x2f7b30: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b2c) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7B34u;
    // 0x2f7b34: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x2f7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x2f7b38: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2f7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2f7b3c: 0x2414fff0  addiu       $s4, $zero, -0x10
    ctx->pc = 0x2f7b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2f7b40: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f7b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f7b44: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2f7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2f7b48: 0x24637718  addiu       $v1, $v1, 0x7718
    ctx->pc = 0x2f7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30488));
    // 0x2f7b4c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2f7b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2f7b50: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x2f7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x2f7b54: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x2f7b54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x2f7b58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2f7b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2f7b5c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f7b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2f7b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b64: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x2f7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x2f7b68: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x2f7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x2f7b6c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2f7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2f7b70: 0xc043298  jal         func_10CA60
    ctx->pc = 0x2F7B70u;
    SET_GPR_U32(ctx, 31, 0x2F7B78u);
    ctx->pc = 0x2F7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B70u;
    // 0x2f7b74: 0xae350014  sw          $s5, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x2F7B70u, 0x2F7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B78u;
label_2f7b78:
    // 0x2f7b78: 0x1052001b  beq         $v0, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F7B78u;
    {
        const bool branch_taken_0x2f7b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B78u;
        // 0x2f7b7c: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b78) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7B80u;
    // 0x2f7b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b84: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x2F7B84u;
    SET_GPR_U32(ctx, 31, 0x2F7B8Cu);
    ctx->pc = 0x2F7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B84u;
    // 0x2f7b88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x2F7B84u, 0x2F7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B8Cu;
label_2f7b8c:
    // 0x2f7b8c: 0x10520016  beq         $v0, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F7B8Cu;
    {
        const bool branch_taken_0x2f7b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B8Cu;
        // 0x2f7b90: 0x3c03002f  lui         $v1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b8c) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7B94u;
    // 0x2f7b94: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x2f7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2f7b98: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f7b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f7b9c: 0x246377c8  addiu       $v1, $v1, 0x77C8
    ctx->pc = 0x2f7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30664));
    // 0x2f7ba0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2f7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2f7ba4: 0x24a524b8  addiu       $a1, $a1, 0x24B8
    ctx->pc = 0x2f7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9400));
    // 0x2f7ba8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2f7ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2f7bac: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2f7bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2f7bb0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2f7bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bb8: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x2f7bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x2f7bbc: 0xae350014  sw          $s5, 0x14($s1)
    ctx->pc = 0x2f7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 21));
    // 0x2f7bc0: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x2f7bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x2f7bc4: 0xc043298  jal         func_10CA60
    ctx->pc = 0x2F7BC4u;
    SET_GPR_U32(ctx, 31, 0x2F7BCCu);
    ctx->pc = 0x2F7BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7BC4u;
    // 0x2f7bc8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x2F7BC4u, 0x2F7BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7BCCu;
label_2f7bcc:
    // 0x2f7bcc: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7BCCu;
    {
        const bool branch_taken_0x2f7bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BCCu;
        // 0x2f7bd0: 0xae020130  sw          $v0, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bcc) {
            ctx->pc = 0x2F7BE8u;
            goto label_2f7be8;
        }
    }
    ctx->pc = 0x2F7BD4u;
    // 0x2f7bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bd8: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x2F7BD8u;
    SET_GPR_U32(ctx, 31, 0x2F7BE0u);
    ctx->pc = 0x2F7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7BD8u;
    // 0x2f7bdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x2F7BD8u, 0x2F7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7BE0u;
label_2f7be0:
    // 0x2f7be0: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7BE0u;
    {
        const bool branch_taken_0x2f7be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BE0u;
        // 0x2f7be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7be0) {
            ctx->pc = 0x2F7C00u;
            goto label_2f7c00;
        }
    }
    ctx->pc = 0x2F7BE8u;
label_2f7be8:
    // 0x2f7be8: 0xc0bde5a  jal         func_2F7968
    ctx->pc = 0x2F7BE8u;
    SET_GPR_U32(ctx, 31, 0x2F7BF0u);
    ctx->pc = 0x2F7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7BE8u;
    // 0x2f7bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7968u, 0x2F7BE8u, 0x2F7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7BF0u;
label_2f7bf0:
    // 0x2f7bf0: 0x2403fc17  addiu       $v1, $zero, -0x3E9
    ctx->pc = 0x2f7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
    // 0x2f7bf4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2f7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2f7bf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7bfc: 0x0  nop
    ctx->pc = 0x2f7bfcu;
    // NOP
label_2f7c00:
    // 0x2f7c00: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f7c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f7c04: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2f7c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f7c08: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2f7c08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7c0c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2f7c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f7c10: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2f7c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7c14: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2f7c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7c18: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2f7c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C1Cu;
        // 0x2f7c20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7C24u;
    // 0x2f7c24: 0x0  nop
    ctx->pc = 0x2f7c24u;
    // NOP
}
