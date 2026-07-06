#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0FB8
// Address: 0x1c0fb8 - 0x1c1110
void sub_001C0FB8_0x1c0fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0FB8_0x1c0fb8");
#endif

    switch (ctx->pc) {
        case 0x1c0fe8u: goto label_1c0fe8;
        case 0x1c1014u: goto label_1c1014;
        case 0x1c1020u: goto label_1c1020;
        case 0x1c1034u: goto label_1c1034;
        case 0x1c1058u: goto label_1c1058;
        case 0x1c106cu: goto label_1c106c;
        case 0x1c1090u: goto label_1c1090;
        case 0x1c10a4u: goto label_1c10a4;
        case 0x1c10c8u: goto label_1c10c8;
        case 0x1c10dcu: goto label_1c10dc;
        case 0x1c1100u: goto label_1c1100;
        default: break;
    }

    ctx->pc = 0x1c0fb8u;

label_1c0fb8:
    // 0x1c0fb8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c0fbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0fc0: 0x2442c820  addiu       $v0, $v0, -0x37E0
    ctx->pc = 0x1c0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952992));
    // 0x1c0fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0fc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1c0fcc: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1c0fccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1c0fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c0fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fd8: 0x3c061964  lui         $a2, 0x1964
    ctx->pc = 0x1c0fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6500 << 16));
    // 0x1c0fdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c0fe0: 0x8d02c80c  lw          $v0, -0x37F4($t0)
    ctx->pc = 0x1c0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294952972)));
    // 0x1c0fe4: 0x0  nop
    ctx->pc = 0x1c0fe4u;
    // NOP
label_1c0fe8:
    // 0x1c0fe8: 0x1447000b  bne         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0FE8u;
    {
        const bool branch_taken_0x1c0fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1C0FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FE8u;
            // 0x1c0fec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fe8) {
            ctx->pc = 0x1C1018u;
            goto label_1c1018;
        }
    }
    ctx->pc = 0x1C0FF0u;
    // 0x1c0ff0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0ff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0ff8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c0ffc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1000: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x1c1000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c1004: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C1004u;
    {
        const bool branch_taken_0x1c1004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1004) {
            ctx->pc = 0x1C1008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1004u;
            // 0x1c1008: 0x8d02c80c  lw          $v0, -0x37F4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294952972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0fe8;
        }
    }
    ctx->pc = 0x1C100Cu;
    // 0x1c100c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C100Cu;
    SET_GPR_U32(ctx, 31, 0x1C1014u);
    ctx->pc = 0x1C1010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C100Cu;
            // 0x1c1010: 0x24849878  addiu       $a0, $a0, -0x6788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1014u; }
        if (ctx->pc != 0x1C1014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1014u; }
        if (ctx->pc != 0x1C1014u) { return; }
    }
    ctx->pc = 0x1C1014u;
label_1c1014:
    // 0x1c1014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1018:
    // 0x1c1018: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1018u;
            // 0x1c101c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1020u;
label_1c1020:
    // 0x1c1020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1028: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c102c: 0xc0703ee  jal         func_1C0FB8
    ctx->pc = 0x1C102Cu;
    SET_GPR_U32(ctx, 31, 0x1C1034u);
    ctx->pc = 0x1C1030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C102Cu;
            // 0x1c1030: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0FB8u;
    goto label_1c0fb8;
    ctx->pc = 0x1C1034u;
label_1c1034:
    // 0x1c1034: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x1c1034u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x1c1038: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c103c: 0x2442c810  addiu       $v0, $v0, -0x37F0
    ctx->pc = 0x1c103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952976));
    // 0x1c1040: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x1c1040u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x1c1044: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1c1044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1c1048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c104c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c104cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1050: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1050u;
            // 0x1c1054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1058u;
label_1c1058:
    // 0x1c1058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c105c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1064: 0xc0703ee  jal         func_1C0FB8
    ctx->pc = 0x1C1064u;
    SET_GPR_U32(ctx, 31, 0x1C106Cu);
    ctx->pc = 0x1C1068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1064u;
            // 0x1c1068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0FB8u;
    goto label_1c0fb8;
    ctx->pc = 0x1C106Cu;
label_1c106c:
    // 0x1c106c: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x1c106cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x1c1070: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1074: 0x2442c814  addiu       $v0, $v0, -0x37EC
    ctx->pc = 0x1c1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952980));
    // 0x1c1078: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x1c1078u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x1c107c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1c107cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1c1080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1088: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1088u;
            // 0x1c108c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1090u;
label_1c1090:
    // 0x1c1090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c109c: 0xc0703ee  jal         func_1C0FB8
    ctx->pc = 0x1C109Cu;
    SET_GPR_U32(ctx, 31, 0x1C10A4u);
    ctx->pc = 0x1C10A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C109Cu;
            // 0x1c10a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0FB8u;
    goto label_1c0fb8;
    ctx->pc = 0x1C10A4u;
label_1c10a4:
    // 0x1c10a4: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x1c10a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c10ac: 0x2442c818  addiu       $v0, $v0, -0x37E8
    ctx->pc = 0x1c10acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952984));
    // 0x1c10b0: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x1c10b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x1c10b4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1c10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1c10b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c10b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C10C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10C0u;
            // 0x1c10c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C10C8u;
label_1c10c8:
    // 0x1c10c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c10c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c10cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c10d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c10d4: 0xc0703ee  jal         func_1C0FB8
    ctx->pc = 0x1C10D4u;
    SET_GPR_U32(ctx, 31, 0x1C10DCu);
    ctx->pc = 0x1C10D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10D4u;
            // 0x1c10d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0FB8u;
    goto label_1c0fb8;
    ctx->pc = 0x1C10DCu;
label_1c10dc:
    // 0x1c10dc: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x1c10dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x1c10e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c10e4: 0x2442c81c  addiu       $v0, $v0, -0x37E4
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952988));
    // 0x1c10e8: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x1c10e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x1c10ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1c10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1c10f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c10f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C10F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10F8u;
            // 0x1c10fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1100u;
label_1c1100:
    // 0x1c1100: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1104: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c1104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c1108: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C110Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1108u;
            // 0x1c110c: 0xa062c7d2  sb          $v0, -0x382E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294952914), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1110u;
    ctx->pc = 0x1c1110u;
}
