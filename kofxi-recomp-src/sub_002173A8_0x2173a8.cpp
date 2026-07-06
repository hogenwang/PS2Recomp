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

// Function: sub_002173A8
// Address: 0x2173a8 - 0x2175a0
void sub_002173A8_0x2173a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002173A8_0x2173a8");
#endif

    switch (ctx->pc) {
        case 0x217424u: goto label_217424;
        case 0x217434u: goto label_217434;
        case 0x217470u: goto label_217470;
        case 0x217480u: goto label_217480;
        case 0x2174c0u: goto label_2174c0;
        case 0x217544u: goto label_217544;
        case 0x217550u: goto label_217550;
        case 0x217570u: goto label_217570;
        default: break;
    }

    ctx->pc = 0x2173a8u;

label_2173a8:
    // 0x2173a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2173ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2173acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2173b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2173b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2173b4: 0x24840e88  addiu       $a0, $a0, 0xE88
    ctx->pc = 0x2173b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3720));
    // 0x2173b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2173b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2173bc: 0x8043e52  j           func_10F948
    ctx->pc = 0x2173BCu;
    ctx->pc = 0x2173C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173BCu;
    // 0x2173c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2173C4u;
    // 0x2173c4: 0x0  nop
    ctx->pc = 0x2173c4u;
    // NOP
    // 0x2173c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2173c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2173cc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2173ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2173d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2173d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2173d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2173d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2173d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2173d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2173dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2173dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2173e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2173e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2173e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2173e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2173ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2173ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2173f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2173f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2173f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173f8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2173f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2173fc: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x2173fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x217400: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217404: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x217404u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217408: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x217408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x21740c: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x21740cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217410: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x217410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x217414: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x217414u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x217418: 0x8cb70000  lw          $s7, 0x0($a1)
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21741c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x217420: 0xaea0ab60  sw          $zero, -0x54A0($s5)
    ctx->pc = 0x217420u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
label_217424:
    // 0x217424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x217424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21742c: 0xc08485e  jal         func_212178
    ctx->pc = 0x21742Cu;
    SET_GPR_U32(ctx, 31, 0x217434u);
    ctx->pc = 0x217430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21742Cu;
    // 0x217430: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212178u, 0x21742Cu, 0x217434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217434u;
label_217434:
    // 0x217434: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x217434u;
    {
        const bool branch_taken_0x217434 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217434u;
        // 0x217438: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217434) {
            ctx->pc = 0x2174C4u;
            goto label_2174c4;
        }
    }
    ctx->pc = 0x21743Cu;
    // 0x21743c: 0x8eafab60  lw          $t7, -0x54A0($s5)
    ctx->pc = 0x21743cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945632)));
    // 0x217440: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x217440u;
    {
        const bool branch_taken_0x217440 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x217444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217440u;
        // 0x217444: 0x8ecdab58  lw          $t5, -0x54A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217440) {
            ctx->pc = 0x2174A0u;
            goto label_2174a0;
        }
    }
    ctx->pc = 0x217448u;
    // 0x217448: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x217448u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x21744c: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x21744Cu;
    {
        const bool branch_taken_0x21744c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x217450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21744Cu;
        // 0x217450: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21744c) {
            ctx->pc = 0x2174F8u;
            goto label_2174f8;
        }
    }
    ctx->pc = 0x217454u;
    // 0x217454: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x217454u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x217458: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x217458u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x21745c: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x217460: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x217460u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x217464: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x217464u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x217468: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21746c: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x21746cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_217470:
    // 0x217470: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x217470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x217474: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x217474u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217478: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x217478u;
    {
        const bool branch_taken_0x217478 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x21747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217478u;
        // 0x21747c: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217478) {
            ctx->pc = 0x21749Cu;
            goto label_21749c;
        }
    }
    ctx->pc = 0x217480u;
label_217480:
    // 0x217480: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x217480u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217484: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x217484u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x217488: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x217488u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21748c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21748cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x217490: 0x0  nop
    ctx->pc = 0x217490u;
    // NOP
    // 0x217494: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217494u;
    {
        const bool branch_taken_0x217494 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x217498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217494u;
        // 0x217498: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217494) {
            ctx->pc = 0x217480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217480;
        }
    }
    ctx->pc = 0x21749Cu;
label_21749c:
    // 0x21749c: 0xafc0ab58  sw          $zero, -0x54A8($fp)
    ctx->pc = 0x21749cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294945624), GPR_U32(ctx, 0));
label_2174a0:
    // 0x2174a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2174a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2174a4: 0x2a4f0004  slti        $t7, $s2, 0x4
    ctx->pc = 0x2174a4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2174a8: 0x55e0ffde  bnel        $t7, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2174A8u;
    {
        const bool branch_taken_0x2174a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2174a8) {
            ctx->pc = 0x2174ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2174A8u;
            // 0x2174ac: 0xaea0ab60  sw          $zero, -0x54A0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217424;
        }
    }
    ctx->pc = 0x2174B0u;
    // 0x2174b0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2174b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2174b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2174b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174b8: 0xc085cea  jal         func_2173A8
    ctx->pc = 0x2174B8u;
    SET_GPR_U32(ctx, 31, 0x2174C0u);
    ctx->pc = 0x2174BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174B8u;
    // 0x2174bc: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173A8u;
    goto label_2173a8;
    ctx->pc = 0x2174C0u;
label_2174c0:
    // 0x2174c0: 0x260782d  daddu       $t7, $s3, $zero
    ctx->pc = 0x2174c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2174c4:
    // 0x2174c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2174c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2174c8: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2174c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2174ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2174d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2174d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2174d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2174d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2174d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2174d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2174dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2174dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2174e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2174e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2174e4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2174e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2174e8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2174e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2174ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2174ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2174f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2174F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174F0u;
        // 0x2174f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174F8u;
label_2174f8:
    // 0x2174f8: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x2174F8u;
    {
        const bool branch_taken_0x2174f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174F8u;
        // 0x2174fc: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174f8) {
            ctx->pc = 0x217470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217470;
        }
    }
    ctx->pc = 0x217500u;
    // 0x217500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217504: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217504u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21750c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21750cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217510: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217518: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21751c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21751cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217520: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217524: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x217524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217528: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x217528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21752c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21752cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217530: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x217530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x217534: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x217534u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x217538: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x217538u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21753c: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21753cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x217540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217544:
    // 0x217544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217548: 0xc08489e  jal         func_212278
    ctx->pc = 0x217548u;
    SET_GPR_U32(ctx, 31, 0x217550u);
    ctx->pc = 0x21754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217548u;
    // 0x21754c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212278u, 0x217548u, 0x217550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217550u;
label_217550:
    // 0x217550: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217550u;
    {
        const bool branch_taken_0x217550 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217550u;
        // 0x217554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217550) {
            ctx->pc = 0x217578u;
            goto label_217578;
        }
    }
    ctx->pc = 0x217558u;
    // 0x217558: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21755c: 0x2a0f0004  slti        $t7, $s0, 0x4
    ctx->pc = 0x21755cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x217560: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x217560u;
    {
        const bool branch_taken_0x217560 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x217564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217560u;
        // 0x217564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217560) {
            ctx->pc = 0x217544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217544;
        }
    }
    ctx->pc = 0x217568u;
    // 0x217568: 0xc085cea  jal         func_2173A8
    ctx->pc = 0x217568u;
    SET_GPR_U32(ctx, 31, 0x217570u);
    ctx->pc = 0x21756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217568u;
    // 0x21756c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173A8u;
    goto label_2173a8;
    ctx->pc = 0x217570u;
label_217570:
    // 0x217570: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x217570u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217574: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x217574u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_217578:
    // 0x217578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21757c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21757cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21758c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21758cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217590: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x217590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x217594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217598: 0x3e00008  jr          $ra
    ctx->pc = 0x217598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217598u;
        // 0x21759c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2175A0u;
}
