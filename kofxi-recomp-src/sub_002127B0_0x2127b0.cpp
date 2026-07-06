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

// Function: sub_002127B0
// Address: 0x2127b0 - 0x2129a8
void sub_002127B0_0x2127b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002127B0_0x2127b0");
#endif

    switch (ctx->pc) {
        case 0x212808u: goto label_212808;
        case 0x212824u: goto label_212824;
        case 0x21283cu: goto label_21283c;
        case 0x212874u: goto label_212874;
        case 0x212884u: goto label_212884;
        case 0x2128c4u: goto label_2128c4;
        case 0x2128d8u: goto label_2128d8;
        case 0x212928u: goto label_212928;
        case 0x212964u: goto label_212964;
        default: break;
    }

    ctx->pc = 0x2127b0u;

    // 0x2127b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2127b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2127b4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2127b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2127b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2127b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2127bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2127bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2127c0: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2127c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2127c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2127c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2127c8: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x2127c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x2127cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2127ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2127d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2127d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2127d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2127d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2127dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2127dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2127e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2127e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127e4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2127e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2127e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2127e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2127ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2127f0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2127f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2127f4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2127f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2127f8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x2127f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x2127fc: 0x8cbe0000  lw          $fp, 0x0($a1)
    ctx->pc = 0x2127fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212800: 0xc084920  jal         func_212480
    ctx->pc = 0x212800u;
    SET_GPR_U32(ctx, 31, 0x212808u);
    ctx->pc = 0x212804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212800u;
    // 0x212804: 0x8cd50000  lw          $s5, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212480u, 0x212800u, 0x212808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212808u;
label_212808:
    // 0x212808: 0x4400057  bltz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x212808u;
    {
        const bool branch_taken_0x212808 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212808u;
        // 0x21280c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212808) {
            ctx->pc = 0x212968u;
            goto label_212968;
        }
    }
    ctx->pc = 0x212810u;
    // 0x212810: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x212810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212814: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21281c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21281Cu;
    SET_GPR_U32(ctx, 31, 0x212824u);
    ctx->pc = 0x212820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21281Cu;
    // 0x212820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21281Cu, 0x212824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212824u;
label_212824:
    // 0x212824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21282c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21282cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212830: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212834: 0xc084520  jal         func_211480
    ctx->pc = 0x212834u;
    SET_GPR_U32(ctx, 31, 0x21283Cu);
    ctx->pc = 0x212838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212834u;
    // 0x212838: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x212834u, 0x21283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21283Cu;
label_21283c:
    // 0x21283c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21283cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212840: 0x29cf0005  slti        $t7, $t6, 0x5
    ctx->pc = 0x212840u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x212844: 0x11e00048  beqz        $t7, . + 4 + (0x48 << 2)
    ctx->pc = 0x212844u;
    {
        const bool branch_taken_0x212844 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x212848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212844u;
        // 0x212848: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212844) {
            ctx->pc = 0x212968u;
            goto label_212968;
        }
    }
    ctx->pc = 0x21284Cu;
    // 0x21284c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21284Cu;
    {
        const bool branch_taken_0x21284c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21284c) {
            ctx->pc = 0x21285Cu;
            goto label_21285c;
        }
    }
    ctx->pc = 0x212854u;
    // 0x212854: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x212854u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212858: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x212858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21285c:
    // 0x21285c: 0x19c0002d  blez        $t6, . + 4 + (0x2D << 2)
    ctx->pc = 0x21285Cu;
    {
        const bool branch_taken_0x21285c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x212860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21285Cu;
        // 0x212860: 0x29cf0004  slti        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21285c) {
            ctx->pc = 0x212914u;
            goto label_212914;
        }
    }
    ctx->pc = 0x212864u;
    // 0x212864: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x212864u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212868: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x212868u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21286c: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x21286cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212870: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x212870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_212874:
    // 0x212874: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21287c: 0xc08485e  jal         func_212178
    ctx->pc = 0x21287Cu;
    SET_GPR_U32(ctx, 31, 0x212884u);
    ctx->pc = 0x212880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21287Cu;
    // 0x212880: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212178u, 0x21287Cu, 0x212884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212884u;
label_212884:
    // 0x212884: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x212884u;
    {
        const bool branch_taken_0x212884 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x212888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212884u;
        // 0x212888: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212884) {
            ctx->pc = 0x212968u;
            goto label_212968;
        }
    }
    ctx->pc = 0x21288Cu;
    // 0x21288c: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x21288cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x212890: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x212890u;
    {
        const bool branch_taken_0x212890 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x212894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212890u;
        // 0x212894: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212890) {
            ctx->pc = 0x212900u;
            goto label_212900;
        }
    }
    ctx->pc = 0x212898u;
    // 0x212898: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x212898u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x21289c: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21289cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x2128a0: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x2128A0u;
    {
        const bool branch_taken_0x2128a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2128A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128A0u;
        // 0x2128a4: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128a0) {
            ctx->pc = 0x21299Cu;
            goto label_21299c;
        }
    }
    ctx->pc = 0x2128A8u;
    // 0x2128a8: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x2128a8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2128ac: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x2128acu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x2128b0: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x2128b0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x2128b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2128b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2128b8: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x2128b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2128bc: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x2128bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2128c0: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x2128c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_2128c4:
    // 0x2128c4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2128c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2128c8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2128c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2128cc: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x2128CCu;
    {
        const bool branch_taken_0x2128cc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2128D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128CCu;
        // 0x2128d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128cc) {
            ctx->pc = 0x2128F8u;
            goto label_2128f8;
        }
    }
    ctx->pc = 0x2128D4u;
    // 0x2128d4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2128d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2128d8:
    // 0x2128d8: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x2128d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2128dc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2128e0: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x2128e0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2128e4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2128e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2128e8: 0x0  nop
    ctx->pc = 0x2128e8u;
    // NOP
    // 0x2128ec: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2128ECu;
    {
        const bool branch_taken_0x2128ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x2128F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128ECu;
        // 0x2128f0: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128ec) {
            ctx->pc = 0x2128D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2128d8;
        }
    }
    ctx->pc = 0x2128F4u;
    // 0x2128f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2128f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2128f8:
    // 0x2128f8: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x2128f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
    // 0x2128fc: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x2128fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_212900:
    // 0x212900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x212900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x212904: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x212904u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x212908: 0x55e0ffda  bnel        $t7, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x212908u;
    {
        const bool branch_taken_0x212908 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x212908) {
            ctx->pc = 0x21290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212908u;
            // 0x21290c: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212874;
        }
    }
    ctx->pc = 0x212910u;
    // 0x212910: 0x29cf0004  slti        $t7, $t6, 0x4
    ctx->pc = 0x212910u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4) ? 1 : 0);
label_212914:
    // 0x212914: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x212914u;
    {
        const bool branch_taken_0x212914 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x212918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212914u;
        // 0x212918: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212914) {
            ctx->pc = 0x21294Cu;
            goto label_21294c;
        }
    }
    ctx->pc = 0x21291Cu;
    // 0x21291c: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x21291cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x212920: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x212920u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212924: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x212924u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_212928:
    // 0x212928: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x212928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21292c: 0x25ad0094  addiu       $t5, $t5, 0x94
    ctx->pc = 0x21292cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 148));
    // 0x212930: 0x2a2f0004  slti        $t7, $s1, 0x4
    ctx->pc = 0x212930u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x212934: 0x0  nop
    ctx->pc = 0x212934u;
    // NOP
    // 0x212938: 0x0  nop
    ctx->pc = 0x212938u;
    // NOP
    // 0x21293c: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21293Cu;
    {
        const bool branch_taken_0x21293c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x212940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21293Cu;
        // 0x212940: 0x25ce0094  addiu       $t6, $t6, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21293c) {
            ctx->pc = 0x212928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212928;
        }
    }
    ctx->pc = 0x212944u;
    // 0x212944: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x212944u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x212948: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x212948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_21294c:
    // 0x21294c: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21294cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212950: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x212950u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212954: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212958: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x212958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21295c: 0xc0849da  jal         func_212768
    ctx->pc = 0x21295Cu;
    SET_GPR_U32(ctx, 31, 0x212964u);
    ctx->pc = 0x212960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21295Cu;
    // 0x212960: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212768u, 0x21295Cu, 0x212964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212964u;
label_212964:
    // 0x212964: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x212964u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_212968:
    // 0x212968: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x212968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21296c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x21296cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212970: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x212970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212974: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x212974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212978: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x212978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21297c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21297cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212980: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x212980u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x212984: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x212984u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212988: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x212988u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21298c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21298cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212990: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x212990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x212994: 0x3e00008  jr          $ra
    ctx->pc = 0x212994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212994u;
        // 0x212998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21299Cu;
label_21299c:
    // 0x21299c: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x21299Cu;
    {
        const bool branch_taken_0x21299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21299Cu;
        // 0x2129a0: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21299c) {
            ctx->pc = 0x2128C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2128c4;
        }
    }
    ctx->pc = 0x2129A4u;
    // 0x2129a4: 0x0  nop
    ctx->pc = 0x2129a4u;
    // NOP
}
