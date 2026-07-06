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

// Function: sub_0012EFD0
// Address: 0x12efd0 - 0x12f670
void sub_0012EFD0_0x12efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EFD0_0x12efd0");
#endif

    switch (ctx->pc) {
        case 0x12f05cu: goto label_12f05c;
        case 0x12f120u: goto label_12f120;
        case 0x12f194u: goto label_12f194;
        case 0x12f594u: goto label_12f594;
        case 0x12f5a4u: goto label_12f5a4;
        default: break;
    }

    ctx->pc = 0x12efd0u;

    // 0x12efd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12efd4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x12efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x12efd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12efdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12efe0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12efe0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12efe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12efec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12efecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eff0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12eff4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12eff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12effc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f004: 0x9082029a  lbu         $v0, 0x29A($a0)
    ctx->pc = 0x12f004u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 666)));
    // 0x12f008: 0x90b10013  lbu         $s1, 0x13($a1)
    ctx->pc = 0x12f008u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x12f00c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12f010: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12F010u;
    {
        const bool branch_taken_0x12f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F010u;
        // 0x12f014: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f010) {
            ctx->pc = 0x12F044u;
            goto label_12f044;
        }
    }
    ctx->pc = 0x12F018u;
    // 0x12f018: 0x96a30294  lhu         $v1, 0x294($s5)
    ctx->pc = 0x12f018u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 660)));
    // 0x12f01c: 0x96a20292  lhu         $v0, 0x292($s5)
    ctx->pc = 0x12f01cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 658)));
    // 0x12f020: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F020u;
    {
        const bool branch_taken_0x12f020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f020) {
            ctx->pc = 0x12F024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F020u;
            // 0x12f024: 0x30e400ff  andi        $a0, $a3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F048u;
            goto label_12f048;
        }
    }
    ctx->pc = 0x12F028u;
    // 0x12f028: 0xa6a00296  sh          $zero, 0x296($s5)
    ctx->pc = 0x12f028u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 662), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f02c: 0xa2a00299  sb          $zero, 0x299($s5)
    ctx->pc = 0x12f02cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 665), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f030: 0xa2a0029b  sb          $zero, 0x29B($s5)
    ctx->pc = 0x12f030u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 667), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f034: 0xaea000c4  sw          $zero, 0xC4($s5)
    ctx->pc = 0x12f034u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 0));
    // 0x12f038: 0xaea000c8  sw          $zero, 0xC8($s5)
    ctx->pc = 0x12f038u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 200), GPR_U32(ctx, 0));
    // 0x12f03c: 0xaea000cc  sw          $zero, 0xCC($s5)
    ctx->pc = 0x12f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 0));
    // 0x12f040: 0xaea000d0  sw          $zero, 0xD0($s5)
    ctx->pc = 0x12f040u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 0));
label_12f044:
    // 0x12f044: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x12f044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_12f048:
    // 0x12f048: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x12f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12f04c: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12F04Cu;
    {
        const bool branch_taken_0x12f04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f04c) {
            ctx->pc = 0x12F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F04Cu;
            // 0x12f050: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F084u;
            goto label_12f084;
        }
    }
    ctx->pc = 0x12F054u;
    // 0x12f054: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x12F054u;
    SET_GPR_U32(ctx, 31, 0x12F05Cu);
    ctx->pc = 0x12F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F054u;
    // 0x12f058: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x12F054u, 0x12F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F05Cu;
label_12f05c:
    // 0x12f05c: 0x90440299  lbu         $a0, 0x299($v0)
    ctx->pc = 0x12f05cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 665)));
    // 0x12f060: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x12f060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x12f064: 0x2463c1c0  addiu       $v1, $v1, -0x3E40
    ctx->pc = 0x12f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951360));
    // 0x12f068: 0xa2a40299  sb          $a0, 0x299($s5)
    ctx->pc = 0x12f068u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 665), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f06c: 0x94440292  lhu         $a0, 0x292($v0)
    ctx->pc = 0x12f06cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 658)));
    // 0x12f070: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12f074: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12f078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12f078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f07c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12F07Cu;
    {
        const bool branch_taken_0x12f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F07Cu;
        // 0x12f080: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f07c) {
            ctx->pc = 0x12F098u;
            goto label_12f098;
        }
    }
    ctx->pc = 0x12F084u;
label_12f084:
    // 0x12f084: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x12f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x12f088: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f08c: 0x2442c1c0  addiu       $v0, $v0, -0x3E40
    ctx->pc = 0x12f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951360));
    // 0x12f090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12f090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f094: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x12f094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12f098:
    // 0x12f098: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x12f098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x12f09c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x12f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x12f0a0: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x12f0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x12f0a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12f0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12f0a8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x12F0A8u;
    {
        const bool branch_taken_0x12f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0a8) {
            ctx->pc = 0x12F0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0A8u;
            // 0x12f0ac: 0x3c0201e0  lui         $v0, 0x1E0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F108u;
            goto label_12f108;
        }
    }
    ctx->pc = 0x12F0B0u;
    // 0x12f0b0: 0x96a305e2  lhu         $v1, 0x5E2($s5)
    ctx->pc = 0x12f0b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 1506)));
    // 0x12f0b4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x12f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x12f0b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12F0B8u;
    {
        const bool branch_taken_0x12f0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0b8) {
            ctx->pc = 0x12F104u;
            goto label_12f104;
        }
    }
    ctx->pc = 0x12F0C0u;
    // 0x12f0c0: 0x3072003f  andi        $s2, $v1, 0x3F
    ctx->pc = 0x12f0c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x12f0c4: 0x3244000c  andi        $a0, $s2, 0xC
    ctx->pc = 0x12f0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)12);
    // 0x12f0c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12f0cc: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x12f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x12f0d0: 0x32420030  andi        $v0, $s2, 0x30
    ctx->pc = 0x12f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x12f0d4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x12f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12f0d8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x12f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12f0dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12f0e0: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x12f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x12f0e4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x12f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12f0e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12f0ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12f0f0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x12f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12f0f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f0fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12F0FCu;
    {
        const bool branch_taken_0x12f0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0FCu;
        // 0x12f100: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0fc) {
            ctx->pc = 0x12F130u;
            goto label_12f130;
        }
    }
    ctx->pc = 0x12F104u;
label_12f104:
    // 0x12f104: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_12f108:
    // 0x12f108: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x12f108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x12f10c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12f10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12f110: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F110u;
    {
        const bool branch_taken_0x12f110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f110) {
            ctx->pc = 0x12F114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F110u;
            // 0x12f114: 0x96a200ea  lhu         $v0, 0xEA($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F12Cu;
            goto label_12f12c;
        }
    }
    ctx->pc = 0x12F118u;
    // 0x12f118: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x12F118u;
    SET_GPR_U32(ctx, 31, 0x12F120u);
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x12F118u, 0x12F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F120u;
label_12f120:
    // 0x12f120: 0x8c5200dc  lw          $s2, 0xDC($v0)
    ctx->pc = 0x12f120u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x12f124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F124u;
    {
        const bool branch_taken_0x12f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F124u;
        // 0x12f128: 0x944200ea  lhu         $v0, 0xEA($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f124) {
            ctx->pc = 0x12F130u;
            goto label_12f130;
        }
    }
    ctx->pc = 0x12F12Cu;
label_12f12c:
    // 0x12f12c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12f130:
    // 0x12f130: 0x3243000c  andi        $v1, $s2, 0xC
    ctx->pc = 0x12f130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)12);
    // 0x12f134: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x12f134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x12f138: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x12f138u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x12f13c: 0x2484dc9d  addiu       $a0, $a0, -0x2363
    ctx->pc = 0x12f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958237));
    // 0x12f140: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x12f144: 0x32430030  andi        $v1, $s2, 0x30
    ctx->pc = 0x12f144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x12f148: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12f148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12f14c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12f150: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x12f150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12f154: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12f154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12f158: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12f158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12f15c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x12f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12f160: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12f164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f168: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12f168u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f16c: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F16Cu;
    {
        const bool branch_taken_0x12f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f16c) {
            ctx->pc = 0x12F170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F16Cu;
            // 0x12f170: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F18Cu;
            goto label_12f18c;
        }
    }
    ctx->pc = 0x12F174u;
    // 0x12f174: 0x92a400e4  lbu         $a0, 0xE4($s5)
    ctx->pc = 0x12f174u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x12f178: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x12f178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x12f17c: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x12f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x12f180: 0x24170c00  addiu       $s7, $zero, 0xC00
    ctx->pc = 0x12f180u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x12f184: 0x649025  or          $s2, $v1, $a0
    ctx->pc = 0x12f184u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12f188: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12f188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12f18c:
    // 0x12f18c: 0xc04ba0c  jal         func_12E830
    ctx->pc = 0x12F18Cu;
    SET_GPR_U32(ctx, 31, 0x12F194u);
    ctx->pc = 0x12F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F18Cu;
    // 0x12f190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E830u, 0x12F18Cu, 0x12F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F194u;
label_12f194:
    // 0x12f194: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12f194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f198: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x12f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x12f19c: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x12f19cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x12f1a0: 0x2422024  and         $a0, $s2, $v0
    ctx->pc = 0x12f1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12f1a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12f1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12f1a8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x12f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x12f1ac: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12F1ACu;
    {
        const bool branch_taken_0x12f1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f1ac) {
            ctx->pc = 0x12F1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F1ACu;
            // 0x12f1b0: 0x32430030  andi        $v1, $s2, 0x30 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F21Cu;
            goto label_12f21c;
        }
    }
    ctx->pc = 0x12F1B4u;
    // 0x12f1b4: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x12f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x12f1b8: 0x5083002b  beql        $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x12F1B8u;
    {
        const bool branch_taken_0x12f1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f1b8) {
            ctx->pc = 0x12F1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F1B8u;
            // 0x12f1bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F268u;
            goto label_12f268;
        }
    }
    ctx->pc = 0x12F1C0u;
    // 0x12f1c0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x12f1c4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12F1C4u;
    {
        const bool branch_taken_0x12f1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f1c4) {
            ctx->pc = 0x12F200u;
            goto label_12f200;
        }
    }
    ctx->pc = 0x12F1CCu;
    // 0x12f1cc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x12f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x12f1d0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12F1D0u;
    {
        const bool branch_taken_0x12f1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f1d0) {
            ctx->pc = 0x12F200u;
            goto label_12f200;
        }
    }
    ctx->pc = 0x12F1D8u;
    // 0x12f1d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x12f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x12f1dc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F1DCu;
    {
        const bool branch_taken_0x12f1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f1dc) {
            ctx->pc = 0x12F200u;
            goto label_12f200;
        }
    }
    ctx->pc = 0x12F1E4u;
    // 0x12f1e4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x12f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x12f1e8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F1E8u;
    {
        const bool branch_taken_0x12f1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f1e8) {
            ctx->pc = 0x12F1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F1E8u;
            // 0x12f1ec: 0x3231000f  andi        $s1, $s1, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F1F8u;
            goto label_12f1f8;
        }
    }
    ctx->pc = 0x12F1F0u;
    // 0x12f1f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12F1F0u;
    {
        const bool branch_taken_0x12f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1F0u;
        // 0x12f1f4: 0x32430030  andi        $v1, $s2, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1f0) {
            ctx->pc = 0x12F244u;
            goto label_12f244;
        }
    }
    ctx->pc = 0x12F1F8u;
label_12f1f8:
    // 0x12f1f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12F1F8u;
    {
        const bool branch_taken_0x12f1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1F8u;
        // 0x12f1fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1f8) {
            ctx->pc = 0x12F268u;
            goto label_12f268;
        }
    }
    ctx->pc = 0x12F200u;
label_12f200:
    // 0x12f200: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f204: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x12f204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x12f208: 0x8c631de0  lw          $v1, 0x1DE0($v1)
    ctx->pc = 0x12f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7648)));
    // 0x12f20c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x12f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x12f210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f214: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12F214u;
    {
        const bool branch_taken_0x12f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F214u;
        // 0x12f218: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f214) {
            ctx->pc = 0x12F268u;
            goto label_12f268;
        }
    }
    ctx->pc = 0x12F21Cu;
label_12f21c:
    // 0x12f21c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f220: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x12f220u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12f224: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x12f224u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x12f228: 0x3243000c  andi        $v1, $s2, 0xC
    ctx->pc = 0x12f228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)12);
    // 0x12f22c: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x12f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x12f230: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x12f230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12f234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f238: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12f238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12f23c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12F23Cu;
    {
        const bool branch_taken_0x12f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F23Cu;
        // 0x12f240: 0x3076ffff  andi        $s6, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f23c) {
            ctx->pc = 0x12F268u;
            goto label_12f268;
        }
    }
    ctx->pc = 0x12F244u;
label_12f244:
    // 0x12f244: 0x3231000f  andi        $s1, $s1, 0xF
    ctx->pc = 0x12f244u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x12f248: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x12f248u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12f24c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x12f24cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x12f250: 0x3243000c  andi        $v1, $s2, 0xC
    ctx->pc = 0x12f250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)12);
    // 0x12f254: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x12f254u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x12f258: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x12f258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12f25c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f260: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12f260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12f264: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x12f264u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_12f268:
    // 0x12f268: 0x50c000eb  beql        $a2, $zero, . + 4 + (0xEB << 2)
    ctx->pc = 0x12F268u;
    {
        const bool branch_taken_0x12f268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f268) {
            ctx->pc = 0x12F26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F268u;
            // 0x12f26c: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F618u;
            goto label_12f618;
        }
    }
    ctx->pc = 0x12F270u;
    // 0x12f270: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x12F270u;
    {
        const bool branch_taken_0x12f270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f270) {
            ctx->pc = 0x12F274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F270u;
            // 0x12f274: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F2A8u;
            goto label_12f2a8;
        }
    }
    ctx->pc = 0x12F278u;
    // 0x12f278: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x12f278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x12f27c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x12f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x12f280: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12f280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12f284: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x12f284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x12f288: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f28c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x12f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x12f290: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x12f294: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f298: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f29c: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x12f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x12f2a0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x12F2A0u;
    {
        const bool branch_taken_0x12f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2A0u;
        // 0x12f2a4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2a0) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F2A8u;
label_12f2a8:
    // 0x12f2a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f2ac: 0x50a2007d  beql        $a1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x12F2ACu;
    {
        const bool branch_taken_0x12f2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f2ac) {
            ctx->pc = 0x12F2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F2ACu;
            // 0x12f2b0: 0x92a2029a  lbu         $v0, 0x29A($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F4A4u;
            goto label_12f4a4;
        }
    }
    ctx->pc = 0x12F2B4u;
    // 0x12f2b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f2b8: 0x50a40030  beql        $a1, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x12F2B8u;
    {
        const bool branch_taken_0x12f2b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x12f2b8) {
            ctx->pc = 0x12F2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F2B8u;
            // 0x12f2bc: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F37Cu;
            goto label_12f37c;
        }
    }
    ctx->pc = 0x12F2C0u;
    // 0x12f2c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f2c4: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F2C4u;
    {
        const bool branch_taken_0x12f2c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f2c4) {
            ctx->pc = 0x12F2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F2C4u;
            // 0x12f2c8: 0x92620002  lbu         $v0, 0x2($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F308u;
            goto label_12f308;
        }
    }
    ctx->pc = 0x12F2CCu;
    // 0x12f2cc: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F2CCu;
    {
        const bool branch_taken_0x12f2cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f2cc) {
            ctx->pc = 0x12F2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F2CCu;
            // 0x12f2d0: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F2DCu;
            goto label_12f2dc;
        }
    }
    ctx->pc = 0x12F2D4u;
    // 0x12f2d4: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x12F2D4u;
    {
        const bool branch_taken_0x12f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f2d4) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F2DCu;
label_12f2dc:
    // 0x12f2dc: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x12f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x12f2e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12f2e4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x12f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x12f2e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f2ec: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x12f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x12f2f0: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x12f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x12f2f4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f2f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f2fc: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x12f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x12f300: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x12F300u;
    {
        const bool branch_taken_0x12f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F300u;
        // 0x12f304: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f300) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F308u;
label_12f308:
    // 0x12f308: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12F308u;
    {
        const bool branch_taken_0x12f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F308u;
        // 0x12f30c: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f308) {
            ctx->pc = 0x12F364u;
            goto label_12f364;
        }
    }
    ctx->pc = 0x12F310u;
    // 0x12f310: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12F310u;
    {
        const bool branch_taken_0x12f310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f310) {
            ctx->pc = 0x12F314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F310u;
            // 0x12f314: 0x92630003  lbu         $v1, 0x3($s3) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F350u;
            goto label_12f350;
        }
    }
    ctx->pc = 0x12F318u;
    // 0x12f318: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F318u;
    {
        const bool branch_taken_0x12f318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f318) {
            ctx->pc = 0x12F31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F318u;
            // 0x12f31c: 0x92640003  lbu         $a0, 0x3($s3) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F328u;
            goto label_12f328;
        }
    }
    ctx->pc = 0x12F320u;
    // 0x12f320: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x12F320u;
    {
        const bool branch_taken_0x12f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f320) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F328u;
label_12f328:
    // 0x12f328: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x12f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x12f32c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x12f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x12f330: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f334: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x12f334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12f338: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x12f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x12f33c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x12f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12f340: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x12f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x12f344: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f348: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x12F348u;
    {
        const bool branch_taken_0x12f348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F348u;
        // 0x12f34c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f348) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F350u;
label_12f350:
    // 0x12f350: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f354: 0x24421df0  addiu       $v0, $v0, 0x1DF0
    ctx->pc = 0x12f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
    // 0x12f358: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12f358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12f35c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x12F35Cu;
    {
        const bool branch_taken_0x12f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F35Cu;
        // 0x12f360: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f35c) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F364u;
label_12f364:
    // 0x12f364: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x12f364u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x12f368: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f36c: 0x24421d20  addiu       $v0, $v0, 0x1D20
    ctx->pc = 0x12f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7456));
    // 0x12f370: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12f374: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x12F374u;
    {
        const bool branch_taken_0x12f374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F374u;
        // 0x12f378: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f374) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F37Cu;
label_12f37c:
    // 0x12f37c: 0x92a3029a  lbu         $v1, 0x29A($s5)
    ctx->pc = 0x12f37cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 666)));
    // 0x12f380: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12f380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12f384: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x12F384u;
    {
        const bool branch_taken_0x12f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f384) {
            ctx->pc = 0x12F388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F384u;
            // 0x12f388: 0x92a30299  lbu         $v1, 0x299($s5) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 665)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F3D0u;
            goto label_12f3d0;
        }
    }
    ctx->pc = 0x12F38Cu;
    // 0x12f38c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x12f38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x12f390: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x12f390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x12f394: 0xa2a3029a  sb          $v1, 0x29A($s5)
    ctx->pc = 0x12f394u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 666), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f398: 0x92a3029b  lbu         $v1, 0x29B($s5)
    ctx->pc = 0x12f398u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 667)));
    // 0x12f39c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F39Cu;
    {
        const bool branch_taken_0x12f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F39Cu;
        // 0x12f3a0: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f39c) {
            ctx->pc = 0x12F3A8u;
            goto label_12f3a8;
        }
    }
    ctx->pc = 0x12F3A4u;
    // 0x12f3a4: 0x1cd  break       0, 7
    ctx->pc = 0x12f3a4u;
    runtime->handleBreak(rdram, ctx);
label_12f3a8:
    // 0x12f3a8: 0x1010  mfhi        $v0
    ctx->pc = 0x12f3a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12f3ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F3ACu;
    {
        const bool branch_taken_0x12f3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f3ac) {
            ctx->pc = 0x12F3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F3ACu;
            // 0x12f3b0: 0x92a2029b  lbu         $v0, 0x29B($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 667)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F3C4u;
            goto label_12f3c4;
        }
    }
    ctx->pc = 0x12F3B4u;
    // 0x12f3b4: 0x92a20299  lbu         $v0, 0x299($s5)
    ctx->pc = 0x12f3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 665)));
    // 0x12f3b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f3bc: 0xa2a20299  sb          $v0, 0x299($s5)
    ctx->pc = 0x12f3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 665), (uint8_t)GPR_U32(ctx, 2));
    // 0x12f3c0: 0x92a2029b  lbu         $v0, 0x29B($s5)
    ctx->pc = 0x12f3c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 667)));
label_12f3c4:
    // 0x12f3c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f3c8: 0xa2a2029b  sb          $v0, 0x29B($s5)
    ctx->pc = 0x12f3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 667), (uint8_t)GPR_U32(ctx, 2));
    // 0x12f3cc: 0x92a30299  lbu         $v1, 0x299($s5)
    ctx->pc = 0x12f3ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 665)));
label_12f3d0:
    // 0x12f3d0: 0x92620008  lbu         $v0, 0x8($s3)
    ctx->pc = 0x12f3d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12f3d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F3D4u;
    {
        const bool branch_taken_0x12f3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3D4u;
        // 0x12f3d8: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3d4) {
            ctx->pc = 0x12F3E0u;
            goto label_12f3e0;
        }
    }
    ctx->pc = 0x12F3DCu;
    // 0x12f3dc: 0x1cd  break       0, 7
    ctx->pc = 0x12f3dcu;
    runtime->handleBreak(rdram, ctx);
label_12f3e0:
    // 0x12f3e0: 0x1010  mfhi        $v0
    ctx->pc = 0x12f3e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12f3e4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x12f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12f3e8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12f3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f3ec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12f3f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f3f4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x12f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f3f8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x12f3f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f3fc: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12F3FCu;
    {
        const bool branch_taken_0x12f3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f3fc) {
            ctx->pc = 0x12F400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F3FCu;
            // 0x12f400: 0x90830001  lbu         $v1, 0x1($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F490u;
            goto label_12f490;
        }
    }
    ctx->pc = 0x12F404u;
    // 0x12f404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f408: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12F408u;
    {
        const bool branch_taken_0x12f408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f408) {
            ctx->pc = 0x12F40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F408u;
            // 0x12f40c: 0x90830001  lbu         $v1, 0x1($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F47Cu;
            goto label_12f47c;
        }
    }
    ctx->pc = 0x12F410u;
    // 0x12f410: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F410u;
    {
        const bool branch_taken_0x12f410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f410) {
            ctx->pc = 0x12F414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F410u;
            // 0x12f414: 0x90830001  lbu         $v1, 0x1($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F420u;
            goto label_12f420;
        }
    }
    ctx->pc = 0x12F418u;
    // 0x12f418: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x12F418u;
    {
        const bool branch_taken_0x12f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f418) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F420u;
label_12f420:
    // 0x12f420: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12f424: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12F424u;
    {
        const bool branch_taken_0x12f424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f424) {
            ctx->pc = 0x12F428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F424u;
            // 0x12f428: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F454u;
            goto label_12f454;
        }
    }
    ctx->pc = 0x12F42Cu;
    // 0x12f42c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x12f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12f430: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x12f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x12f434: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x12f434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x12f438: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x12f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12f43c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f440: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x12f440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x12f444: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x12f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x12f448: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f44c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x12F44Cu;
    {
        const bool branch_taken_0x12f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F44Cu;
        // 0x12f450: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f44c) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F454u;
label_12f454:
    // 0x12f454: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x12f454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x12f458: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12f458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12f45c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x12f460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f464: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f468: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x12f468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x12f46c: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x12f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x12f470: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f474: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x12F474u;
    {
        const bool branch_taken_0x12f474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F474u;
        // 0x12f478: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f474) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F47Cu;
label_12f47c:
    // 0x12f47c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f480: 0x24421df0  addiu       $v0, $v0, 0x1DF0
    ctx->pc = 0x12f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
    // 0x12f484: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12f484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12f488: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x12F488u;
    {
        const bool branch_taken_0x12f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F488u;
        // 0x12f48c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f488) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F490u;
label_12f490:
    // 0x12f490: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f494: 0x24421d20  addiu       $v0, $v0, 0x1D20
    ctx->pc = 0x12f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7456));
    // 0x12f498: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12f498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12f49c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x12F49Cu;
    {
        const bool branch_taken_0x12f49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F49Cu;
        // 0x12f4a0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f49c) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F4A4u;
label_12f4a4:
    // 0x12f4a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12f4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12f4a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F4A8u;
    {
        const bool branch_taken_0x12f4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f4a8) {
            ctx->pc = 0x12F4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F4A8u;
            // 0x12f4ac: 0x92a50299  lbu         $a1, 0x299($s5) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 665)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F4C0u;
            goto label_12f4c0;
        }
    }
    ctx->pc = 0x12F4B0u;
    // 0x12f4b0: 0x92a20299  lbu         $v0, 0x299($s5)
    ctx->pc = 0x12f4b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 665)));
    // 0x12f4b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f4b8: 0xa2a20299  sb          $v0, 0x299($s5)
    ctx->pc = 0x12f4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 665), (uint8_t)GPR_U32(ctx, 2));
    // 0x12f4bc: 0x92a50299  lbu         $a1, 0x299($s5)
    ctx->pc = 0x12f4bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 665)));
label_12f4c0:
    // 0x12f4c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f4c4: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x12f4c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x12f4c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f4cc: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x12f4ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f4d0: 0x1010  mfhi        $v0
    ctx->pc = 0x12f4d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12f4d4: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12F4D4u;
    {
        const bool branch_taken_0x12f4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4D4u;
        // 0x12f4d8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4d4) {
            ctx->pc = 0x12F534u;
            goto label_12f534;
        }
    }
    ctx->pc = 0x12F4DCu;
    // 0x12f4dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f4e0: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12F4E0u;
    {
        const bool branch_taken_0x12f4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f4e0) {
            ctx->pc = 0x12F4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F4E0u;
            // 0x12f4e4: 0x92640003  lbu         $a0, 0x3($s3) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F520u;
            goto label_12f520;
        }
    }
    ctx->pc = 0x12F4E8u;
    // 0x12f4e8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F4E8u;
    {
        const bool branch_taken_0x12f4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f4e8) {
            ctx->pc = 0x12F4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F4E8u;
            // 0x12f4ec: 0x92650003  lbu         $a1, 0x3($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F4F0u;
    // 0x12f4f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12F4F0u;
    {
        const bool branch_taken_0x12f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4F0u;
        // 0x12f4f4: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4f0) {
            ctx->pc = 0x12F54Cu;
            goto label_12f54c;
        }
    }
    ctx->pc = 0x12F4F8u;
label_12f4f8:
    // 0x12f4f8: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x12f4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x12f4fc: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x12f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x12f500: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f504: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x12f504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x12f508: 0x246321f0  addiu       $v1, $v1, 0x21F0
    ctx->pc = 0x12f508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8688));
    // 0x12f50c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x12f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x12f510: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x12f510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x12f514: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12f514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12f518: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12F518u;
    {
        const bool branch_taken_0x12f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F518u;
        // 0x12f51c: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f518) {
            ctx->pc = 0x12F548u;
            goto label_12f548;
        }
    }
    ctx->pc = 0x12F520u;
label_12f520:
    // 0x12f520: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f524: 0x24631df0  addiu       $v1, $v1, 0x1DF0
    ctx->pc = 0x12f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7664));
    // 0x12f528: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x12f528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x12f52c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12F52Cu;
    {
        const bool branch_taken_0x12f52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F52Cu;
        // 0x12f530: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f52c) {
            ctx->pc = 0x12F548u;
            goto label_12f548;
        }
    }
    ctx->pc = 0x12F534u;
label_12f534:
    // 0x12f534: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x12f534u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x12f538: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f53c: 0x24631d20  addiu       $v1, $v1, 0x1D20
    ctx->pc = 0x12f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7456));
    // 0x12f540: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x12f540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x12f544: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x12f544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12f548:
    // 0x12f548: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12f54c:
    // 0x12f54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f550: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12F550u;
    {
        const bool branch_taken_0x12f550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f550) {
            ctx->pc = 0x12F554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F550u;
            // 0x12f554: 0x92a3029a  lbu         $v1, 0x29A($s5) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F600u;
            goto label_12f600;
        }
    }
    ctx->pc = 0x12F558u;
    // 0x12f558: 0x92a2029a  lbu         $v0, 0x29A($s5)
    ctx->pc = 0x12f558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 666)));
    // 0x12f55c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12f560: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12F560u;
    {
        const bool branch_taken_0x12f560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f560) {
            ctx->pc = 0x12F564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F560u;
            // 0x12f564: 0x96a40296  lhu         $a0, 0x296($s5) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 662)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F58Cu;
            goto label_12f58c;
        }
    }
    ctx->pc = 0x12F568u;
    // 0x12f568: 0x96a30296  lhu         $v1, 0x296($s5)
    ctx->pc = 0x12f568u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 662)));
    // 0x12f56c: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x12f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x12f570: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x12f570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x12f574: 0xa6a30296  sh          $v1, 0x296($s5)
    ctx->pc = 0x12f574u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 662), (uint16_t)GPR_U32(ctx, 3));
    // 0x12f578: 0x96a30296  lhu         $v1, 0x296($s5)
    ctx->pc = 0x12f578u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 662)));
    // 0x12f57c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12f57cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f580: 0x1010  mfhi        $v0
    ctx->pc = 0x12f580u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12f584: 0xa6a20296  sh          $v0, 0x296($s5)
    ctx->pc = 0x12f584u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 662), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f588: 0x96a40296  lhu         $a0, 0x296($s5)
    ctx->pc = 0x12f588u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 662)));
label_12f58c:
    // 0x12f58c: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x12F58Cu;
    SET_GPR_U32(ctx, 31, 0x12F594u);
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x12F58Cu, 0x12F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F594u;
label_12f594:
    // 0x12f594: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x12f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x12f598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f59c: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x12F59Cu;
    SET_GPR_U32(ctx, 31, 0x12F5A4u);
    ctx->pc = 0x12F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F59Cu;
    // 0x12f5a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x12F59Cu, 0x12F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5A4u;
label_12f5a4:
    // 0x12f5a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12f5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f5ac: 0x0  nop
    ctx->pc = 0x12f5acu;
    // NOP
    // 0x12f5b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12f5b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f5b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x12F5B4u;
    {
        const bool branch_taken_0x12f5b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f5b4) {
            ctx->pc = 0x12F5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5B4u;
            // 0x12f5b8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F5CCu;
            goto label_12f5cc;
        }
    }
    ctx->pc = 0x12F5BCu;
    // 0x12f5bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f5bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f5c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12f5c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f5c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12F5C4u;
    {
        const bool branch_taken_0x12f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5C4u;
        // 0x12f5c8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5c4) {
            ctx->pc = 0x12F5E4u;
            goto label_12f5e4;
        }
    }
    ctx->pc = 0x12F5CCu;
label_12f5cc:
    // 0x12f5cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12f5d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f5d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f5d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12f5d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f5d8: 0x0  nop
    ctx->pc = 0x12f5d8u;
    // NOP
    // 0x12f5dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12f5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12f5e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12f5e4:
    // 0x12f5e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x12f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f5e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x12f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x12f5ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x12f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12f5f0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x12f5f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12f5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12f5f8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x12f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x12f5fc: 0x92a3029a  lbu         $v1, 0x29A($s5)
    ctx->pc = 0x12f5fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 666)));
label_12f600:
    // 0x12f600: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12f604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F604u;
    {
        const bool branch_taken_0x12f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f604) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F60Cu;
    // 0x12f60c: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x12f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x12f610: 0xa2a2029a  sb          $v0, 0x29A($s5)
    ctx->pc = 0x12f610u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 666), (uint8_t)GPR_U32(ctx, 2));
label_12f614:
    // 0x12f614: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x12f614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_12f618:
    // 0x12f618: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12f618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f61c: 0xaea300c4  sw          $v1, 0xC4($s5)
    ctx->pc = 0x12f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 3));
    // 0x12f620: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x12f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12f624: 0xaea300c8  sw          $v1, 0xC8($s5)
    ctx->pc = 0x12f624u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 200), GPR_U32(ctx, 3));
    // 0x12f628: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x12f628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12f62c: 0xaea300cc  sw          $v1, 0xCC($s5)
    ctx->pc = 0x12f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 3));
    // 0x12f630: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x12f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12f634: 0xaea300d0  sw          $v1, 0xD0($s5)
    ctx->pc = 0x12f634u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 3));
    // 0x12f638: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12f638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12f63c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12f63cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12f640: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12f640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f644: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12f644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12f648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f64c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12f64cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f65c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F65Cu;
        // 0x12f660: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F664u;
    // 0x12f664: 0x0  nop
    ctx->pc = 0x12f664u;
    // NOP
    // 0x12f668: 0x0  nop
    ctx->pc = 0x12f668u;
    // NOP
    // 0x12f66c: 0x0  nop
    ctx->pc = 0x12f66cu;
    // NOP
    if (ctx->pc == 0x12f66cu) { ctx->pc = 0x12f670u; }
}
