#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1B40
// Address: 0x1e1b40 - 0x1e1db8
void sub_001E1B40_0x1e1b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1B40_0x1e1b40");
#endif

    switch (ctx->pc) {
        case 0x1e1b60u: goto label_1e1b60;
        case 0x1e1b84u: goto label_1e1b84;
        case 0x1e1bb0u: goto label_1e1bb0;
        case 0x1e1bdcu: goto label_1e1bdc;
        case 0x1e1c18u: goto label_1e1c18;
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c58u: goto label_1e1c58;
        case 0x1e1c64u: goto label_1e1c64;
        case 0x1e1c78u: goto label_1e1c78;
        case 0x1e1ca4u: goto label_1e1ca4;
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1d00u: goto label_1e1d00;
        case 0x1e1d0cu: goto label_1e1d0c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1da0u: goto label_1e1da0;
        default: break;
    }

    ctx->pc = 0x1e1b40u;

    // 0x1e1b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1b44: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x1e1b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x1e1b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1b4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b50: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1e1b50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1e1b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b58: 0x80786d8  j           func_1E1B60
    ctx->pc = 0x1E1B58u;
    ctx->pc = 0x1E1B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B58u;
            // 0x1e1b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1B60u;
    goto label_1e1b60;
    ctx->pc = 0x1E1B60u;
label_1e1b60:
    // 0x1e1b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1b70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e1b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e1b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e1b78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e1b7c: 0xc0786b2  jal         func_1E1AC8
    ctx->pc = 0x1E1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B84u);
    ctx->pc = 0x1E1B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B7Cu;
            // 0x1e1b80: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1AC8u;
    if (runtime->hasFunction(0x1E1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B84u; }
        if (ctx->pc != 0x1E1B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1AC8_0x1e1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B84u; }
        if (ctx->pc != 0x1E1B84u) { return; }
    }
    ctx->pc = 0x1E1B84u;
label_1e1b84:
    // 0x1e1b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1b88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e1b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1b8c: 0xae1103b8  sw          $s1, 0x3B8($s0)
    ctx->pc = 0x1e1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 17));
    // 0x1e1b90: 0xae1203bc  sw          $s2, 0x3BC($s0)
    ctx->pc = 0x1e1b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 18));
    // 0x1e1b94: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x1e1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x1e1b98: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x1e1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x1e1b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ba4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BA8u;
            // 0x1e1bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1BB0u;
label_1e1bb0:
    // 0x1e1bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1bb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e1bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e1bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e1bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e1bc0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e1bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e1bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bc8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e1bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bcc: 0x8e0603a8  lw          $a2, 0x3A8($s0)
    ctx->pc = 0x1e1bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x1e1bd0: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1e1bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e1bd4: 0xc06c52c  jal         func_1B14B0
    ctx->pc = 0x1E1BD4u;
    SET_GPR_U32(ctx, 31, 0x1E1BDCu);
    ctx->pc = 0x1E1BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BD4u;
            // 0x1e1bd8: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14B0u;
    if (runtime->hasFunction(0x1B14B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BDCu; }
        if (ctx->pc != 0x1E1BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14B0_0x1b14b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BDCu; }
        if (ctx->pc != 0x1E1BDCu) { return; }
    }
    ctx->pc = 0x1E1BDCu;
label_1e1bdc:
    // 0x1e1bdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1be0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1BE0u;
    {
        const bool branch_taken_0x1e1be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BE0u;
            // 0x1e1be4: 0x2484d3a8  addiu       $a0, $a0, -0x2C58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1be0) {
            ctx->pc = 0x1E1C10u;
            goto label_1e1c10;
        }
    }
    ctx->pc = 0x1E1BE8u;
    // 0x1e1be8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1bf0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e1bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e1bf4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1e1bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1bf8: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x1e1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x1e1bfc: 0xae0303b4  sw          $v1, 0x3B4($s0)
    ctx->pc = 0x1e1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 3));
    // 0x1e1c00: 0xae0403b8  sw          $a0, 0x3B8($s0)
    ctx->pc = 0x1e1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 4));
    // 0x1e1c04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1C04u;
    {
        const bool branch_taken_0x1e1c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C04u;
            // 0x1e1c08: 0xae0503bc  sw          $a1, 0x3BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c04) {
            ctx->pc = 0x1E1C18u;
            goto label_1e1c18;
        }
    }
    ctx->pc = 0x1E1C0Cu;
    // 0x1e1c0c: 0x0  nop
    ctx->pc = 0x1e1c0cu;
    // NOP
label_1e1c10:
    // 0x1e1c10: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E1C10u;
    SET_GPR_U32(ctx, 31, 0x1E1C18u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C18u; }
        if (ctx->pc != 0x1E1C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C18u; }
        if (ctx->pc != 0x1E1C18u) { return; }
    }
    ctx->pc = 0x1E1C18u;
label_1e1c18:
    // 0x1e1c18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e1c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1c1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e1c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C20u;
            // 0x1e1c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1C28u;
label_1e1c28:
    // 0x1e1c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1c2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e1c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c30: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x1e1c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e1c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c38: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e1c3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e1c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e1c40: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x1e1c40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x1e1c44: 0x24a5d3d0  addiu       $a1, $a1, -0x2C30
    ctx->pc = 0x1e1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955984));
    // 0x1e1c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e1c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e1c50: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E1C50u;
    SET_GPR_U32(ctx, 31, 0x1E1C58u);
    ctx->pc = 0x1E1C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C50u;
            // 0x1e1c54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C58u; }
        if (ctx->pc != 0x1E1C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C58u; }
        if (ctx->pc != 0x1E1C58u) { return; }
    }
    ctx->pc = 0x1E1C58u;
label_1e1c58:
    // 0x1e1c58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e1c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c5c: 0xc078500  jal         func_1E1400
    ctx->pc = 0x1E1C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C64u);
    ctx->pc = 0x1E1C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C5Cu;
            // 0x1e1c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1400u;
    if (runtime->hasFunction(0x1E1400u)) {
        auto targetFn = runtime->lookupFunction(0x1E1400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C64u; }
        if (ctx->pc != 0x1E1C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1400_0x1e1400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C64u; }
        if (ctx->pc != 0x1E1C64u) { return; }
    }
    ctx->pc = 0x1E1C64u;
label_1e1c64:
    // 0x1e1c64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e1c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e1c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C6Cu;
            // 0x1e1c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1C74u;
    // 0x1e1c74: 0x0  nop
    ctx->pc = 0x1e1c74u;
    // NOP
label_1e1c78:
    // 0x1e1c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e1c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e1c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e1c90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e1c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e1c98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1c9c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E1CA4u);
    ctx->pc = 0x1E1CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C9Cu;
            // 0x1e1ca0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CA4u; }
        if (ctx->pc != 0x1E1CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CA4u; }
        if (ctx->pc != 0x1E1CA4u) { return; }
    }
    ctx->pc = 0x1E1CA4u;
label_1e1ca4:
    // 0x1e1ca4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1cac: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1CACu;
    {
        const bool branch_taken_0x1e1cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CACu;
            // 0x1e1cb0: 0x2484d3e0  addiu       $a0, $a0, -0x2C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cac) {
            ctx->pc = 0x1E1CD0u;
            goto label_1e1cd0;
        }
    }
    ctx->pc = 0x1E1CB4u;
    // 0x1e1cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1cbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1cc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e1cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1cc8: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E1CC8u;
    ctx->pc = 0x1E1CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CC8u;
            // 0x1e1ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E1CD0u;
label_1e1cd0:
    // 0x1e1cd0: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1CD0u;
    {
        const bool branch_taken_0x1e1cd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CD0u;
            // 0x1e1cd4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cd0) {
            ctx->pc = 0x1E1CF8u;
            goto label_1e1cf8;
        }
    }
    ctx->pc = 0x1E1CD8u;
    // 0x1e1cd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1ce4: 0x2484d418  addiu       $a0, $a0, -0x2BE8
    ctx->pc = 0x1e1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956056));
    // 0x1e1ce8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1cec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e1cecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1cf0: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E1CF0u;
    ctx->pc = 0x1E1CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CF0u;
            // 0x1e1cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E1CF8u;
label_1e1cf8:
    // 0x1e1cf8: 0xc078ce2  jal         func_1E3388
    ctx->pc = 0x1E1CF8u;
    SET_GPR_U32(ctx, 31, 0x1E1D00u);
    ctx->pc = 0x1E1CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CF8u;
            // 0x1e1cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3388u;
    if (runtime->hasFunction(0x1E3388u)) {
        auto targetFn = runtime->lookupFunction(0x1E3388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D00u; }
        if (ctx->pc != 0x1E1D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3388_0x1e3388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D00u; }
        if (ctx->pc != 0x1E1D00u) { return; }
    }
    ctx->pc = 0x1E1D00u;
label_1e1d00:
    // 0x1e1d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d04: 0xc07858e  jal         func_1E1638
    ctx->pc = 0x1E1D04u;
    SET_GPR_U32(ctx, 31, 0x1E1D0Cu);
    ctx->pc = 0x1E1D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D04u;
            // 0x1e1d08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1638u;
    if (runtime->hasFunction(0x1E1638u)) {
        auto targetFn = runtime->lookupFunction(0x1E1638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D0Cu; }
        if (ctx->pc != 0x1E1D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1638_0x1e1638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D0Cu; }
        if (ctx->pc != 0x1E1D0Cu) { return; }
    }
    ctx->pc = 0x1E1D0Cu;
label_1e1d0c:
    // 0x1e1d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e1d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1d18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e1d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1d20: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1e1d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e1d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1d30: 0x80786d8  j           func_1E1B60
    ctx->pc = 0x1E1D30u;
    ctx->pc = 0x1E1D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D30u;
            // 0x1e1d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1B60u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1e1b60;
    ctx->pc = 0x1E1D38u;
    // 0x1e1d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1d48: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E1D48u;
    SET_GPR_U32(ctx, 31, 0x1E1D50u);
    ctx->pc = 0x1E1D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D48u;
            // 0x1e1d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D50u; }
        if (ctx->pc != 0x1E1D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D50u; }
        if (ctx->pc != 0x1E1D50u) { return; }
    }
    ctx->pc = 0x1E1D50u;
label_1e1d50:
    // 0x1e1d50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e1d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1d58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1d5c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1D5Cu;
    {
        const bool branch_taken_0x1e1d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D5Cu;
            // 0x1e1d60: 0x2484d448  addiu       $a0, $a0, -0x2BB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d5c) {
            ctx->pc = 0x1E1D78u;
            goto label_1e1d78;
        }
    }
    ctx->pc = 0x1E1D64u;
    // 0x1e1d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1d6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1d70: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E1D70u;
    ctx->pc = 0x1E1D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D70u;
            // 0x1e1d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E1D78u;
label_1e1d78:
    // 0x1e1d78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e1d7c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1D7Cu;
    {
        const bool branch_taken_0x1e1d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d7c) {
            ctx->pc = 0x1E1D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D7Cu;
            // 0x1e1d80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1DA8u;
            goto label_1e1da8;
        }
    }
    ctx->pc = 0x1E1D84u;
    // 0x1e1d84: 0x8e020508  lw          $v0, 0x508($s0)
    ctx->pc = 0x1e1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
    // 0x1e1d88: 0x50510007  beql        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1D88u;
    {
        const bool branch_taken_0x1e1d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1e1d88) {
            ctx->pc = 0x1E1D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D88u;
            // 0x1e1d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1DA8u;
            goto label_1e1da8;
        }
    }
    ctx->pc = 0x1E1D90u;
    // 0x1e1d90: 0xc07e4f4  jal         func_1F93D0
    ctx->pc = 0x1E1D90u;
    SET_GPR_U32(ctx, 31, 0x1E1D98u);
    ctx->pc = 0x1E1D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D90u;
            // 0x1e1d94: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F93D0u;
    if (runtime->hasFunction(0x1F93D0u)) {
        auto targetFn = runtime->lookupFunction(0x1F93D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D98u; }
        if (ctx->pc != 0x1E1D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F93D0_0x1f93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D98u; }
        if (ctx->pc != 0x1E1D98u) { return; }
    }
    ctx->pc = 0x1E1D98u;
label_1e1d98:
    // 0x1e1d98: 0xc079e78  jal         func_1E79E0
    ctx->pc = 0x1E1D98u;
    SET_GPR_U32(ctx, 31, 0x1E1DA0u);
    ctx->pc = 0x1E1D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D98u;
            // 0x1e1d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E79E0u;
    if (runtime->hasFunction(0x1E79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DA0u; }
        if (ctx->pc != 0x1E1DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E79E0_0x1e79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DA0u; }
        if (ctx->pc != 0x1E1DA0u) { return; }
    }
    ctx->pc = 0x1E1DA0u;
label_1e1da0:
    // 0x1e1da0: 0xae110508  sw          $s1, 0x508($s0)
    ctx->pc = 0x1e1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 17));
    // 0x1e1da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1da8:
    // 0x1e1da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1db0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DB0u;
            // 0x1e1db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DB8u;
    ctx->pc = 0x1e1db8u;
}
