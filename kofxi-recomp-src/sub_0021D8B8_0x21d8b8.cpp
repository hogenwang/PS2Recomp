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

// Function: sub_0021D8B8
// Address: 0x21d8b8 - 0x21dbe0
void sub_0021D8B8_0x21d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D8B8_0x21d8b8");
#endif

    switch (ctx->pc) {
        case 0x21d8d4u: goto label_21d8d4;
        case 0x21d8e4u: goto label_21d8e4;
        case 0x21d964u: goto label_21d964;
        case 0x21d97cu: goto label_21d97c;
        case 0x21d9b8u: goto label_21d9b8;
        case 0x21d9c8u: goto label_21d9c8;
        case 0x21da08u: goto label_21da08;
        case 0x21da18u: goto label_21da18;
        case 0x21da64u: goto label_21da64;
        case 0x21daa0u: goto label_21daa0;
        case 0x21db34u: goto label_21db34;
        case 0x21db4cu: goto label_21db4c;
        case 0x21db78u: goto label_21db78;
        case 0x21db84u: goto label_21db84;
        case 0x21dbacu: goto label_21dbac;
        case 0x21dbb4u: goto label_21dbb4;
        default: break;
    }

    ctx->pc = 0x21d8b8u;

label_21d8b8:
    // 0x21d8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d8c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d8cc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D8CCu;
    SET_GPR_U32(ctx, 31, 0x21D8D4u);
    ctx->pc = 0x21D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8CCu;
    // 0x21d8d0: 0x24841a28  addiu       $a0, $a0, 0x1A28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D8CCu, 0x21D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8D4u;
label_21d8d4:
    // 0x21d8d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d8d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D8DCu;
    SET_GPR_U32(ctx, 31, 0x21D8E4u);
    ctx->pc = 0x21D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8DCu;
    // 0x21d8e0: 0x24841888  addiu       $a0, $a0, 0x1888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21D8DCu, 0x21D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8E4u;
label_21d8e4:
    // 0x21d8e4: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x21d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x21d8e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d8ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d8f0: 0x24841a48  addiu       $a0, $a0, 0x1A48
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6728));
    // 0x21d8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d8f8: 0x8043e52  j           func_10F948
    ctx->pc = 0x21D8F8u;
    ctx->pc = 0x21D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8F8u;
    // 0x21d8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21D900u;
    // 0x21d900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21d904: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21d904u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d908: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21d90c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21d910: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21d910u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21d914: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21d918: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21d91c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21d91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d920: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21d920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21d924: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21d924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d928: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21d92c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21d92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d930: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21d934: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x21d934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x21d938: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21d93c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21d93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d940: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x21d940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21d944: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21d944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d948: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x21d948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21d94c: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x21d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x21d950: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x21d950u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d954: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21d954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21d958: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x21d958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x21d95c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D95Cu;
    SET_GPR_U32(ctx, 31, 0x21D964u);
    ctx->pc = 0x21D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D95Cu;
    // 0x21d960: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21D95Cu, 0x21D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D964u;
label_21d964:
    // 0x21d964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d96c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21d96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d970: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21d970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d974: 0xc084520  jal         func_211480
    ctx->pc = 0x21D974u;
    SET_GPR_U32(ctx, 31, 0x21D97Cu);
    ctx->pc = 0x21D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D974u;
    // 0x21d978: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21D974u, 0x21D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D97Cu;
label_21d97c:
    // 0x21d97c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21d97cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d980: 0x29cf0006  slti        $t7, $t6, 0x6
    ctx->pc = 0x21d980u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21d984: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x21D984u;
    {
        const bool branch_taken_0x21d984 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D984u;
        // 0x21d988: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d984) {
            ctx->pc = 0x21DAA4u;
            goto label_21daa4;
        }
    }
    ctx->pc = 0x21D98Cu;
    // 0x21d98c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D98Cu;
    {
        const bool branch_taken_0x21d98c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21d98c) {
            ctx->pc = 0x21D99Cu;
            goto label_21d99c;
        }
    }
    ctx->pc = 0x21D994u;
    // 0x21d994: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x21d994u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21d998: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21d998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21d99c:
    // 0x21d99c: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x21D99Cu;
    {
        const bool branch_taken_0x21d99c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D99Cu;
        // 0x21d9a0: 0x29cf0005  slti        $t7, $t6, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d99c) {
            ctx->pc = 0x21DA50u;
            goto label_21da50;
        }
    }
    ctx->pc = 0x21D9A4u;
    // 0x21d9a4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x21d9a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9a8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x21d9a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d9ac: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21d9acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21d9b0: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x21d9b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9b4: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x21d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_21d9b8:
    // 0x21d9b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21d9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9c0: 0xc084bc0  jal         func_212F00
    ctx->pc = 0x21D9C0u;
    SET_GPR_U32(ctx, 31, 0x21D9C8u);
    ctx->pc = 0x21D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9C0u;
    // 0x21d9c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212F00u, 0x21D9C0u, 0x21D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9C8u;
label_21d9c8:
    // 0x21d9c8: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21D9C8u;
    {
        const bool branch_taken_0x21d9c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9C8u;
        // 0x21d9cc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9c8) {
            ctx->pc = 0x21DAA4u;
            goto label_21daa4;
        }
    }
    ctx->pc = 0x21D9D0u;
    // 0x21d9d0: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x21d9d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x21d9d4: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x21D9D4u;
    {
        const bool branch_taken_0x21d9d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9D4u;
        // 0x21d9d8: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9d4) {
            ctx->pc = 0x21DA3Cu;
            goto label_21da3c;
        }
    }
    ctx->pc = 0x21D9DCu;
    // 0x21d9dc: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x21d9dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x21d9e0: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21d9e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x21d9e4: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x21D9E4u;
    {
        const bool branch_taken_0x21d9e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9E4u;
        // 0x21d9e8: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9e4) {
            ctx->pc = 0x21DAD8u;
            goto label_21dad8;
        }
    }
    ctx->pc = 0x21D9ECu;
    // 0x21d9ec: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x21d9ecu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21d9f0: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x21d9f0u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x21d9f4: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x21d9f4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x21d9f8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x21d9f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x21d9fc: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x21d9fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x21da00: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x21da00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21da04: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x21da04u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_21da08:
    // 0x21da08: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21da08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21da0c: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x21DA0Cu;
    {
        const bool branch_taken_0x21da0c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x21da0c) {
            ctx->pc = 0x21DA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA0Cu;
            // 0x21da10: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA38u;
            goto label_21da38;
        }
    }
    ctx->pc = 0x21DA14u;
    // 0x21da14: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21da14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21da18:
    // 0x21da18: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21da18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21da1c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21da1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21da20: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x21da20u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21da24: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21da28: 0x0  nop
    ctx->pc = 0x21da28u;
    // NOP
    // 0x21da2c: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21DA2Cu;
    {
        const bool branch_taken_0x21da2c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x21DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA2Cu;
        // 0x21da30: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da2c) {
            ctx->pc = 0x21DA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21da18;
        }
    }
    ctx->pc = 0x21DA34u;
    // 0x21da34: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x21da34u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_21da38:
    // 0x21da38: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21da38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21da3c:
    // 0x21da3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21da3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21da40: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x21da40u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21da44: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21DA44u;
    {
        const bool branch_taken_0x21da44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21da44) {
            ctx->pc = 0x21DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA44u;
            // 0x21da48: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d9b8;
        }
    }
    ctx->pc = 0x21DA4Cu;
    // 0x21da4c: 0x29cf0005  slti        $t7, $t6, 0x5
    ctx->pc = 0x21da4cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)5) ? 1 : 0);
label_21da50:
    // 0x21da50: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21DA50u;
    {
        const bool branch_taken_0x21da50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA50u;
        // 0x21da54: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da50) {
            ctx->pc = 0x21DA88u;
            goto label_21da88;
        }
    }
    ctx->pc = 0x21DA58u;
    // 0x21da58: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x21da58u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x21da5c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x21da5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21da60: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_21da64:
    // 0x21da64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21da64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21da68: 0x25ad00a4  addiu       $t5, $t5, 0xA4
    ctx->pc = 0x21da68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 164));
    // 0x21da6c: 0x2a2f0005  slti        $t7, $s1, 0x5
    ctx->pc = 0x21da6cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x21da70: 0x0  nop
    ctx->pc = 0x21da70u;
    // NOP
    // 0x21da74: 0x0  nop
    ctx->pc = 0x21da74u;
    // NOP
    // 0x21da78: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21DA78u;
    {
        const bool branch_taken_0x21da78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA78u;
        // 0x21da7c: 0x25ce00a4  addiu       $t6, $t6, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da78) {
            ctx->pc = 0x21DA64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21da64;
        }
    }
    ctx->pc = 0x21DA80u;
    // 0x21da80: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x21da80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x21da84: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x21da84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_21da88:
    // 0x21da88: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21da88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21da8c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21da8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21da90: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21da94: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21da94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21da98: 0xc08762e  jal         func_21D8B8
    ctx->pc = 0x21DA98u;
    SET_GPR_U32(ctx, 31, 0x21DAA0u);
    ctx->pc = 0x21DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA98u;
    // 0x21da9c: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D8B8u;
    goto label_21d8b8;
    ctx->pc = 0x21DAA0u;
label_21daa0:
    // 0x21daa0: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x21daa0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21daa4:
    // 0x21daa4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21daa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21daa8: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x21daa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21daac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21daacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21dab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21dab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dab4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21dab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21dab8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21dab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21dabc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21dabcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21dac0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21dac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21dac4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x21dac4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21dac8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21dac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21dacc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21daccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21dad0: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAD0u;
        // 0x21dad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DAD8u;
label_21dad8:
    // 0x21dad8: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x21DAD8u;
    {
        const bool branch_taken_0x21dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAD8u;
        // 0x21dadc: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dad8) {
            ctx->pc = 0x21DA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21da08;
        }
    }
    ctx->pc = 0x21DAE0u;
    // 0x21dae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21dae4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21dae4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21dae8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21daec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21daecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21daf0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21daf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21daf8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21daf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dafc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21db00: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x21db00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x21db04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21db08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21db08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db0c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21db10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21db10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21db18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21db18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db1c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21db20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21db20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db24: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21db24u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21db28: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x21db28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21db2c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21DB2Cu;
    SET_GPR_U32(ctx, 31, 0x21DB34u);
    ctx->pc = 0x21DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB2Cu;
    // 0x21db30: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21DB2Cu, 0x21DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB34u;
label_21db34:
    // 0x21db34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21db34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21db38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db3c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21db40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21db40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db44: 0xc084654  jal         func_211950
    ctx->pc = 0x21DB44u;
    SET_GPR_U32(ctx, 31, 0x21DB4Cu);
    ctx->pc = 0x21DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB44u;
    // 0x21db48: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21DB44u, 0x21DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB4Cu;
label_21db4c:
    // 0x21db4c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21db4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21db50: 0x29cf0006  slti        $t7, $t6, 0x6
    ctx->pc = 0x21db50u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21db54: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21DB54u;
    {
        const bool branch_taken_0x21db54 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB54u;
        // 0x21db58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db54) {
            ctx->pc = 0x21DBB4u;
            goto label_21dbb4;
        }
    }
    ctx->pc = 0x21DB5Cu;
    // 0x21db5c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DB5Cu;
    {
        const bool branch_taken_0x21db5c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21db5c) {
            ctx->pc = 0x21DB6Cu;
            goto label_21db6c;
        }
    }
    ctx->pc = 0x21DB64u;
    // 0x21db64: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x21db64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21db68: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21db68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21db6c:
    // 0x21db6c: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x21DB6Cu;
    {
        const bool branch_taken_0x21db6c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB6Cu;
        // 0x21db70: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db6c) {
            ctx->pc = 0x21DBA0u;
            goto label_21dba0;
        }
    }
    ctx->pc = 0x21DB74u;
    // 0x21db74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21db74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21db78:
    // 0x21db78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21db78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db7c: 0xc084c14  jal         func_213050
    ctx->pc = 0x21DB7Cu;
    SET_GPR_U32(ctx, 31, 0x21DB84u);
    ctx->pc = 0x21DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB7Cu;
    // 0x21db80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213050u, 0x21DB7Cu, 0x21DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB84u;
label_21db84:
    // 0x21db84: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21DB84u;
    {
        const bool branch_taken_0x21db84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB84u;
        // 0x21db88: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db84) {
            ctx->pc = 0x21DBD8u;
            goto label_21dbd8;
        }
    }
    ctx->pc = 0x21DB8Cu;
    // 0x21db8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21db8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21db90: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x21db90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21db94: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21DB94u;
    {
        const bool branch_taken_0x21db94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB94u;
        // 0x21db98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db94) {
            ctx->pc = 0x21DB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21db78;
        }
    }
    ctx->pc = 0x21DB9Cu;
    // 0x21db9c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21db9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21dba0:
    // 0x21dba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dba4: 0xc08762e  jal         func_21D8B8
    ctx->pc = 0x21DBA4u;
    SET_GPR_U32(ctx, 31, 0x21DBACu);
    ctx->pc = 0x21DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBA4u;
    // 0x21dba8: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D8B8u;
    goto label_21d8b8;
    ctx->pc = 0x21DBACu;
label_21dbac:
    // 0x21dbac: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x21dbacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21dbb0: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x21dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21dbb4:
    // 0x21dbb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21dbb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dbb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21dbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21dbbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21dbbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dbc0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21dbc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21dbc4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21dbc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21dbc8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21dbc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21dbcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21dbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21dbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x21DBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBD0u;
        // 0x21dbd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DBD8u;
label_21dbd8:
    // 0x21dbd8: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x21DBD8u;
    {
        const bool branch_taken_0x21dbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBD8u;
        // 0x21dbdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbd8) {
            ctx->pc = 0x21DBB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21dbb4;
        }
    }
    ctx->pc = 0x21DBE0u;
}
