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

// Function: sub_002194B0
// Address: 0x2194b0 - 0x2197d8
void sub_002194B0_0x2194b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002194B0_0x2194b0");
#endif

    switch (ctx->pc) {
        case 0x2194ccu: goto label_2194cc;
        case 0x2194dcu: goto label_2194dc;
        case 0x21955cu: goto label_21955c;
        case 0x219574u: goto label_219574;
        case 0x2195b0u: goto label_2195b0;
        case 0x2195c0u: goto label_2195c0;
        case 0x219600u: goto label_219600;
        case 0x219610u: goto label_219610;
        case 0x21965cu: goto label_21965c;
        case 0x219698u: goto label_219698;
        case 0x21972cu: goto label_21972c;
        case 0x219744u: goto label_219744;
        case 0x219770u: goto label_219770;
        case 0x21977cu: goto label_21977c;
        case 0x2197a4u: goto label_2197a4;
        case 0x2197acu: goto label_2197ac;
        default: break;
    }

    ctx->pc = 0x2194b0u;

label_2194b0:
    // 0x2194b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2194b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2194b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2194b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2194b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2194b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2194bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2194bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2194c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2194c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2194c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2194C4u;
    SET_GPR_U32(ctx, 31, 0x2194CCu);
    ctx->pc = 0x2194C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194C4u;
    // 0x2194c8: 0x24841280  addiu       $a0, $a0, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2194C4u, 0x2194CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194CCu;
label_2194cc:
    // 0x2194cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2194ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2194d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2194d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2194d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2194D4u;
    SET_GPR_U32(ctx, 31, 0x2194DCu);
    ctx->pc = 0x2194D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194D4u;
    // 0x2194d8: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2194D4u, 0x2194DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194DCu;
label_2194dc:
    // 0x2194dc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2194dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2194e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2194e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2194e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2194e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2194e8: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x2194e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x2194ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2194ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2194f0: 0x8043e52  j           func_10F948
    ctx->pc = 0x2194F0u;
    ctx->pc = 0x2194F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194F0u;
    // 0x2194f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2194F8u;
    // 0x2194f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2194f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2194fc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2194fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219500: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x219500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x219504: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x219504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x219508: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x219508u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21950c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x219510: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x219510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x219514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x219514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219518: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x219518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21951c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21951cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219520: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x219520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x219524: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x219524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219528: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x219528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21952c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219530: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x219530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x219534: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219538: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x219538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21953c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21953cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219540: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x219540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x219544: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x219544u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x219548: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x219548u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21954c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21954cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x219550: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x219550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x219554: 0xc0844dc  jal         func_211370
    ctx->pc = 0x219554u;
    SET_GPR_U32(ctx, 31, 0x21955Cu);
    ctx->pc = 0x219558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219554u;
    // 0x219558: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x219554u, 0x21955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21955Cu;
label_21955c:
    // 0x21955c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219564: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219568: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21956c: 0xc084520  jal         func_211480
    ctx->pc = 0x21956Cu;
    SET_GPR_U32(ctx, 31, 0x219574u);
    ctx->pc = 0x219570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21956Cu;
    // 0x219570: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21956Cu, 0x219574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219574u;
label_219574:
    // 0x219574: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x219574u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219578: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x219578u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21957c: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x21957Cu;
    {
        const bool branch_taken_0x21957c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x219580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21957Cu;
        // 0x219580: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21957c) {
            ctx->pc = 0x21969Cu;
            goto label_21969c;
        }
    }
    ctx->pc = 0x219584u;
    // 0x219584: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x219584u;
    {
        const bool branch_taken_0x219584 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x219584) {
            ctx->pc = 0x219594u;
            goto label_219594;
        }
    }
    ctx->pc = 0x21958Cu;
    // 0x21958c: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21958cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x219590: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_219594:
    // 0x219594: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x219594u;
    {
        const bool branch_taken_0x219594 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x219598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219594u;
        // 0x219598: 0x29cf0032  slti        $t7, $t6, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219594) {
            ctx->pc = 0x219648u;
            goto label_219648;
        }
    }
    ctx->pc = 0x21959Cu;
    // 0x21959c: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x21959cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195a0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2195a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2195a4: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2195a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2195a8: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x2195a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195ac: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x2195acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_2195b0:
    // 0x2195b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2195b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2195b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195b8: 0xc084bc0  jal         func_212F00
    ctx->pc = 0x2195B8u;
    SET_GPR_U32(ctx, 31, 0x2195C0u);
    ctx->pc = 0x2195BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195B8u;
    // 0x2195bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212F00u, 0x2195B8u, 0x2195C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195C0u;
label_2195c0:
    // 0x2195c0: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2195C0u;
    {
        const bool branch_taken_0x2195c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2195C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195C0u;
        // 0x2195c4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195c0) {
            ctx->pc = 0x21969Cu;
            goto label_21969c;
        }
    }
    ctx->pc = 0x2195C8u;
    // 0x2195c8: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x2195c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x2195cc: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x2195CCu;
    {
        const bool branch_taken_0x2195cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195CCu;
        // 0x2195d0: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195cc) {
            ctx->pc = 0x219634u;
            goto label_219634;
        }
    }
    ctx->pc = 0x2195D4u;
    // 0x2195d4: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x2195d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x2195d8: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x2195d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x2195dc: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x2195DCu;
    {
        const bool branch_taken_0x2195dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195DCu;
        // 0x2195e0: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195dc) {
            ctx->pc = 0x2196D0u;
            goto label_2196d0;
        }
    }
    ctx->pc = 0x2195E4u;
    // 0x2195e4: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x2195e4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2195e8: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x2195e8u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x2195ec: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x2195ecu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x2195f0: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2195f0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2195f4: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x2195f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2195f8: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x2195f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2195fc: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x2195fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_219600:
    // 0x219600: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x219600u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x219604: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x219604u;
    {
        const bool branch_taken_0x219604 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x219604) {
            ctx->pc = 0x219608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219604u;
            // 0x219608: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219630u;
            goto label_219630;
        }
    }
    ctx->pc = 0x21960Cu;
    // 0x21960c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21960cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_219610:
    // 0x219610: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x219610u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219614: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x219614u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x219618: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x219618u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21961c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21961cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x219620: 0x0  nop
    ctx->pc = 0x219620u;
    // NOP
    // 0x219624: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219624u;
    {
        const bool branch_taken_0x219624 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x219628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219624u;
        // 0x219628: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219624) {
            ctx->pc = 0x219610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219610;
        }
    }
    ctx->pc = 0x21962Cu;
    // 0x21962c: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x21962cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_219630:
    // 0x219630: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x219630u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_219634:
    // 0x219634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219638: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x219638u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21963c: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21963Cu;
    {
        const bool branch_taken_0x21963c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21963c) {
            ctx->pc = 0x219640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21963Cu;
            // 0x219640: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2195B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2195b0;
        }
    }
    ctx->pc = 0x219644u;
    // 0x219644: 0x29cf0032  slti        $t7, $t6, 0x32
    ctx->pc = 0x219644u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
label_219648:
    // 0x219648: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x219648u;
    {
        const bool branch_taken_0x219648 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219648u;
        // 0x21964c: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219648) {
            ctx->pc = 0x219680u;
            goto label_219680;
        }
    }
    ctx->pc = 0x219650u;
    // 0x219650: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x219650u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x219654: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x219654u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219658: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x219658u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_21965c:
    // 0x21965c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21965cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219660: 0x25ad00a4  addiu       $t5, $t5, 0xA4
    ctx->pc = 0x219660u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 164));
    // 0x219664: 0x2a2f0032  slti        $t7, $s1, 0x32
    ctx->pc = 0x219664u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x219668: 0x0  nop
    ctx->pc = 0x219668u;
    // NOP
    // 0x21966c: 0x0  nop
    ctx->pc = 0x21966cu;
    // NOP
    // 0x219670: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219670u;
    {
        const bool branch_taken_0x219670 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x219674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219670u;
        // 0x219674: 0x25ce00a4  addiu       $t6, $t6, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219670) {
            ctx->pc = 0x21965Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21965c;
        }
    }
    ctx->pc = 0x219678u;
    // 0x219678: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x219678u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x21967c: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x21967cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_219680:
    // 0x219680: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x219680u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219684: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x219684u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219688: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x219688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21968c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21968cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x219690: 0xc08652c  jal         func_2194B0
    ctx->pc = 0x219690u;
    SET_GPR_U32(ctx, 31, 0x219698u);
    ctx->pc = 0x219694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219690u;
    // 0x219694: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2194B0u;
    goto label_2194b0;
    ctx->pc = 0x219698u;
label_219698:
    // 0x219698: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x219698u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21969c:
    // 0x21969c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21969cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2196a0: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x2196a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2196a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2196a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2196a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2196ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2196acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2196b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2196b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2196b4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2196b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2196b8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2196b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2196bc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2196bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2196c0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2196c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2196c4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2196c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2196c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2196C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2196CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196C8u;
        // 0x2196cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2196C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2196D0u;
label_2196d0:
    // 0x2196d0: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x2196D0u;
    {
        const bool branch_taken_0x2196d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196D0u;
        // 0x2196d4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196d0) {
            ctx->pc = 0x219600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219600;
        }
    }
    ctx->pc = 0x2196D8u;
    // 0x2196d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2196d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2196dc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2196dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2196e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2196e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2196e4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2196e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2196e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2196e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2196ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2196ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2196f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2196f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196f4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2196f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2196f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2196f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2196fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2196fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x219700: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219704: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x219708: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x219708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21970c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x219710: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219714: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x219714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x219718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21971c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21971cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x219720: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x219720u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219724: 0xc084612  jal         func_211848
    ctx->pc = 0x219724u;
    SET_GPR_U32(ctx, 31, 0x21972Cu);
    ctx->pc = 0x219728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219724u;
    // 0x219728: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x219724u, 0x21972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21972Cu;
label_21972c:
    // 0x21972c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219730: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219734: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219738: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21973c: 0xc084654  jal         func_211950
    ctx->pc = 0x21973Cu;
    SET_GPR_U32(ctx, 31, 0x219744u);
    ctx->pc = 0x219740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21973Cu;
    // 0x219740: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21973Cu, 0x219744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219744u;
label_219744:
    // 0x219744: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x219744u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219748: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x219748u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21974c: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21974Cu;
    {
        const bool branch_taken_0x21974c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x219750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21974Cu;
        // 0x219750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21974c) {
            ctx->pc = 0x2197ACu;
            goto label_2197ac;
        }
    }
    ctx->pc = 0x219754u;
    // 0x219754: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x219754u;
    {
        const bool branch_taken_0x219754 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x219754) {
            ctx->pc = 0x219764u;
            goto label_219764;
        }
    }
    ctx->pc = 0x21975Cu;
    // 0x21975c: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21975cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x219760: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_219764:
    // 0x219764: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x219764u;
    {
        const bool branch_taken_0x219764 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x219768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219764u;
        // 0x219768: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219764) {
            ctx->pc = 0x219798u;
            goto label_219798;
        }
    }
    ctx->pc = 0x21976Cu;
    // 0x21976c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219770:
    // 0x219770: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219774: 0xc084c14  jal         func_213050
    ctx->pc = 0x219774u;
    SET_GPR_U32(ctx, 31, 0x21977Cu);
    ctx->pc = 0x219778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219774u;
    // 0x219778: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213050u, 0x219774u, 0x21977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21977Cu;
label_21977c:
    // 0x21977c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21977Cu;
    {
        const bool branch_taken_0x21977c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x219780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21977Cu;
        // 0x219780: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21977c) {
            ctx->pc = 0x2197D0u;
            goto label_2197d0;
        }
    }
    ctx->pc = 0x219784u;
    // 0x219784: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219788: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x219788u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21978c: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21978Cu;
    {
        const bool branch_taken_0x21978c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x219790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21978Cu;
        // 0x219790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21978c) {
            ctx->pc = 0x219770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219770;
        }
    }
    ctx->pc = 0x219794u;
    // 0x219794: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x219794u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_219798:
    // 0x219798: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x219798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21979c: 0xc08652c  jal         func_2194B0
    ctx->pc = 0x21979Cu;
    SET_GPR_U32(ctx, 31, 0x2197A4u);
    ctx->pc = 0x2197A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21979Cu;
    // 0x2197a0: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2194B0u;
    goto label_2194b0;
    ctx->pc = 0x2197A4u;
label_2197a4:
    // 0x2197a4: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x2197a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2197a8: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x2197a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_2197ac:
    // 0x2197ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2197acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2197b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2197b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2197b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2197b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2197b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2197b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2197bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2197bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2197c0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2197c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2197c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2197c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2197c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2197C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197C8u;
        // 0x2197cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2197C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2197D0u;
label_2197d0:
    // 0x2197d0: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x2197D0u;
    {
        const bool branch_taken_0x2197d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197D0u;
        // 0x2197d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197d0) {
            ctx->pc = 0x2197ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2197ac;
        }
    }
    ctx->pc = 0x2197D8u;
}
