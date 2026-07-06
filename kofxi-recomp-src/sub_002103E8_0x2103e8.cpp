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

// Function: sub_002103E8
// Address: 0x2103e8 - 0x210918
void sub_002103E8_0x2103e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002103E8_0x2103e8");
#endif

    switch (ctx->pc) {
        case 0x210430u: goto label_210430;
        case 0x2104b8u: goto label_2104b8;
        case 0x2104ccu: goto label_2104cc;
        case 0x2104ecu: goto label_2104ec;
        case 0x21054cu: goto label_21054c;
        case 0x210554u: goto label_210554;
        case 0x21057cu: goto label_21057c;
        case 0x2105a0u: goto label_2105a0;
        case 0x2105c8u: goto label_2105c8;
        case 0x2105d8u: goto label_2105d8;
        case 0x21063cu: goto label_21063c;
        case 0x210654u: goto label_210654;
        case 0x2106ccu: goto label_2106cc;
        case 0x2106dcu: goto label_2106dc;
        case 0x2106e0u: goto label_2106e0;
        case 0x210714u: goto label_210714;
        case 0x210758u: goto label_210758;
        case 0x210770u: goto label_210770;
        case 0x2107c8u: goto label_2107c8;
        case 0x210800u: goto label_210800;
        case 0x210820u: goto label_210820;
        case 0x210824u: goto label_210824;
        case 0x21082cu: goto label_21082c;
        case 0x210858u: goto label_210858;
        case 0x2108a4u: goto label_2108a4;
        default: break;
    }

    ctx->pc = 0x2103e8u;

    // 0x2103e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2103ec: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2103ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2103f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2103f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2103f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2103f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2103f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2103f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2103fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2103fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210400: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x210400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x210404: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x210404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210408: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21040c: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x21040cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x210410: 0x122f0011  beq         $s1, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x210410u;
    {
        const bool branch_taken_0x210410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 15));
        ctx->pc = 0x210414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210410u;
        // 0x210414: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210410) {
            ctx->pc = 0x210458u;
            goto label_210458;
        }
    }
    ctx->pc = 0x210418u;
    // 0x210418: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21041c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x21041cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210420: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x210420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    // 0x210424: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210428: 0x2529fc70  addiu       $t1, $t1, -0x390
    ctx->pc = 0x210428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966384));
    // 0x21042c: 0x240502b6  addiu       $a1, $zero, 0x2B6
    ctx->pc = 0x21042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
label_210430:
    // 0x210430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210434: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x210434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21043c: 0x2408d8ee  addiu       $t0, $zero, -0x2712
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x210440: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210444: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210448: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21044c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210450: 0x8084408  j           func_211020
    ctx->pc = 0x210450u;
    ctx->pc = 0x210454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210450u;
    // 0x210454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x210450u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x210458u;
label_210458:
    // 0x210458: 0x808e0028  lb          $t6, 0x28($a0)
    ctx->pc = 0x210458u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21045c: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x21045cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210460: 0x55cf0008  bnel        $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x210460u;
    {
        const bool branch_taken_0x210460 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x210460) {
            ctx->pc = 0x210464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210460u;
            // 0x210464: 0x908d002b  lbu         $t5, 0x2B($a0) (Delay Slot)
            SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210484u;
            goto label_210484;
        }
    }
    ctx->pc = 0x210468u;
    // 0x210468: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21046c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210470: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x210470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    // 0x210474: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210478: 0x2529ff88  addiu       $t1, $t1, -0x78
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967176));
    // 0x21047c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x21047Cu;
    {
        const bool branch_taken_0x21047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21047Cu;
        // 0x210480: 0x240502b8  addiu       $a1, $zero, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21047c) {
            ctx->pc = 0x210430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210430;
        }
    }
    ctx->pc = 0x210484u;
label_210484:
    // 0x210484: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x210484u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210488: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x210488u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x21048c: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x21048cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x210490: 0x55cf0032  bnel        $t6, $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x210490u;
    {
        const bool branch_taken_0x210490 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x210490) {
            ctx->pc = 0x210494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210490u;
            // 0x210494: 0xd8e00  sll         $s1, $t5, 24 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21055Cu;
            goto label_21055c;
        }
    }
    ctx->pc = 0x210498u;
    // 0x210498: 0x8c8f006c  lw          $t7, 0x6C($a0)
    ctx->pc = 0x210498u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x21049c: 0x8c8e0014  lw          $t6, 0x14($a0)
    ctx->pc = 0x21049cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2104a0: 0x8c8d0068  lw          $t5, 0x68($a0)
    ctx->pc = 0x2104a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2104a4: 0x1af3023  subu        $a2, $t5, $t7
    ctx->pc = 0x2104a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2104a8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2104A8u;
    {
        const bool branch_taken_0x2104a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104A8u;
        // 0x2104ac: 0x1cf2821  addu        $a1, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104a8) {
            ctx->pc = 0x2104BCu;
            goto label_2104bc;
        }
    }
    ctx->pc = 0x2104B0u;
    // 0x2104b0: 0xc08909c  jal         func_224270
    ctx->pc = 0x2104B0u;
    SET_GPR_U32(ctx, 31, 0x2104B8u);
    ctx->pc = 0x2104B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2104B0u;
    // 0x2104b4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224270u, 0x2104B0u, 0x2104B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104B8u;
label_2104b8:
    // 0x2104b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2104b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2104bc:
    // 0x2104bc: 0x6410015  bgez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2104BCu;
    {
        const bool branch_taken_0x2104bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2104C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104BCu;
        // 0x2104c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104bc) {
            ctx->pc = 0x210514u;
            goto label_210514;
        }
    }
    ctx->pc = 0x2104C4u;
    // 0x2104c4: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x2104C4u;
    SET_GPR_U32(ctx, 31, 0x2104CCu);
    ctx->pc = 0x2104C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2104C4u;
    // 0x2104c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x2104C4u, 0x2104CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104CCu;
label_2104cc:
    // 0x2104cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2104ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2104d0: 0x8e0a006c  lw          $t2, 0x6C($s0)
    ctx->pc = 0x2104d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2104d4: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2104d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x2104d8: 0x8e0b0068  lw          $t3, 0x68($s0)
    ctx->pc = 0x2104d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2104dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2104dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104e0: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x2104e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    // 0x2104e4: 0x2529ffa0  addiu       $t1, $t1, -0x60
    ctx->pc = 0x2104e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967200));
    // 0x2104e8: 0x240502cd  addiu       $a1, $zero, 0x2CD
    ctx->pc = 0x2104e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 717));
label_2104ec:
    // 0x2104ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2104ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2104f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2104f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2104f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2104f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2104f8: 0x2408d8e9  addiu       $t0, $zero, -0x2717
    ctx->pc = 0x2104f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957289));
    // 0x2104fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2104fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210504: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210508: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21050c: 0x8084408  j           func_211020
    ctx->pc = 0x21050Cu;
    ctx->pc = 0x210510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21050Cu;
    // 0x210510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x21050Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x210514u;
label_210514:
    // 0x210514: 0x5a400010  blezl       $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x210514u;
    {
        const bool branch_taken_0x210514 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x210514) {
            ctx->pc = 0x210518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210514u;
            // 0x210518: 0x920d002b  lbu         $t5, 0x2B($s0) (Delay Slot)
            SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210558u;
            goto label_210558;
        }
    }
    ctx->pc = 0x21051Cu;
    // 0x21051c: 0x8e0f006c  lw          $t7, 0x6C($s0)
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x210520: 0x8e090068  lw          $t1, 0x68($s0)
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x210524: 0x1f24021  addu        $t0, $t7, $s2
    ctx->pc = 0x210524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x210528: 0x152800f4  bne         $t1, $t0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x210528u;
    {
        const bool branch_taken_0x210528 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        ctx->pc = 0x21052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210528u;
        // 0x21052c: 0xae08006c  sw          $t0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210528) {
            ctx->pc = 0x2108FCu;
            goto label_2108fc;
        }
    }
    ctx->pc = 0x210530u;
    // 0x210530: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210534: 0xa211002b  sb          $s1, 0x2B($s0)
    ctx->pc = 0x210534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 17));
    // 0x210538: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21053c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x21053cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210540: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    // 0x210544: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x210544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x210548: 0x240502d5  addiu       $a1, $zero, 0x2D5
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 725));
label_21054c:
    // 0x21054c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21054Cu;
    SET_GPR_U32(ctx, 31, 0x210554u);
    ctx->pc = 0x210550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21054Cu;
    // 0x210550: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21054Cu, 0x210554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210554u;
label_210554:
    // 0x210554: 0x920d002b  lbu         $t5, 0x2B($s0)
    ctx->pc = 0x210554u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_210558:
    // 0x210558: 0xd8e00  sll         $s1, $t5, 24
    ctx->pc = 0x210558u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
label_21055c:
    // 0x21055c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x21055cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210560: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x210560u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x210564: 0x162f006f  bne         $s1, $t7, . + 4 + (0x6F << 2)
    ctx->pc = 0x210564u;
    {
        const bool branch_taken_0x210564 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x210568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210564u;
        // 0x210568: 0xd7600  sll         $t6, $t5, 24 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210564) {
            ctx->pc = 0x210724u;
            goto label_210724;
        }
    }
    ctx->pc = 0x21056Cu;
    // 0x21056c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x21056cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x210570: 0x2613003c  addiu       $s3, $s0, 0x3C
    ctx->pc = 0x210570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x210574: 0xc084434  jal         func_2110D0
    ctx->pc = 0x210574u;
    SET_GPR_U32(ctx, 31, 0x21057Cu);
    ctx->pc = 0x210578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210574u;
    // 0x210578: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110D0u, 0x210574u, 0x21057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21057Cu;
label_21057c:
    // 0x21057c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21057cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x210580: 0x9608003e  lhu         $t0, 0x3E($s0)
    ctx->pc = 0x210580u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x210584: 0x25f4ff70  addiu       $s4, $t7, -0x90
    ctx->pc = 0x210584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967152));
    // 0x210588: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21058c: 0x24e7ffe0  addiu       $a3, $a3, -0x20
    ctx->pc = 0x21058cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x210590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210594: 0x240502e1  addiu       $a1, $zero, 0x2E1
    ctx->pc = 0x210594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 737));
    // 0x210598: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x210598u;
    SET_GPR_U32(ctx, 31, 0x2105A0u);
    ctx->pc = 0x21059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210598u;
    // 0x21059c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x210598u, 0x2105A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105A0u;
label_2105a0:
    // 0x2105a0: 0x9608003e  lhu         $t0, 0x3E($s0)
    ctx->pc = 0x2105a0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x2105a4: 0x55000033  bnel        $t0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2105A4u;
    {
        const bool branch_taken_0x2105a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2105a4) {
            ctx->pc = 0x2105A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2105A4u;
            // 0x2105a8: 0x920f0028  lbu         $t7, 0x28($s0) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210674u;
            goto label_210674;
        }
    }
    ctx->pc = 0x2105ACu;
    // 0x2105ac: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2105acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2105b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2105b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105b4: 0x240502e5  addiu       $a1, $zero, 0x2E5
    ctx->pc = 0x2105b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 741));
    // 0x2105b8: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x2105b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x2105bc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2105bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2105c0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2105C0u;
    SET_GPR_U32(ctx, 31, 0x2105C8u);
    ctx->pc = 0x2105C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105C0u;
    // 0x2105c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2105C0u, 0x2105C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105C8u;
label_2105c8:
    // 0x2105c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2105c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2105cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2105ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105d0: 0xc089056  jal         func_224158
    ctx->pc = 0x2105D0u;
    SET_GPR_U32(ctx, 31, 0x2105D8u);
    ctx->pc = 0x2105D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105D0u;
    // 0x2105d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224158u, 0x2105D0u, 0x2105D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105D8u;
label_2105d8:
    // 0x2105d8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2105d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2105dc: 0x544f0011  bnel        $v0, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2105DCu;
    {
        const bool branch_taken_0x2105dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x2105dc) {
            ctx->pc = 0x2105E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2105DCu;
            // 0x2105e0: 0x9608003e  lhu         $t0, 0x3E($s0) (Delay Slot)
            SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210624u;
            goto label_210624;
        }
    }
    ctx->pc = 0x2105E4u;
    // 0x2105e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2105e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2105e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2105ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2105ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2105f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2105f4: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2105f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x2105f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2105f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2105fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2105fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210600: 0x2529fe18  addiu       $t1, $t1, -0x1E8
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966808));
    // 0x210604: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210608: 0x240502ea  addiu       $a1, $zero, 0x2EA
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 746));
    // 0x21060c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210610: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210614: 0x2408d8e9  addiu       $t0, $zero, -0x2717
    ctx->pc = 0x210614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957289));
    // 0x210618: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x210618u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21061c: 0x8084408  j           func_211020
    ctx->pc = 0x21061Cu;
    ctx->pc = 0x210620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21061Cu;
    // 0x210620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x21061Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x210624u;
label_210624:
    // 0x210624: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210628: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21062c: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x21062cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x210630: 0x240502ec  addiu       $a1, $zero, 0x2EC
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 748));
    // 0x210634: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x210634u;
    SET_GPR_U32(ctx, 31, 0x21063Cu);
    ctx->pc = 0x210638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210634u;
    // 0x210638: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x210634u, 0x21063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21063Cu;
label_21063c:
    // 0x21063c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x21063cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210640: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x210640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x210644: 0xa20f002b  sb          $t7, 0x2B($s0)
    ctx->pc = 0x210644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 15));
    // 0x210648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21064c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210650: 0xae0f0068  sw          $t7, 0x68($s0)
    ctx->pc = 0x210650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 15));
label_210654:
    // 0x210654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21065c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21065cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210660: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210664: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210668: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21066c: 0x3e00008  jr          $ra
    ctx->pc = 0x21066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21066Cu;
        // 0x210670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210674u;
label_210674:
    // 0x210674: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x210674u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x210678: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x210678u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21067c: 0x51e00028  beql        $t7, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x21067Cu;
    {
        const bool branch_taken_0x21067c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x21067c) {
            ctx->pc = 0x210680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21067Cu;
            // 0x210680: 0x920d002b  lbu         $t5, 0x2B($s0) (Delay Slot)
            SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210720u;
            goto label_210720;
        }
    }
    ctx->pc = 0x210684u;
    // 0x210684: 0x8e0c0040  lw          $t4, 0x40($s0)
    ctx->pc = 0x210684u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x210688: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x210688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x21068c: 0xae0c0068  sw          $t4, 0x68($s0)
    ctx->pc = 0x21068cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 12));
    // 0x210690: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x210690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x210694: 0x960f005e  lhu         $t7, 0x5E($s0)
    ctx->pc = 0x210694u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x210698: 0x150f0089  bne         $t0, $t7, . + 4 + (0x89 << 2)
    ctx->pc = 0x210698u;
    {
        const bool branch_taken_0x210698 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x21069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210698u;
        // 0x21069c: 0x310f000f  andi        $t7, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210698) {
            ctx->pc = 0x2108C0u;
            goto label_2108c0;
        }
    }
    ctx->pc = 0x2106A0u;
    // 0x2106a0: 0x8e0f003c  lw          $t7, 0x3C($s0)
    ctx->pc = 0x2106a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2106a4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2106a8: 0x8e0e0044  lw          $t6, 0x44($s0)
    ctx->pc = 0x2106a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2106ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2106acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106b0: 0xae0f004c  sw          $t7, 0x4C($s0)
    ctx->pc = 0x2106b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 15));
    // 0x2106b4: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x2106b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2106b8: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x2106b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
    // 0x2106bc: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2106bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106c0: 0x960f004e  lhu         $t7, 0x4E($s0)
    ctx->pc = 0x2106c0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x2106c4: 0x24050303  addiu       $a1, $zero, 0x303
    ctx->pc = 0x2106c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x2106c8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2106c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2106cc:
    // 0x2106cc: 0xa60f005c  sh          $t7, 0x5C($s0)
    ctx->pc = 0x2106ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 15));
    // 0x2106d0: 0xae0c0050  sw          $t4, 0x50($s0)
    ctx->pc = 0x2106d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 12));
    // 0x2106d4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2106D4u;
    SET_GPR_U32(ctx, 31, 0x2106DCu);
    ctx->pc = 0x2106D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106D4u;
    // 0x2106d8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2106D4u, 0x2106DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106DCu;
label_2106dc:
    // 0x2106dc: 0x8e0e0038  lw          $t6, 0x38($s0)
    ctx->pc = 0x2106dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2106e0:
    // 0x2106e0: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2106e4: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2106E4u;
    {
        const bool branch_taken_0x2106e4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2106E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106E4u;
        // 0x2106e8: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106e4) {
            ctx->pc = 0x210718u;
            goto label_210718;
        }
    }
    ctx->pc = 0x2106ECu;
    // 0x2106ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2106ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2106f0: 0x9608005e  lhu         $t0, 0x5E($s0)
    ctx->pc = 0x2106f0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x2106f4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2106f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2106f8: 0x9609003e  lhu         $t1, 0x3E($s0)
    ctx->pc = 0x2106f8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x2106fc: 0x8e0a0068  lw          $t2, 0x68($s0)
    ctx->pc = 0x2106fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x210700: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    // 0x210704: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x210704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x210708: 0x24050311  addiu       $a1, $zero, 0x311
    ctx->pc = 0x210708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 785));
    // 0x21070c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21070Cu;
    SET_GPR_U32(ctx, 31, 0x210714u);
    ctx->pc = 0x210710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21070Cu;
    // 0x210710: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21070Cu, 0x210714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210714u;
label_210714:
    // 0x210714: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x210714u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_210718:
    // 0x210718: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x210718u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21071c: 0xa20f002b  sb          $t7, 0x2B($s0)
    ctx->pc = 0x21071cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 15));
label_210720:
    // 0x210720: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x210720u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
label_210724:
    // 0x210724: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x210724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x210728: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x21072c: 0x15cfffc9  bne         $t6, $t7, . + 4 + (-0x37 << 2)
    ctx->pc = 0x21072Cu;
    {
        const bool branch_taken_0x21072c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x210730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21072Cu;
        // 0x210730: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21072c) {
            ctx->pc = 0x210654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210654;
        }
    }
    ctx->pc = 0x210734u;
    // 0x210734: 0x8e0f006c  lw          $t7, 0x6C($s0)
    ctx->pc = 0x210734u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x210738: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21073c: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x21073cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x210740: 0x8e0d0068  lw          $t5, 0x68($s0)
    ctx->pc = 0x210740u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x210744: 0x1af3023  subu        $a2, $t5, $t7
    ctx->pc = 0x210744u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x210748: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x210748u;
    {
        const bool branch_taken_0x210748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210748u;
        // 0x21074c: 0x1cf2821  addu        $a1, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210748) {
            ctx->pc = 0x21075Cu;
            goto label_21075c;
        }
    }
    ctx->pc = 0x210750u;
    // 0x210750: 0xc08909c  jal         func_224270
    ctx->pc = 0x210750u;
    SET_GPR_U32(ctx, 31, 0x210758u);
    ctx->pc = 0x210754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210750u;
    // 0x210754: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224270u, 0x210750u, 0x210758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210758u;
label_210758:
    // 0x210758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x210758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21075c:
    // 0x21075c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x21075cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210760: 0x164f000c  bne         $s2, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x210760u;
    {
        const bool branch_taken_0x210760 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        ctx->pc = 0x210764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210760u;
        // 0x210764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210760) {
            ctx->pc = 0x210794u;
            goto label_210794;
        }
    }
    ctx->pc = 0x210768u;
    // 0x210768: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x210768u;
    SET_GPR_U32(ctx, 31, 0x210770u);
    ctx->pc = 0x21076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210768u;
    // 0x21076c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x210768u, 0x210770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210770u;
label_210770:
    // 0x210770: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210774: 0x8e0a006c  lw          $t2, 0x6C($s0)
    ctx->pc = 0x210774u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x210778: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210778u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x21077c: 0x8e0b0068  lw          $t3, 0x68($s0)
    ctx->pc = 0x21077cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x210780: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210784: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x210784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    // 0x210788: 0x25290098  addiu       $t1, $t1, 0x98
    ctx->pc = 0x210788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 152));
    // 0x21078c: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
    ctx->pc = 0x21078Cu;
    {
        const bool branch_taken_0x21078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21078Cu;
        // 0x210790: 0x24050326  addiu       $a1, $zero, 0x326 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 806));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21078c) {
            ctx->pc = 0x2104ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2104ec;
        }
    }
    ctx->pc = 0x210794u;
label_210794:
    // 0x210794: 0x6400025  bltz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x210794u;
    {
        const bool branch_taken_0x210794 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x210798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210794u;
        // 0x210798: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210794) {
            ctx->pc = 0x21082Cu;
            goto label_21082c;
        }
    }
    ctx->pc = 0x21079Cu;
    // 0x21079c: 0x8e08006c  lw          $t0, 0x6C($s0)
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2107a0: 0x25f1ff70  addiu       $s1, $t7, -0x90
    ctx->pc = 0x2107a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967152));
    // 0x2107a4: 0x8e090068  lw          $t1, 0x68($s0)
    ctx->pc = 0x2107a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2107a8: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x2107a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x2107ac: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2107acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2107b0: 0xae08006c  sw          $t0, 0x6C($s0)
    ctx->pc = 0x2107b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
    // 0x2107b4: 0x24e70098  addiu       $a3, $a3, 0x98
    ctx->pc = 0x2107b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
    // 0x2107b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2107b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107bc: 0x2405032a  addiu       $a1, $zero, 0x32A
    ctx->pc = 0x2107bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 810));
    // 0x2107c0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2107C0u;
    SET_GPR_U32(ctx, 31, 0x2107C8u);
    ctx->pc = 0x2107C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2107C0u;
    // 0x2107c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2107C0u, 0x2107C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107C8u;
label_2107c8:
    // 0x2107c8: 0x8e0e0068  lw          $t6, 0x68($s0)
    ctx->pc = 0x2107c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2107cc: 0x8e0f006c  lw          $t7, 0x6C($s0)
    ctx->pc = 0x2107ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2107d0: 0x15cfffa0  bne         $t6, $t7, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2107D0u;
    {
        const bool branch_taken_0x2107d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2107D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107D0u;
        // 0x2107d4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107d0) {
            ctx->pc = 0x210654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210654;
        }
    }
    ctx->pc = 0x2107D8u;
    // 0x2107d8: 0x8e0e0038  lw          $t6, 0x38($s0)
    ctx->pc = 0x2107d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2107dc: 0x15c00015  bnez        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x2107DCu;
    {
        const bool branch_taken_0x2107dc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2107E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107DCu;
        // 0x2107e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107dc) {
            ctx->pc = 0x210834u;
            goto label_210834;
        }
    }
    ctx->pc = 0x2107E4u;
    // 0x2107e4: 0x9608005c  lhu         $t0, 0x5C($s0)
    ctx->pc = 0x2107e4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2107e8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2107ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2107ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107f0: 0x24050331  addiu       $a1, $zero, 0x331
    ctx->pc = 0x2107f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 817));
    // 0x2107f4: 0x24e700b8  addiu       $a3, $a3, 0xB8
    ctx->pc = 0x2107f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x2107f8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2107F8u;
    SET_GPR_U32(ctx, 31, 0x210800u);
    ctx->pc = 0x2107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2107F8u;
    // 0x2107fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2107F8u, 0x210800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210800u;
label_210800:
    // 0x210800: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210804: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x210804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x210808: 0xae0f0068  sw          $t7, 0x68($s0)
    ctx->pc = 0x210808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 15));
    // 0x21080c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210810: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x210810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x210814: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x210814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x210818: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x210818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21081c: 0xa600005e  sh          $zero, 0x5E($s0)
    ctx->pc = 0x21081cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 0));
label_210820:
    // 0x210820: 0xa20f002b  sb          $t7, 0x2B($s0)
    ctx->pc = 0x210820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 15));
label_210824:
    // 0x210824: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x210824u;
    SET_GPR_U32(ctx, 31, 0x21082Cu);
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x210824u, 0x21082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21082Cu;
label_21082c:
    // 0x21082c: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x21082Cu;
    {
        const bool branch_taken_0x21082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21082Cu;
        // 0x210830: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21082c) {
            ctx->pc = 0x210654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210654;
        }
    }
    ctx->pc = 0x210834u;
label_210834:
    // 0x210834: 0x15d30012  bne         $t6, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x210834u;
    {
        const bool branch_taken_0x210834 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 19));
        ctx->pc = 0x210838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210834u;
        // 0x210838: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210834) {
            ctx->pc = 0x210880u;
            goto label_210880;
        }
    }
    ctx->pc = 0x21083Cu;
    // 0x21083c: 0x9608005c  lhu         $t0, 0x5C($s0)
    ctx->pc = 0x21083cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x210840: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210840u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210848: 0x24e700d8  addiu       $a3, $a3, 0xD8
    ctx->pc = 0x210848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 216));
    // 0x21084c: 0x2405033c  addiu       $a1, $zero, 0x33C
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 828));
    // 0x210850: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x210850u;
    SET_GPR_U32(ctx, 31, 0x210858u);
    ctx->pc = 0x210854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210850u;
    // 0x210854: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x210850u, 0x210858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210858u;
label_210858:
    // 0x210858: 0x820f002a  lb          $t7, 0x2A($s0)
    ctx->pc = 0x210858u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x21085c: 0x55e0ff7d  bnel        $t7, $zero, . + 4 + (-0x83 << 2)
    ctx->pc = 0x21085Cu;
    {
        const bool branch_taken_0x21085c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21085c) {
            ctx->pc = 0x210860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21085Cu;
            // 0x210860: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210654;
        }
    }
    ctx->pc = 0x210864u;
    // 0x210864: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x210864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210868: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x210868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x21086c: 0xae0f0068  sw          $t7, 0x68($s0)
    ctx->pc = 0x21086cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 15));
    // 0x210870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210874: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x210874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x210878: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x210878u;
    {
        const bool branch_taken_0x210878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210878u;
        // 0x21087c: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210878) {
            ctx->pc = 0x210820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210820;
        }
    }
    ctx->pc = 0x210880u;
label_210880:
    // 0x210880: 0x55cfff74  bnel        $t6, $t7, . + 4 + (-0x8C << 2)
    ctx->pc = 0x210880u;
    {
        const bool branch_taken_0x210880 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x210880) {
            ctx->pc = 0x210884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210880u;
            // 0x210884: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210654;
        }
    }
    ctx->pc = 0x210888u;
    // 0x210888: 0x9608003e  lhu         $t0, 0x3E($s0)
    ctx->pc = 0x210888u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x21088c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21088cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210894: 0x24050347  addiu       $a1, $zero, 0x347
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 839));
    // 0x210898: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x210898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x21089c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21089Cu;
    SET_GPR_U32(ctx, 31, 0x2108A4u);
    ctx->pc = 0x2108A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21089Cu;
    // 0x2108a0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21089Cu, 0x2108A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108A4u;
label_2108a4:
    // 0x2108a4: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2108a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2108a8: 0xa213002b  sb          $s3, 0x2B($s0)
    ctx->pc = 0x2108a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 19));
    // 0x2108ac: 0xae0f0068  sw          $t7, 0x68($s0)
    ctx->pc = 0x2108acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 15));
    // 0x2108b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2108b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108b4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2108b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2108b8: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x2108B8u;
    {
        const bool branch_taken_0x2108b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108B8u;
        // 0x2108bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108b8) {
            ctx->pc = 0x210824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210824;
        }
    }
    ctx->pc = 0x2108C0u;
label_2108c0:
    // 0x2108c0: 0x55f1ff87  bnel        $t7, $s1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x2108C0u;
    {
        const bool branch_taken_0x2108c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x2108c0) {
            ctx->pc = 0x2108C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108C0u;
            // 0x2108c4: 0x8e0e0038  lw          $t6, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2106E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2106e0;
        }
    }
    ctx->pc = 0x2108C8u;
    // 0x2108c8: 0x8e0e003c  lw          $t6, 0x3C($s0)
    ctx->pc = 0x2108c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2108cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2108ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2108d0: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x2108d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x2108d4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2108d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2108d8: 0xae0e004c  sw          $t6, 0x4C($s0)
    ctx->pc = 0x2108d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 14));
    // 0x2108dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2108dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108e0: 0x8e0d0044  lw          $t5, 0x44($s0)
    ctx->pc = 0x2108e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2108e4: 0x24e70120  addiu       $a3, $a3, 0x120
    ctx->pc = 0x2108e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2108e8: 0x960f004e  lhu         $t7, 0x4E($s0)
    ctx->pc = 0x2108e8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x2108ec: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2108ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108f0: 0xae0d0054  sw          $t5, 0x54($s0)
    ctx->pc = 0x2108f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 13));
    // 0x2108f4: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x2108F4u;
    {
        const bool branch_taken_0x2108f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108F4u;
        // 0x2108f8: 0x2405030b  addiu       $a1, $zero, 0x30B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 779));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108f4) {
            ctx->pc = 0x2106CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2106cc;
        }
    }
    ctx->pc = 0x2108FCu;
label_2108fc:
    // 0x2108fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2108fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210900: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210900u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210904: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x210904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
    // 0x210908: 0x24e7ffa0  addiu       $a3, $a3, -0x60
    ctx->pc = 0x210908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967200));
    // 0x21090c: 0x1000ff0f  b           . + 4 + (-0xF1 << 2)
    ctx->pc = 0x21090Cu;
    {
        const bool branch_taken_0x21090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21090Cu;
        // 0x210910: 0x240502d8  addiu       $a1, $zero, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21090c) {
            ctx->pc = 0x21054Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21054c;
        }
    }
    ctx->pc = 0x210914u;
    // 0x210914: 0x0  nop
    ctx->pc = 0x210914u;
    // NOP
}
