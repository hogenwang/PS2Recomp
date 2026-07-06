#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213B58
// Address: 0x213b58 - 0x213cb0
void sub_00213B58_0x213b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B58_0x213b58");
#endif

    switch (ctx->pc) {
        case 0x213b74u: goto label_213b74;
        case 0x213b88u: goto label_213b88;
        case 0x213ba8u: goto label_213ba8;
        case 0x213be4u: goto label_213be4;
        case 0x213bf8u: goto label_213bf8;
        case 0x213c08u: goto label_213c08;
        case 0x213c30u: goto label_213c30;
        case 0x213c6cu: goto label_213c6c;
        case 0x213c80u: goto label_213c80;
        case 0x213c88u: goto label_213c88;
        default: break;
    }

    ctx->pc = 0x213b58u;

label_213b58:
    // 0x213b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213b60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213b6c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213B6Cu;
    SET_GPR_U32(ctx, 31, 0x213B74u);
    ctx->pc = 0x213B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B6Cu;
            // 0x213b70: 0x24840768  addiu       $a0, $a0, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B74u; }
        if (ctx->pc != 0x213B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B74u; }
        if (ctx->pc != 0x213B74u) { return; }
    }
    ctx->pc = 0x213B74u;
label_213b74:
    // 0x213b74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b7c: 0x248403d8  addiu       $a0, $a0, 0x3D8
    ctx->pc = 0x213b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    // 0x213b80: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213B80u;
    SET_GPR_U32(ctx, 31, 0x213B88u);
    ctx->pc = 0x213B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B80u;
            // 0x213b84: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B88u; }
        if (ctx->pc != 0x213B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B88u; }
        if (ctx->pc != 0x213B88u) { return; }
    }
    ctx->pc = 0x213B88u;
label_213b88:
    // 0x213b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213b90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213b98: 0x248403e8  addiu       $a0, $a0, 0x3E8
    ctx->pc = 0x213b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x213b9c: 0x8043e52  j           func_10F948
    ctx->pc = 0x213B9Cu;
    ctx->pc = 0x213BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213B9Cu;
            // 0x213ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x213BA4u;
    // 0x213ba4: 0x0  nop
    ctx->pc = 0x213ba4u;
    // NOP
label_213ba8:
    // 0x213ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213bac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213bc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x213bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213bcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x213bccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bd4: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x213bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213bd8: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x213bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213bdc: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x213BDCu;
    SET_GPR_U32(ctx, 31, 0x213BE4u);
    ctx->pc = 0x213BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213BDCu;
            // 0x213be0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BE4u; }
        if (ctx->pc != 0x213BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BE4u; }
        if (ctx->pc != 0x213BE4u) { return; }
    }
    ctx->pc = 0x213BE4u;
label_213be4:
    // 0x213be4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213be8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bf0: 0xc08449a  jal         func_211268
    ctx->pc = 0x213BF0u;
    SET_GPR_U32(ctx, 31, 0x213BF8u);
    ctx->pc = 0x213BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213BF0u;
            // 0x213bf4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BF8u; }
        if (ctx->pc != 0x213BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BF8u; }
        if (ctx->pc != 0x213BF8u) { return; }
    }
    ctx->pc = 0x213BF8u;
label_213bf8:
    // 0x213bf8: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x213bf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213bfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c00: 0xc084ed6  jal         func_213B58
    ctx->pc = 0x213C00u;
    SET_GPR_U32(ctx, 31, 0x213C08u);
    ctx->pc = 0x213C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C00u;
            // 0x213c04: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213B58u;
    goto label_213b58;
    ctx->pc = 0x213C08u;
label_213c08:
    // 0x213c08: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x213c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213c14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213c18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213c1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213c1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213c20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213c24: 0x3e00008  jr          $ra
    ctx->pc = 0x213C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213C24u;
            // 0x213c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213C2Cu;
    // 0x213c2c: 0x0  nop
    ctx->pc = 0x213c2cu;
    // NOP
label_213c30:
    // 0x213c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213c34: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213c3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213c40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x213c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x213c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213c54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x213c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c58: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x213c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c5c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x213c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x213c60: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x213c60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213c64: 0xc084582  jal         func_211608
    ctx->pc = 0x213C64u;
    SET_GPR_U32(ctx, 31, 0x213C6Cu);
    ctx->pc = 0x213C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C64u;
            // 0x213c68: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C6Cu; }
        if (ctx->pc != 0x213C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C6Cu; }
        if (ctx->pc != 0x213C6Cu) { return; }
    }
    ctx->pc = 0x213C6Cu;
label_213c6c:
    // 0x213c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x213c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c78: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213C78u;
    SET_GPR_U32(ctx, 31, 0x213C80u);
    ctx->pc = 0x213C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C78u;
            // 0x213c7c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C80u; }
        if (ctx->pc != 0x213C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C80u; }
        if (ctx->pc != 0x213C80u) { return; }
    }
    ctx->pc = 0x213C80u;
label_213c80:
    // 0x213c80: 0xc084ed6  jal         func_213B58
    ctx->pc = 0x213C80u;
    SET_GPR_U32(ctx, 31, 0x213C88u);
    ctx->pc = 0x213C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C80u;
            // 0x213c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213B58u;
    goto label_213b58;
    ctx->pc = 0x213C88u;
label_213c88:
    // 0x213c88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x213c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213c8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213c90: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x213c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x213c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213ca0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213ca4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x213CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213CA8u;
            // 0x213cac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213CB0u;
    ctx->pc = 0x213cb0u;
}
