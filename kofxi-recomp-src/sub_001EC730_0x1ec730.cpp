#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC730
// Address: 0x1ec730 - 0x1ec800
void sub_001EC730_0x1ec730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC730_0x1ec730");
#endif

    switch (ctx->pc) {
        case 0x1ec778u: goto label_1ec778;
        case 0x1ec7a0u: goto label_1ec7a0;
        default: break;
    }

    ctx->pc = 0x1ec730u;

    // 0x1ec730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec734: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec738: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ec738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec73c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1ec73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ec740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec748: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec74c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ec74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ec750: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ec750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec754: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ec754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ec758: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ec758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ec75c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ec75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ec760: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC760u;
    {
        const bool branch_taken_0x1ec760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC760u;
            // 0x1ec764: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec760) {
            ctx->pc = 0x1EC7D4u;
            goto label_1ec7d4;
        }
    }
    ctx->pc = 0x1EC768u;
    // 0x1ec768: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1ec768u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ec76c: 0x241500f8  addiu       $s5, $zero, 0xF8
    ctx->pc = 0x1ec76cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x1ec770: 0x2414000f  addiu       $s4, $zero, 0xF
    ctx->pc = 0x1ec770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ec774: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ec778:
    // 0x1ec778: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ec778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec77c: 0x54560012  bnel        $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC77Cu;
    {
        const bool branch_taken_0x1ec77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1ec77c) {
            ctx->pc = 0x1EC780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC77Cu;
            // 0x1ec780: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC784u;
    // 0x1ec784: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1ec784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1ec788: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x1ec788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x1ec78c: 0x5455000e  bnel        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x1EC78Cu;
    {
        const bool branch_taken_0x1ec78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1ec78c) {
            ctx->pc = 0x1EC790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC78Cu;
            // 0x1ec790: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC794u;
    // 0x1ec794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec798: 0xc07b200  jal         func_1EC800
    ctx->pc = 0x1EC798u;
    SET_GPR_U32(ctx, 31, 0x1EC7A0u);
    ctx->pc = 0x1EC79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC798u;
            // 0x1ec79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC800u;
    if (runtime->hasFunction(0x1EC800u)) {
        auto targetFn = runtime->lookupFunction(0x1EC800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7A0u; }
        if (ctx->pc != 0x1EC7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC800_0x1ec800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7A0u; }
        if (ctx->pc != 0x1EC7A0u) { return; }
    }
    ctx->pc = 0x1EC7A0u;
label_1ec7a0:
    // 0x1ec7a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ec7a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec7a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC7A4u;
    {
        const bool branch_taken_0x1ec7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7a4) {
            ctx->pc = 0x1EC7A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7A4u;
            // 0x1ec7a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC7ACu;
    // 0x1ec7ac: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1ec7acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1ec7b0: 0x50540005  beql        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC7B0u;
    {
        const bool branch_taken_0x1ec7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1ec7b0) {
            ctx->pc = 0x1EC7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7B0u;
            // 0x1ec7b4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC7B8u;
    // 0x1ec7b8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1ec7b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1ec7bc: 0x14730006  bne         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC7BCu;
    {
        const bool branch_taken_0x1ec7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1EC7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7BCu;
            // 0x1ec7c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7bc) {
            ctx->pc = 0x1EC7D8u;
            goto label_1ec7d8;
        }
    }
    ctx->pc = 0x1EC7C4u;
    // 0x1ec7c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1ec7c8:
    // 0x1ec7c8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1ec7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ec7cc: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EC7CCu;
    {
        const bool branch_taken_0x1ec7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7CCu;
            // 0x1ec7d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7cc) {
            ctx->pc = 0x1EC778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec778;
        }
    }
    ctx->pc = 0x1EC7D4u;
label_1ec7d4:
    // 0x1ec7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec7d8:
    // 0x1ec7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec7e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec7e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec7e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ec7e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec7ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ec7ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec7f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ec7f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec7f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ec7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ec7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7F8u;
            // 0x1ec7fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC800u;
    ctx->pc = 0x1ec800u;
}
