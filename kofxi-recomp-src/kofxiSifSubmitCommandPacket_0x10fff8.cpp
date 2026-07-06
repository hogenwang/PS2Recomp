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

// Function: kofxiSifSubmitCommandPacket
// Address: 0x10fff8 - 0x110130
void kofxiSifSubmitCommandPacket_0x10fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSifSubmitCommandPacket_0x10fff8");
#endif

    switch (ctx->pc) {
        case 0x110080u: goto label_110080;
        case 0x1100e8u: goto label_1100e8;
        case 0x1100fcu: goto label_1100fc;
        case 0x11010cu: goto label_11010c;
        default: break;
    }

    ctx->pc = 0x10fff8u;

    // 0x10fff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10fff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10fffc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x110000: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x110000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x110004: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x110004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110008: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x110008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x11000c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11000cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110010: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x110010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x110014: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x110014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x110018: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x110018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11001c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x110020: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x110020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x110024: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x110024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110028: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x110028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11002c: 0x2c420061  sltiu       $v0, $v0, 0x61
    ctx->pc = 0x11002cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x110030: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110030u;
    {
        const bool branch_taken_0x110030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110030u;
        // 0x110034: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110030) {
            ctx->pc = 0x110040u;
            goto label_110040;
        }
    }
    ctx->pc = 0x110038u;
    // 0x110038: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x110038u;
    {
        const bool branch_taken_0x110038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110038u;
        // 0x11003c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110038) {
            ctx->pc = 0x11010Cu;
            goto label_11010c;
        }
    }
    ctx->pc = 0x110040u;
label_110040:
    // 0x110040: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x110040u;
    {
        const bool branch_taken_0x110040 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x110044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110040u;
        // 0x110044: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110040) {
            ctx->pc = 0x110088u;
            goto label_110088;
        }
    }
    ctx->pc = 0x110048u;
    // 0x110048: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x110048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11004c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x11004cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x110050: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x110050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x110054: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x110054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110058: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x110058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11005c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11005cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x110060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x110060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x110064: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x110064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x110068: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x110068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x11006c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x11006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x110070: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x110070u;
    {
        const bool branch_taken_0x110070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110070u;
        // 0x110074: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110070) {
            ctx->pc = 0x110094u;
            goto label_110094;
        }
    }
    ctx->pc = 0x110078u;
    // 0x110078: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x110078u;
    SET_GPR_U32(ctx, 31, 0x110080u);
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x110078u, 0x110080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110080u;
label_110080:
    // 0x110080: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x110080u;
    {
        const bool branch_taken_0x110080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110080u;
        // 0x110084: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110080) {
            ctx->pc = 0x110098u;
            goto label_110098;
        }
    }
    ctx->pc = 0x110088u;
label_110088:
    // 0x110088: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x110088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11008c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x110090: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x110090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_110094:
    // 0x110094: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x110094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_110098:
    // 0x110098: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x110098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11009c: 0x8c4467e0  lw          $a0, 0x67E0($v0)
    ctx->pc = 0x11009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26592)));
    // 0x1100a0: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1100a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1100a4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1100a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1100a8: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1100a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1100ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1100acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1100b0: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1100b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1100b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1100b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1100b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1100b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1100bc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1100bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1100c0: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1100c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1100c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1100c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1100c8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1100c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1100cc: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1100ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1100d0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1100d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1100d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1100d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1100d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1100d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1100dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100e0: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x1100E0u;
    SET_GPR_U32(ctx, 31, 0x1100E8u);
    ctx->pc = 0x1100E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100E0u;
    // 0x1100e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x1100E0u, 0x1100E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100E8u;
label_1100e8:
    // 0x1100e8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1100e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1100ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1100ECu;
    {
        const bool branch_taken_0x1100ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100ECu;
        // 0x1100f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100ec) {
            ctx->pc = 0x110104u;
            goto label_110104;
        }
    }
    ctx->pc = 0x1100F4u;
    // 0x1100f4: 0xc04340c  jal         func_10D030
    ctx->pc = 0x1100F4u;
    SET_GPR_U32(ctx, 31, 0x1100FCu);
    ctx->pc = 0x1100F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100F4u;
    // 0x1100f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D030u, 0x1100F4u, 0x1100FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100FCu;
label_1100fc:
    // 0x1100fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1100FCu;
    {
        const bool branch_taken_0x1100fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100FCu;
        // 0x110100: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100fc) {
            ctx->pc = 0x110110u;
            goto label_110110;
        }
    }
    ctx->pc = 0x110104u;
label_110104:
    // 0x110104: 0xc043408  jal         func_10D020
    ctx->pc = 0x110104u;
    SET_GPR_U32(ctx, 31, 0x11010Cu);
    ctx->pc = 0x110108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110104u;
    // 0x110108: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D020u, 0x110104u, 0x11010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11010Cu;
label_11010c:
    // 0x11010c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11010cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_110110:
    // 0x110110: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x110110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x110114: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x110114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110118: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x110118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11011c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11011cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110120: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x110120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110124: 0x3e00008  jr          $ra
    ctx->pc = 0x110124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110124u;
        // 0x110128: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11012Cu;
    // 0x11012c: 0x0  nop
    ctx->pc = 0x11012cu;
    // NOP
    if (ctx->pc == 0x11012cu) { ctx->pc = 0x110130u; }
}
