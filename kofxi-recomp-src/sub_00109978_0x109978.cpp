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

// Function: sub_00109978
// Address: 0x109978 - 0x109bb0
void sub_00109978_0x109978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109978_0x109978");
#endif

    switch (ctx->pc) {
        case 0x1099a8u: goto label_1099a8;
        case 0x1099d4u: goto label_1099d4;
        case 0x1099f8u: goto label_1099f8;
        case 0x109aa0u: goto label_109aa0;
        case 0x109aecu: goto label_109aec;
        case 0x109af4u: goto label_109af4;
        case 0x109afcu: goto label_109afc;
        case 0x109b4cu: goto label_109b4c;
        case 0x109b88u: goto label_109b88;
        default: break;
    }

    ctx->pc = 0x109978u;

    // 0x109978: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10997c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109980: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109984: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x109984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10998c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10998cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109990: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x109990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109994: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10999c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1099a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1099A0u;
    SET_GPR_U32(ctx, 31, 0x1099A8u);
    ctx->pc = 0x1099A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099A0u;
    // 0x1099a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1099A0u, 0x1099A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099A8u;
label_1099a8:
    // 0x1099a8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1099a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1099ac: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1099acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1099b0: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1099b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1099b4: 0x2508023  subu        $s0, $s2, $s0
    ctx->pc = 0x1099b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1099b8: 0x2303023  subu        $a2, $s1, $s0
    ctx->pc = 0x1099b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1099bc: 0x28c219a0  slti        $v0, $a2, 0x19A0
    ctx->pc = 0x1099bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6560) ? 1 : 0);
    // 0x1099c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1099C0u;
    {
        const bool branch_taken_0x1099c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099C0u;
        // 0x1099c4: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099c0) {
            ctx->pc = 0x1099DCu;
            goto label_1099dc;
        }
    }
    ctx->pc = 0x1099C8u;
    // 0x1099c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1099c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099cc: 0xc04305a  jal         func_10C168
    ctx->pc = 0x1099CCu;
    SET_GPR_U32(ctx, 31, 0x1099D4u);
    ctx->pc = 0x1099D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099CCu;
    // 0x1099d0: 0x24a5a308  addiu       $a1, $a1, -0x5CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x1099CCu, 0x1099D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099D4u;
label_1099d4:
    // 0x1099d4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1099D4u;
    {
        const bool branch_taken_0x1099d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099D4u;
        // 0x1099d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099d4) {
            ctx->pc = 0x109B94u;
            goto label_109b94;
        }
    }
    ctx->pc = 0x1099DCu;
label_1099dc:
    // 0x1099dc: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x1099dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x1099e0: 0xae720040  sw          $s2, 0x40($s3)
    ctx->pc = 0x1099e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 18));
    // 0x1099e4: 0x24c6e660  addiu       $a2, $a2, -0x19A0
    ctx->pc = 0x1099e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960736));
    // 0x1099e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1099e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099ec: 0x264519a0  addiu       $a1, $s2, 0x19A0
    ctx->pc = 0x1099ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6560));
    // 0x1099f0: 0xc042ada  jal         func_10AB68
    ctx->pc = 0x1099F0u;
    SET_GPR_U32(ctx, 31, 0x1099F8u);
    ctx->pc = 0x1099F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099F0u;
    // 0x1099f4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB68u, 0x1099F0u, 0x1099F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099F8u;
label_1099f8:
    // 0x1099f8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1099f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1099fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1099fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109a00: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x109a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x109a04: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x109a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x109a08: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x109a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x109a0c: 0x3c080011  lui         $t0, 0x11
    ctx->pc = 0x109a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17 << 16));
    // 0x109a10: 0x2463ac28  addiu       $v1, $v1, -0x53D8
    ctx->pc = 0x109a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945832));
    // 0x109a14: 0x2508ac50  addiu       $t0, $t0, -0x53B0
    ctx->pc = 0x109a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945872));
    // 0x109a18: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x109a18u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x109a1c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x109a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x109a20: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x109a20u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x109a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a28: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x109a28u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x109a2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a30: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x109a30u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x109a34: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x109a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x109a38: 0xfe620030  sd          $v0, 0x30($s3)
    ctx->pc = 0x109a38u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
    // 0x109a3c: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x109a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x109a40: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x109a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x109a44: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x109a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x109a48: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x109a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x109a4c: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x109a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x109a50: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x109a50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x109a54: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x109a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x109a58: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x109a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x109a5c: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x109a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x109a60: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x109a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x109a64: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x109a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x109a68: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x109a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x109a6c: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x109a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
    // 0x109a70: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x109a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x109a74: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x109a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x109a78: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x109a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x109a7c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x109a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x109a80: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x109a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x109a84: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x109a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x109a88: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x109a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x109a8c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x109a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x109a90: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x109a90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x109a94: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x109a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x109a98: 0xc042ae8  jal         func_10ABA0
    ctx->pc = 0x109A98u;
    SET_GPR_U32(ctx, 31, 0x109AA0u);
    ctx->pc = 0x109A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A98u;
    // 0x109a9c: 0xae480030  sw          $t0, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ABA0u, 0x109A98u, 0x109AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AA0u;
label_109aa0:
    // 0x109aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109aa4: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x109aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x109aa8: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x109aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x109aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ab0: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x109ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x109ab4: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x109ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x109ab8: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x109ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x109abc: 0xfe400090  sd          $zero, 0x90($s2)
    ctx->pc = 0x109abcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 0));
    // 0x109ac0: 0xae500098  sw          $s0, 0x98($s2)
    ctx->pc = 0x109ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
    // 0x109ac4: 0xfe4000a0  sd          $zero, 0xA0($s2)
    ctx->pc = 0x109ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 0));
    // 0x109ac8: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x109ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x109acc: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x109accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x109ad0: 0xae5000a8  sw          $s0, 0xA8($s2)
    ctx->pc = 0x109ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 16));
    // 0x109ad4: 0xae5000ac  sw          $s0, 0xAC($s2)
    ctx->pc = 0x109ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 16));
    // 0x109ad8: 0xae5000b0  sw          $s0, 0xB0($s2)
    ctx->pc = 0x109ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
    // 0x109adc: 0xae530868  sw          $s3, 0x868($s2)
    ctx->pc = 0x109adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2152), GPR_U32(ctx, 19));
    // 0x109ae0: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x109ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x109ae4: 0xc04262a  jal         func_1098A8
    ctx->pc = 0x109AE4u;
    SET_GPR_U32(ctx, 31, 0x109AECu);
    ctx->pc = 0x109AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AE4u;
    // 0x109ae8: 0xae4300c4  sw          $v1, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1098A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1098A8u, 0x109AE4u, 0x109AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AECu;
label_109aec:
    // 0x109aec: 0xc0429ae  jal         func_10A6B8
    ctx->pc = 0x109AECu;
    SET_GPR_U32(ctx, 31, 0x109AF4u);
    ctx->pc = 0x109AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AECu;
    // 0x109af0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A6B8u, 0x109AECu, 0x109AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AF4u;
label_109af4:
    // 0x109af4: 0xc042a52  jal         func_10A948
    ctx->pc = 0x109AF4u;
    SET_GPR_U32(ctx, 31, 0x109AFCu);
    ctx->pc = 0x109AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AF4u;
    // 0x109af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A948u, 0x109AF4u, 0x109AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AFCu;
label_109afc:
    // 0x109afc: 0x264301f8  addiu       $v1, $s2, 0x1F8
    ctx->pc = 0x109afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x109b00: 0x26420260  addiu       $v0, $s2, 0x260
    ctx->pc = 0x109b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x109b04: 0x264502c8  addiu       $a1, $s2, 0x2C8
    ctx->pc = 0x109b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x109b08: 0x26460330  addiu       $a2, $s2, 0x330
    ctx->pc = 0x109b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x109b0c: 0x26470398  addiu       $a3, $s2, 0x398
    ctx->pc = 0x109b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x109b10: 0x26480400  addiu       $t0, $s2, 0x400
    ctx->pc = 0x109b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x109b14: 0x26490468  addiu       $t1, $s2, 0x468
    ctx->pc = 0x109b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x109b18: 0x264a04d0  addiu       $t2, $s2, 0x4D0
    ctx->pc = 0x109b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x109b1c: 0x264b0538  addiu       $t3, $s2, 0x538
    ctx->pc = 0x109b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x109b20: 0xae4301c8  sw          $v1, 0x1C8($s2)
    ctx->pc = 0x109b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 3));
    // 0x109b24: 0xae4201cc  sw          $v0, 0x1CC($s2)
    ctx->pc = 0x109b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 2));
    // 0x109b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b2c: 0xae4501d4  sw          $a1, 0x1D4($s2)
    ctx->pc = 0x109b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 5));
    // 0x109b30: 0xae4601d8  sw          $a2, 0x1D8($s2)
    ctx->pc = 0x109b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 6));
    // 0x109b34: 0xae4701dc  sw          $a3, 0x1DC($s2)
    ctx->pc = 0x109b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 7));
    // 0x109b38: 0xae4801e4  sw          $t0, 0x1E4($s2)
    ctx->pc = 0x109b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 8));
    // 0x109b3c: 0xae4901e8  sw          $t1, 0x1E8($s2)
    ctx->pc = 0x109b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 9));
    // 0x109b40: 0xae4a01ec  sw          $t2, 0x1EC($s2)
    ctx->pc = 0x109b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 10));
    // 0x109b44: 0xc042ae0  jal         func_10AB80
    ctx->pc = 0x109B44u;
    SET_GPR_U32(ctx, 31, 0x109B4Cu);
    ctx->pc = 0x109B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B44u;
    // 0x109b48: 0xae4b01f4  sw          $t3, 0x1F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB80u, 0x109B44u, 0x109B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B4Cu;
label_109b4c:
    // 0x109b4c: 0xae500860  sw          $s0, 0x860($s2)
    ctx->pc = 0x109b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2144), GPR_U32(ctx, 16));
    // 0x109b50: 0x3246003c  andi        $a2, $s2, 0x3C
    ctx->pc = 0x109b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)60);
    // 0x109b54: 0xae40085c  sw          $zero, 0x85C($s2)
    ctx->pc = 0x109b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2140), GPR_U32(ctx, 0));
    // 0x109b58: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x109B58u;
    {
        const bool branch_taken_0x109b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B58u;
        // 0x109b5c: 0xae400864  sw          $zero, 0x864($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b58) {
            ctx->pc = 0x109B70u;
            goto label_109b70;
        }
    }
    ctx->pc = 0x109B60u;
    // 0x109b60: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x109b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x109b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109B68u;
    {
        const bool branch_taken_0x109b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B68u;
        // 0x109b6c: 0x24a5a2b8  addiu       $a1, $a1, -0x5D48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b68) {
            ctx->pc = 0x109B80u;
            goto label_109b80;
        }
    }
    ctx->pc = 0x109B70u;
label_109b70:
    // 0x109b70: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x109B70u;
    {
        const bool branch_taken_0x109b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B70u;
        // 0x109b74: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b70) {
            ctx->pc = 0x109B90u;
            goto label_109b90;
        }
    }
    ctx->pc = 0x109B78u;
    // 0x109b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b7c: 0x24a5a2e0  addiu       $a1, $a1, -0x5D20
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943456));
label_109b80:
    // 0x109b80: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x109B80u;
    SET_GPR_U32(ctx, 31, 0x109B88u);
    ctx->pc = 0x10C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1C0u, 0x109B80u, 0x109B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B88u;
label_109b88:
    // 0x109b88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109B88u;
    {
        const bool branch_taken_0x109b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B88u;
        // 0x109b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b88) {
            ctx->pc = 0x109B94u;
            goto label_109b94;
        }
    }
    ctx->pc = 0x109B90u;
label_109b90:
    // 0x109b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109b94:
    // 0x109b94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109b98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109b9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109ba0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x109BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BA8u;
        // 0x109bac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109BB0u;
}
