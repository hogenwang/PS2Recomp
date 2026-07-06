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

// Function: sub_00221FB0
// Address: 0x221fb0 - 0x2220e8
void sub_00221FB0_0x221fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221FB0_0x221fb0");
#endif

    switch (ctx->pc) {
        case 0x221fe4u: goto label_221fe4;
        case 0x222000u: goto label_222000;
        case 0x22202cu: goto label_22202c;
        case 0x222050u: goto label_222050;
        case 0x222060u: goto label_222060;
        case 0x222078u: goto label_222078;
        case 0x222088u: goto label_222088;
        case 0x222090u: goto label_222090;
        case 0x2220b8u: goto label_2220b8;
        case 0x2220c0u: goto label_2220c0;
        default: break;
    }

    ctx->pc = 0x221fb0u;

    // 0x221fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221fb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221fbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x221fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x221fc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x221fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x221fc4: 0x8c8e1044  lw          $t6, 0x1044($a0)
    ctx->pc = 0x221fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x221fc8: 0x11c0003d  beqz        $t6, . + 4 + (0x3D << 2)
    ctx->pc = 0x221FC8u;
    {
        const bool branch_taken_0x221fc8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FC8u;
        // 0x221fcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fc8) {
            ctx->pc = 0x2220C0u;
            goto label_2220c0;
        }
    }
    ctx->pc = 0x221FD0u;
    // 0x221fd0: 0x8c901040  lw          $s0, 0x1040($a0)
    ctx->pc = 0x221fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4160)));
    // 0x221fd4: 0x2492083c  addiu       $s2, $a0, 0x83C
    ctx->pc = 0x221fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 2108));
    // 0x221fd8: 0x20e782a  slt         $t7, $s0, $t6
    ctx->pc = 0x221fd8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x221fdc: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x221FDCu;
    SET_GPR_U32(ctx, 31, 0x221FE4u);
    ctx->pc = 0x221FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FDCu;
    // 0x221fe0: 0x1cf800a  movz        $s0, $t6, $t7 (Delay Slot)
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE80u, 0x221FDCu, 0x221FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FE4u;
label_221fe4:
    // 0x221fe4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x221fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x221fe8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x221fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fec: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x221fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x221ff0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ff4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x221ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x221ff8: 0xc097576  jal         func_25D5D8
    ctx->pc = 0x221FF8u;
    SET_GPR_U32(ctx, 31, 0x222000u);
    ctx->pc = 0x221FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FF8u;
    // 0x221ffc: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D5D8u, 0x221FF8u, 0x222000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222000u;
label_222000:
    // 0x222000: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x222000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222004: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x222004u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x222008: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222008u;
    {
        const bool branch_taken_0x222008 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x22200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222008u;
        // 0x22200c: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222008) {
            ctx->pc = 0x22202Cu;
            goto label_22202c;
        }
    }
    ctx->pc = 0x222010u;
    // 0x222010: 0x8e261044  lw          $a2, 0x1044($s1)
    ctx->pc = 0x222010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4164)));
    // 0x222014: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x222014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x222018: 0x24a5083c  addiu       $a1, $a1, 0x83C
    ctx->pc = 0x222018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2108));
    // 0x22201c: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x22201cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x222020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222024: 0xc049c48  jal         func_127120
    ctx->pc = 0x222024u;
    SET_GPR_U32(ctx, 31, 0x22202Cu);
    ctx->pc = 0x222028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222024u;
    // 0x222028: 0xae261044  sw          $a2, 0x1044($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4164), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x222024u, 0x22202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22202Cu;
label_22202c:
    // 0x22202c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22202Cu;
    {
        const bool branch_taken_0x22202c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x222030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22202Cu;
        // 0x222030: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22202c) {
            ctx->pc = 0x222050u;
            goto label_222050;
        }
    }
    ctx->pc = 0x222034u;
    // 0x222034: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x222034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x222038: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x222038u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22203c: 0x24842d38  addiu       $a0, $a0, 0x2D38
    ctx->pc = 0x22203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11576));
    // 0x222040: 0x24e72d48  addiu       $a3, $a3, 0x2D48
    ctx->pc = 0x222040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11592));
    // 0x222044: 0x2405010f  addiu       $a1, $zero, 0x10F
    ctx->pc = 0x222044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x222048: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x222048u;
    SET_GPR_U32(ctx, 31, 0x222050u);
    ctx->pc = 0x22204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222048u;
    // 0x22204c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x222048u, 0x222050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222050u;
label_222050:
    // 0x222050: 0x6010019  bgez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x222050u;
    {
        const bool branch_taken_0x222050 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x222050) {
            ctx->pc = 0x2220B8u;
            goto label_2220b8;
        }
    }
    ctx->pc = 0x222058u;
    // 0x222058: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222058u;
    SET_GPR_U32(ctx, 31, 0x222060u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222058u, 0x222060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222060u;
label_222060:
    // 0x222060: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x222060u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222064: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x222064u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x222068: 0x51cf001b  beql        $t6, $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x222068u;
    {
        const bool branch_taken_0x222068 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x222068) {
            ctx->pc = 0x22206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222068u;
            // 0x22206c: 0x8e2f1048  lw          $t7, 0x1048($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2220D8u;
            goto label_2220d8;
        }
    }
    ctx->pc = 0x222070u;
    // 0x222070: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222070u;
    SET_GPR_U32(ctx, 31, 0x222078u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222070u, 0x222078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222078u;
label_222078:
    // 0x222078: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22207c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222080: 0xc089144  jal         func_224510
    ctx->pc = 0x222080u;
    SET_GPR_U32(ctx, 31, 0x222088u);
    ctx->pc = 0x222084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222080u;
    // 0x222084: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222080u, 0x222088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222088u;
label_222088:
    // 0x222088: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222088u;
    SET_GPR_U32(ctx, 31, 0x222090u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222088u, 0x222090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222090u;
label_222090:
    // 0x222090: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x222090u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222094: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222098: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22209c: 0x24842d38  addiu       $a0, $a0, 0x2D38
    ctx->pc = 0x22209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11576));
    // 0x2220a0: 0x25082d58  addiu       $t0, $t0, 0x2D58
    ctx->pc = 0x2220a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11608));
    // 0x2220a4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2220a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220a8: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x2220a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x2220ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2220acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2220b0: 0xc089794  jal         func_225E50
    ctx->pc = 0x2220B0u;
    SET_GPR_U32(ctx, 31, 0x2220B8u);
    ctx->pc = 0x2220B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220B0u;
    // 0x2220b4: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x2220B0u, 0x2220B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220B8u;
label_2220b8:
    // 0x2220b8: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2220B8u;
    SET_GPR_U32(ctx, 31, 0x2220C0u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x2220B8u, 0x2220C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220C0u;
label_2220c0:
    // 0x2220c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2220c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2220c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2220c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2220c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2220c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2220ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2220d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2220D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2220D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220D0u;
        // 0x2220d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2220D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2220D8u;
label_2220d8:
    // 0x2220d8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2220dc: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x2220DCu;
    {
        const bool branch_taken_0x2220dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220DCu;
        // 0x2220e0: 0xae2f1048  sw          $t7, 0x1048($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220dc) {
            ctx->pc = 0x2220B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2220b8;
        }
    }
    ctx->pc = 0x2220E4u;
    // 0x2220e4: 0x0  nop
    ctx->pc = 0x2220e4u;
    // NOP
}
