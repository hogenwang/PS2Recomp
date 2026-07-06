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

// Function: sub_00283F80
// Address: 0x283f80 - 0x284260
void sub_00283F80_0x283f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F80_0x283f80");
#endif

    switch (ctx->pc) {
        case 0x283fe0u: goto label_283fe0;
        case 0x283fe4u: goto label_283fe4;
        case 0x284008u: goto label_284008;
        case 0x284034u: goto label_284034;
        default: break;
    }

    ctx->pc = 0x283f80u;

    // 0x283f80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x283f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x283f84: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x283f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x283f88: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x283f88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x283f8c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x283f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x283f90: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x283f90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x283f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x283f98: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x283f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x283f9c: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x283f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fa0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x283fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x283fa4: 0x2468821  addu        $s1, $s2, $a2
    ctx->pc = 0x283fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x283fa8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x283fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x283fac: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x283facu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fb0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x283fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x283fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fb8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x283fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x283fbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283fc0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x283fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x283fc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x283fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fc8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x283fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x283fcc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x283fccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283fd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x283fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x283fd4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x283fd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283fd8: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x283fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x283fdc: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x283fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_283fe0:
    // 0x283fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283fe4:
    // 0x283fe4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283FE4u;
    {
        const bool branch_taken_0x283fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x283FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FE4u;
        // 0x283fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fe4) {
            ctx->pc = 0x283FFCu;
            goto label_283ffc;
        }
    }
    ctx->pc = 0x283FECu;
    // 0x283fec: 0x10820064  beq         $a0, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x283FECu;
    {
        const bool branch_taken_0x283fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x283FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FECu;
        // 0x283ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fec) {
            ctx->pc = 0x284180u;
            goto label_284180;
        }
    }
    ctx->pc = 0x283FF4u;
    // 0x283ff4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x283FF4u;
    {
        const bool branch_taken_0x283ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ff4) {
            ctx->pc = 0x283FE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283fe4;
        }
    }
    ctx->pc = 0x283FFCu;
label_283ffc:
    // 0x283ffc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x283ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284000: 0xc0a0dd8  jal         func_283760
    ctx->pc = 0x284000u;
    SET_GPR_U32(ctx, 31, 0x284008u);
    ctx->pc = 0x284004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284000u;
    // 0x284004: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283760u, 0x284000u, 0x284008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284008u;
label_284008:
    // 0x284008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28400c: 0x14800086  bnez        $a0, . + 4 + (0x86 << 2)
    ctx->pc = 0x28400Cu;
    {
        const bool branch_taken_0x28400c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x284010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28400Cu;
        // 0x284010: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28400c) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x284014u;
    // 0x284014: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x284014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x284018: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x284018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x28401c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28401cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284020: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x284020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284024: 0x2323023  subu        $a2, $s1, $s2
    ctx->pc = 0x284024u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x284028: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x284028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28402c: 0xc0a0f18  jal         func_283C60
    ctx->pc = 0x28402Cu;
    SET_GPR_U32(ctx, 31, 0x284034u);
    ctx->pc = 0x284030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28402Cu;
    // 0x284030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283C60u, 0x28402Cu, 0x284034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284034u;
label_284034:
    // 0x284034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284038: 0x1480007c  bnez        $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x284038u;
    {
        const bool branch_taken_0x284038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284038u;
        // 0x28403c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284038) {
            ctx->pc = 0x28422Cu;
            goto label_28422c;
        }
    }
    ctx->pc = 0x284040u;
    // 0x284040: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x284040u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x284044: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x284044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284048: 0x92030015  lbu         $v1, 0x15($s0)
    ctx->pc = 0x284048u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x28404c: 0x30470020  andi        $a3, $v0, 0x20
    ctx->pc = 0x28404cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x284050: 0x30460002  andi        $a2, $v0, 0x2
    ctx->pc = 0x284050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x284054: 0x16a40003  bne         $s5, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284054u;
    {
        const bool branch_taken_0x284054 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x284058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284054u;
        // 0x284058: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284054) {
            ctx->pc = 0x284064u;
            goto label_284064;
        }
    }
    ctx->pc = 0x28405Cu;
    // 0x28405c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28405Cu;
    {
        const bool branch_taken_0x28405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28405Cu;
        // 0x284060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28405c) {
            ctx->pc = 0x284070u;
            goto label_284070;
        }
    }
    ctx->pc = 0x284064u;
label_284064:
    // 0x284064: 0x2b31818  mult        $v1, $s5, $s3
    ctx->pc = 0x284064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x284068: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x284068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x28406c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x28406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284070:
    // 0x284070: 0x52c00011  beql        $s6, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x284070u;
    {
        const bool branch_taken_0x284070 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x284070) {
            ctx->pc = 0x284074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284070u;
            // 0x284074: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840B8u;
            goto label_2840b8;
        }
    }
    ctx->pc = 0x284078u;
    // 0x284078: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x284078u;
    {
        const bool branch_taken_0x284078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284078u;
        // 0x28407c: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284078) {
            ctx->pc = 0x2840ACu;
            goto label_2840ac;
        }
    }
    ctx->pc = 0x284080u;
    // 0x284080: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x284080u;
    {
        const bool branch_taken_0x284080 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x284084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284080u;
        // 0x284084: 0xacb00020  sw          $s0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284080) {
            ctx->pc = 0x2840A0u;
            goto label_2840a0;
        }
    }
    ctx->pc = 0x284088u;
    // 0x284088: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x284088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x28408c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284090: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x284090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284094: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x284094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x284098: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x284098u;
    {
        const bool branch_taken_0x284098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284098u;
        // 0x28409c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284098) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x2840A0u;
label_2840a0:
    // 0x2840a0: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x2840a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2840a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2840A4u;
    {
        const bool branch_taken_0x2840a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840A4u;
        // 0x2840a8: 0x30540002  andi        $s4, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840a4) {
            ctx->pc = 0x2840B0u;
            goto label_2840b0;
        }
    }
    ctx->pc = 0x2840ACu;
label_2840ac:
    // 0x2840ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2840acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2840b0:
    // 0x2840b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2840B0u;
    {
        const bool branch_taken_0x2840b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840B0u;
        // 0x2840b4: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840b0) {
            ctx->pc = 0x2840C4u;
            goto label_2840c4;
        }
    }
    ctx->pc = 0x2840B8u;
label_2840b8:
    // 0x2840b8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2840b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2840bc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2840bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2840c0: 0xacb0001c  sw          $s0, 0x1C($a1)
    ctx->pc = 0x2840c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 16));
label_2840c4:
    // 0x2840c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2840c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2840c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840cc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2840ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2840d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2840D0u;
    {
        const bool branch_taken_0x2840d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2840D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840D0u;
        // 0x2840d4: 0x8fb50000  lw          $s5, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840d0) {
            ctx->pc = 0x284118u;
            goto label_284118;
        }
    }
    ctx->pc = 0x2840D8u;
    // 0x2840d8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2840d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2840dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2840DCu;
    {
        const bool branch_taken_0x2840dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2840dc) {
            ctx->pc = 0x284118u;
            goto label_284118;
        }
    }
    ctx->pc = 0x2840E4u;
    // 0x2840e4: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x2840e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2840e8: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x2840e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x2840ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2840ECu;
    {
        const bool branch_taken_0x2840ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2840ec) {
            ctx->pc = 0x284118u;
            goto label_284118;
        }
    }
    ctx->pc = 0x2840F4u;
    // 0x2840f4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2840F4u;
    {
        const bool branch_taken_0x2840f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840F4u;
        // 0x2840f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840f4) {
            ctx->pc = 0x284110u;
            goto label_284110;
        }
    }
    ctx->pc = 0x2840FCu;
    // 0x2840fc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2840fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x284100: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x284100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x284104: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x284104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x284108: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x284108u;
    {
        const bool branch_taken_0x284108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284108u;
        // 0x28410c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284108) {
            ctx->pc = 0x283FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283fe0;
        }
    }
    ctx->pc = 0x284110u;
label_284110:
    // 0x284110: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x284110u;
    {
        const bool branch_taken_0x284110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284110u;
        // 0x284114: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284110) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x284118u;
label_284118:
    // 0x284118: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x284118u;
    {
        const bool branch_taken_0x284118 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x284118) {
            ctx->pc = 0x28411Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284118u;
            // 0x28411c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284140u;
            goto label_284140;
        }
    }
    ctx->pc = 0x284120u;
    // 0x284120: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x284120u;
    {
        const bool branch_taken_0x284120 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x284120) {
            ctx->pc = 0x284124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284120u;
            // 0x284124: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284138u;
            goto label_284138;
        }
    }
    ctx->pc = 0x284128u;
    // 0x284128: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x284128u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28412c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28412Cu;
    {
        const bool branch_taken_0x28412c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28412c) {
            ctx->pc = 0x284130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28412Cu;
            // 0x284130: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284140u;
            goto label_284140;
        }
    }
    ctx->pc = 0x284134u;
    // 0x284134: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x284134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_284138:
    // 0x284138: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x284138u;
    {
        const bool branch_taken_0x284138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284138u;
        // 0x28413c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284138) {
            ctx->pc = 0x284150u;
            goto label_284150;
        }
    }
    ctx->pc = 0x284140u;
label_284140:
    // 0x284140: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x284140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x284144: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x284144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x284148: 0x54600037  bnel        $v1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x284148u;
    {
        const bool branch_taken_0x284148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284148) {
            ctx->pc = 0x28414Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284148u;
            // 0x28414c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x284150u;
label_284150:
    // 0x284150: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x284150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x284154: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x284154u;
    {
        const bool branch_taken_0x284154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284154u;
        // 0x284158: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284154) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x28415Cu;
    // 0x28415c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284160: 0x2511026  xor         $v0, $s2, $s1
    ctx->pc = 0x284160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
    // 0x284164: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x284164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284168: 0x10c0ff9d  beqz        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x284168u;
    {
        const bool branch_taken_0x284168 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284168u;
        // 0x28416c: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284168) {
            ctx->pc = 0x283FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283fe0;
        }
    }
    ctx->pc = 0x284170u;
    // 0x284170: 0x14e0ff9c  bnez        $a3, . + 4 + (-0x64 << 2)
    ctx->pc = 0x284170u;
    {
        const bool branch_taken_0x284170 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x284174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284170u;
        // 0x284174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284170) {
            ctx->pc = 0x283FE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283fe4;
        }
    }
    ctx->pc = 0x284178u;
    // 0x284178: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x284178u;
    {
        const bool branch_taken_0x284178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284178u;
        // 0x28417c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284178) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x284180u;
label_284180:
    // 0x284180: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x284180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x284184: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x284184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x284188: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x284188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28418c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28418cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284190: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x284190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x284194: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x284194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284198: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x284198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28419c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x28419cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2841a0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2841A0u;
    {
        const bool branch_taken_0x2841a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2841A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841A0u;
        // 0x2841a4: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841a0) {
            ctx->pc = 0x2841C4u;
            goto label_2841c4;
        }
    }
    ctx->pc = 0x2841A8u;
    // 0x2841a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2841a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2841ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2841ACu;
    {
        const bool branch_taken_0x2841ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841ACu;
        // 0x2841b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841ac) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x2841B4u;
    // 0x2841b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2841b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2841b8: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x2841b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x2841bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2841BCu;
    {
        const bool branch_taken_0x2841bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841BCu;
        // 0x2841c0: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841bc) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x2841C4u;
label_2841c4:
    // 0x2841c4: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2841c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2841c8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2841C8u;
    {
        const bool branch_taken_0x2841c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841C8u;
        // 0x2841cc: 0x8fb10008  lw          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841c8) {
            ctx->pc = 0x284204u;
            goto label_284204;
        }
    }
    ctx->pc = 0x2841D0u;
    // 0x2841d0: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x2841d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2841d4: 0x30540002  andi        $s4, $v0, 0x2
    ctx->pc = 0x2841d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2841d8: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2841D8u;
    {
        const bool branch_taken_0x2841d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841d8) {
            ctx->pc = 0x2841DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2841D8u;
            // 0x2841dc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2841E8u;
            goto label_2841e8;
        }
    }
    ctx->pc = 0x2841E0u;
    // 0x2841e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2841E0u;
    {
        const bool branch_taken_0x2841e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E0u;
        // 0x2841e4: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841e0) {
            ctx->pc = 0x28420Cu;
            goto label_28420c;
        }
    }
    ctx->pc = 0x2841E8u;
label_2841e8:
    // 0x2841e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2841e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2841ec: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2841ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2841f0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2841f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2841f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2841F4u;
    {
        const bool branch_taken_0x2841f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841F4u;
        // 0x2841f8: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841f4) {
            ctx->pc = 0x28420Cu;
            goto label_28420c;
        }
    }
    ctx->pc = 0x2841FCu;
    // 0x2841fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2841FCu;
    {
        const bool branch_taken_0x2841fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841FCu;
        // 0x284200: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841fc) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x284204u;
label_284204:
    // 0x284204: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x284204u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284208: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x284208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_28420c:
    // 0x28420c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28420Cu;
    {
        const bool branch_taken_0x28420c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28420Cu;
        // 0x284210: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28420c) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x284214u;
    // 0x284214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x284214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284218: 0x2321026  xor         $v0, $s1, $s2
    ctx->pc = 0x284218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
    // 0x28421c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284220: 0x1000ff6f  b           . + 4 + (-0x91 << 2)
    ctx->pc = 0x284220u;
    {
        const bool branch_taken_0x284220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284220u;
        // 0x284224: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284220) {
            ctx->pc = 0x283FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283fe0;
        }
    }
    ctx->pc = 0x284228u;
label_284228:
    // 0x284228: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x284228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28422c:
    // 0x28422c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28422cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284230: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x284230u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x284234: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x284234u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x284238: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x284238u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28423c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28423cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284240: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x284240u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284244: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x284244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284248: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x284248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28424c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28424cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284250: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x284250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284254: 0x3e00008  jr          $ra
    ctx->pc = 0x284254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284254u;
        // 0x284258: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28425Cu;
    // 0x28425c: 0x0  nop
    ctx->pc = 0x28425cu;
    // NOP
}
