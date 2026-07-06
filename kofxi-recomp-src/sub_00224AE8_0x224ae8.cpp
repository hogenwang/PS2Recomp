#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224AE8
// Address: 0x224ae8 - 0x224c60
void sub_00224AE8_0x224ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224AE8_0x224ae8");
#endif

    switch (ctx->pc) {
        case 0x224b20u: goto label_224b20;
        case 0x224b34u: goto label_224b34;
        case 0x224b3cu: goto label_224b3c;
        case 0x224b4cu: goto label_224b4c;
        case 0x224bacu: goto label_224bac;
        case 0x224bb8u: goto label_224bb8;
        case 0x224bc4u: goto label_224bc4;
        case 0x224bccu: goto label_224bcc;
        case 0x224be0u: goto label_224be0;
        case 0x224c10u: goto label_224c10;
        case 0x224c20u: goto label_224c20;
        case 0x224c28u: goto label_224c28;
        default: break;
    }

    ctx->pc = 0x224ae8u;

    // 0x224ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224af4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x224af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b00: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x224B00u;
    {
        const bool branch_taken_0x224b00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B00u;
            // 0x224b04: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b00) {
            ctx->pc = 0x224B34u;
            goto label_224b34;
        }
    }
    ctx->pc = 0x224B08u;
    // 0x224b08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224b0c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224b10: 0x24843618  addiu       $a0, $a0, 0x3618
    ctx->pc = 0x224b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13848));
    // 0x224b14: 0x25083628  addiu       $t0, $t0, 0x3628
    ctx->pc = 0x224b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13864));
    // 0x224b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b1c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x224b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_224b20:
    // 0x224b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224b24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224b2c: 0x8089794  j           func_225E50
    ctx->pc = 0x224B2Cu;
    ctx->pc = 0x224B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B2Cu;
            // 0x224b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224B34u;
label_224b34:
    // 0x224b34: 0xc088696  jal         func_221A58
    ctx->pc = 0x224B34u;
    SET_GPR_U32(ctx, 31, 0x224B3Cu);
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B3Cu; }
        if (ctx->pc != 0x224B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B3Cu; }
        if (ctx->pc != 0x224B3Cu) { return; }
    }
    ctx->pc = 0x224B3Cu;
label_224b3c:
    // 0x224b3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x224B3Cu;
    {
        const bool branch_taken_0x224b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B3Cu;
            // 0x224b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b3c) {
            ctx->pc = 0x224B70u;
            goto label_224b70;
        }
    }
    ctx->pc = 0x224B44u;
    // 0x224b44: 0xc088696  jal         func_221A58
    ctx->pc = 0x224B44u;
    SET_GPR_U32(ctx, 31, 0x224B4Cu);
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B4Cu; }
        if (ctx->pc != 0x224B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B4Cu; }
        if (ctx->pc != 0x224B4Cu) { return; }
    }
    ctx->pc = 0x224B4Cu;
label_224b4c:
    // 0x224b4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224b50: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224b50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224b54: 0x24843618  addiu       $a0, $a0, 0x3618
    ctx->pc = 0x224b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13848));
    // 0x224b58: 0x25083640  addiu       $t0, $t0, 0x3640
    ctx->pc = 0x224b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13888));
    // 0x224b5c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x224b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x224b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b64: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x224b64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224b68: 0x144fffed  bne         $v0, $t7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x224B68u;
    {
        const bool branch_taken_0x224b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x224B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B68u;
            // 0x224b6c: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b68) {
            ctx->pc = 0x224B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224b20;
        }
    }
    ctx->pc = 0x224B70u;
label_224b70:
    // 0x224b70: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x224B70u;
    {
        const bool branch_taken_0x224b70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x224b70) {
            ctx->pc = 0x224B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224B70u;
            // 0x224b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224BACu;
            goto label_224bac;
        }
    }
    ctx->pc = 0x224B78u;
    // 0x224b78: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x224b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224b80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224b88: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224b88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224b90: 0x24843618  addiu       $a0, $a0, 0x3618
    ctx->pc = 0x224b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13848));
    // 0x224b94: 0x25083660  addiu       $t0, $t0, 0x3660
    ctx->pc = 0x224b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13920));
    // 0x224b98: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x224b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x224b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ba0: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x224ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x224ba4: 0x8089794  j           func_225E50
    ctx->pc = 0x224BA4u;
    ctx->pc = 0x224BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BA4u;
            // 0x224ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224BACu;
label_224bac:
    // 0x224bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bb0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x224BB0u;
    SET_GPR_U32(ctx, 31, 0x224BB8u);
    ctx->pc = 0x224BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BB0u;
            // 0x224bb4: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BB8u; }
        if (ctx->pc != 0x224BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BB8u; }
        if (ctx->pc != 0x224BB8u) { return; }
    }
    ctx->pc = 0x224BB8u;
label_224bb8:
    // 0x224bb8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x224bbc: 0xc0897b6  jal         func_225ED8
    ctx->pc = 0x224BBCu;
    SET_GPR_U32(ctx, 31, 0x224BC4u);
    ctx->pc = 0x225ED8u;
    if (runtime->hasFunction(0x225ED8u)) {
        auto targetFn = runtime->lookupFunction(0x225ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BC4u; }
        if (ctx->pc != 0x224BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225ED8_0x225ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BC4u; }
        if (ctx->pc != 0x224BC4u) { return; }
    }
    ctx->pc = 0x224BC4u;
label_224bc4:
    // 0x224bc4: 0xc0884ae  jal         func_2212B8
    ctx->pc = 0x224BC4u;
    SET_GPR_U32(ctx, 31, 0x224BCCu);
    ctx->pc = 0x224BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BC4u;
            // 0x224bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2212B8u;
    if (runtime->hasFunction(0x2212B8u)) {
        auto targetFn = runtime->lookupFunction(0x2212B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BCCu; }
        if (ctx->pc != 0x224BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002212B8_0x2212b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BCCu; }
        if (ctx->pc != 0x224BCCu) { return; }
    }
    ctx->pc = 0x224BCCu;
label_224bcc:
    // 0x224bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x224BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224BD8u;
            // 0x224bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224BE0u;
label_224be0:
    // 0x224be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224bec: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x224BECu;
    {
        const bool branch_taken_0x224bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224BECu;
            // 0x224bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bec) {
            ctx->pc = 0x224C20u;
            goto label_224c20;
        }
    }
    ctx->pc = 0x224BF4u;
    // 0x224bf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224bf8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224bfc: 0x24843680  addiu       $a0, $a0, 0x3680
    ctx->pc = 0x224bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13952));
    // 0x224c00: 0x25083628  addiu       $t0, $t0, 0x3628
    ctx->pc = 0x224c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13864));
    // 0x224c04: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x224c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x224c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c0c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x224c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_224c10:
    // 0x224c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224c14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224c18: 0x8089794  j           func_225E50
    ctx->pc = 0x224C18u;
    ctx->pc = 0x224C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C18u;
            // 0x224c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224C20u;
label_224c20:
    // 0x224c20: 0xc088696  jal         func_221A58
    ctx->pc = 0x224C20u;
    SET_GPR_U32(ctx, 31, 0x224C28u);
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C28u; }
        if (ctx->pc != 0x224C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C28u; }
        if (ctx->pc != 0x224C28u) { return; }
    }
    ctx->pc = 0x224C28u;
label_224c28:
    // 0x224c28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224c2c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224c30: 0x24843680  addiu       $a0, $a0, 0x3680
    ctx->pc = 0x224c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13952));
    // 0x224c34: 0x25083690  addiu       $t0, $t0, 0x3690
    ctx->pc = 0x224c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13968));
    // 0x224c38: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x224c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x224c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c40: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x224c40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224c44: 0x144ffff2  bne         $v0, $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x224C44u;
    {
        const bool branch_taken_0x224c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x224C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C44u;
            // 0x224c48: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c44) {
            ctx->pc = 0x224C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224c10;
        }
    }
    ctx->pc = 0x224C4Cu;
    // 0x224c4c: 0x9e040014  lwu         $a0, 0x14($s0)
    ctx->pc = 0x224c4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x224c50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224c58: 0x80990d8  j           func_264360
    ctx->pc = 0x224C58u;
    ctx->pc = 0x224C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C58u;
            // 0x224c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00264360_0x264360(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224C60u;
    ctx->pc = 0x224c60u;
}
