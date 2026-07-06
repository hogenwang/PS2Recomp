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

// Function: sub_0019FFC0
// Address: 0x19ffc0 - 0x1a01e0
void sub_0019FFC0_0x19ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FFC0_0x19ffc0");
#endif

    switch (ctx->pc) {
        case 0x1a0084u: goto label_1a0084;
        case 0x1a0130u: goto label_1a0130;
        case 0x1a0198u: goto label_1a0198;
        case 0x1a01a0u: goto label_1a01a0;
        default: break;
    }

    ctx->pc = 0x19ffc0u;

    // 0x19ffc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ffc4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ffc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ffcc: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x19ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x19ffd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ffd4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19ffd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ffd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ffe0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x19ffe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19ffe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffe8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19ffec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x19ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19fff0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x19fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x19fff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fff8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19fffc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x19fffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0000: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a0000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0004: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a0004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0008: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1a0008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a000c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a000cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0010: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1a0010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0014: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1a0014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0018: 0xa2050004  sb          $a1, 0x4($s0)
    ctx->pc = 0x1a0018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a001c: 0xa2050006  sb          $a1, 0x6($s0)
    ctx->pc = 0x1a001cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0020: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x1a0020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0024: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1a0024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0028: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1a0028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a002c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a002cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a0030: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x1a0030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0034: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1a0034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0038: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1a0038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a003c: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x1a003cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0040: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x1a0040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0044: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x1a0044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0048: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1a0048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1a004c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1a004cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1a0050: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1a0050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1a0054: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x1a0054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0058: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x1a0058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a005c: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x1a005cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0060: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1a0060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1a0064: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1a0064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1a0068: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1a0068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a006c: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x1a006cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0070: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x1a0070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0074: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x1a0074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0078: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1a0078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a007c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1a007cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0080: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a0080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0084:
    // 0x1a0084: 0xa0e5014c  sb          $a1, 0x14C($a3)
    ctx->pc = 0x1a0084u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 332), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0088: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1a0088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1a008c: 0xa0e5014d  sb          $a1, 0x14D($a3)
    ctx->pc = 0x1a008cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 333), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0090: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a0090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a0094: 0xa0e5014e  sb          $a1, 0x14E($a3)
    ctx->pc = 0x1a0094u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 334), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0098: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1a0098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a009c: 0xa0e5014f  sb          $a1, 0x14F($a3)
    ctx->pc = 0x1a009cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 335), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00a0: 0xa0e50150  sb          $a1, 0x150($a3)
    ctx->pc = 0x1a00a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 336), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00a4: 0xa0e50151  sb          $a1, 0x151($a3)
    ctx->pc = 0x1a00a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 337), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00a8: 0xa0e50152  sb          $a1, 0x152($a3)
    ctx->pc = 0x1a00a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 338), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00ac: 0xa0e50153  sb          $a1, 0x153($a3)
    ctx->pc = 0x1a00acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 339), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00b0: 0xa4e00154  sh          $zero, 0x154($a3)
    ctx->pc = 0x1a00b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 340), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a00b4: 0xa4e00156  sh          $zero, 0x156($a3)
    ctx->pc = 0x1a00b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 342), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a00b8: 0xa4e40158  sh          $a0, 0x158($a3)
    ctx->pc = 0x1a00b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a00bc: 0xa4e4015a  sh          $a0, 0x15A($a3)
    ctx->pc = 0x1a00bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 346), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a00c0: 0xa0e5015c  sb          $a1, 0x15C($a3)
    ctx->pc = 0x1a00c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 348), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00c4: 0xa0e5015d  sb          $a1, 0x15D($a3)
    ctx->pc = 0x1a00c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 349), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00c8: 0xace00160  sw          $zero, 0x160($a3)
    ctx->pc = 0x1a00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 0));
    // 0x1a00cc: 0xa0e00164  sb          $zero, 0x164($a3)
    ctx->pc = 0x1a00ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a00d0: 0xa0e00165  sb          $zero, 0x165($a3)
    ctx->pc = 0x1a00d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 357), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a00d4: 0xa4e00166  sh          $zero, 0x166($a3)
    ctx->pc = 0x1a00d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a00d8: 0xa4e00168  sh          $zero, 0x168($a3)
    ctx->pc = 0x1a00d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a00dc: 0xa0650028  sb          $a1, 0x28($v1)
    ctx->pc = 0x1a00dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a00e0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1a00e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1a00e4: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x1a00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
    // 0x1a00e8: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x1a00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x1a00ec: 0xacc00140  sw          $zero, 0x140($a2)
    ctx->pc = 0x1a00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 320), GPR_U32(ctx, 0));
    // 0x1a00f0: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A00F0u;
    {
        const bool branch_taken_0x1a00f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00F0u;
        // 0x1a00f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00f0) {
            ctx->pc = 0x1A0084u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0084;
        }
    }
    ctx->pc = 0x1A00F8u;
    // 0x1a00f8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1a00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x1a00fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a00fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0100: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1a0100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1a0104: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1a0104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0108: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1a0108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1a010c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1a010cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1a0110: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1a0110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1a0114: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1a0114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1a0118: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1a0118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1a011c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1a011cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1a0120: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1a0120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1a0124: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x1a0124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x1a0128: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1a0128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1a012c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x1a012cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_1a0130:
    // 0x1a0130: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x1a0130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x1a0134: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a0134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a0138: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x1a0138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
    // 0x1a013c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1a013cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a0140: 0xac6000c4  sw          $zero, 0xC4($v1)
    ctx->pc = 0x1a0140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
    // 0x1a0144: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x1a0144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x1a0148: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x1a0148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    // 0x1a014c: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x1a014cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x1a0150: 0xac6000cc  sw          $zero, 0xCC($v1)
    ctx->pc = 0x1a0150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
    // 0x1a0154: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x1a0154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 0));
    // 0x1a0158: 0xac6000d0  sw          $zero, 0xD0($v1)
    ctx->pc = 0x1a0158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
    // 0x1a015c: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x1a015cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
    // 0x1a0160: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x1a0160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x1a0164: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x1a0164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
    // 0x1a0168: 0xac6000d8  sw          $zero, 0xD8($v1)
    ctx->pc = 0x1a0168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
    // 0x1a016c: 0xac600118  sw          $zero, 0x118($v1)
    ctx->pc = 0x1a016cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 0));
    // 0x1a0170: 0xac6000dc  sw          $zero, 0xDC($v1)
    ctx->pc = 0x1a0170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 0));
    // 0x1a0174: 0xac60011c  sw          $zero, 0x11C($v1)
    ctx->pc = 0x1a0174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 0));
    // 0x1a0178: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A0178u;
    {
        const bool branch_taken_0x1a0178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0178u;
        // 0x1a017c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0178) {
            ctx->pc = 0x1A0130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0130;
        }
    }
    ctx->pc = 0x1A0180u;
    // 0x1a0180: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a0180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a0184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0188: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1a0188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a018c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1a018cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1a0190: 0xc067f98  jal         func_19FE60
    ctx->pc = 0x1A0190u;
    SET_GPR_U32(ctx, 31, 0x1A0198u);
    ctx->pc = 0x1A0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0190u;
    // 0x1a0194: 0xa2000041  sb          $zero, 0x41($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FE60u, 0x1A0190u, 0x1A0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0198u;
label_1a0198:
    // 0x1a0198: 0xc067fc0  jal         func_19FF00
    ctx->pc = 0x1A0198u;
    SET_GPR_U32(ctx, 31, 0x1A01A0u);
    ctx->pc = 0x1A019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0198u;
    // 0x1a019c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FF00u, 0x1A0198u, 0x1A01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01A0u;
label_1a01a0:
    // 0x1a01a0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1a01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1a01a4: 0xa2000242  sb          $zero, 0x242($s0)
    ctx->pc = 0x1a01a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 578), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a01a8: 0x9064f35a  lbu         $a0, -0xCA6($v1)
    ctx->pc = 0x1a01a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x1a01ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a01acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a01b0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A01B0u;
    {
        const bool branch_taken_0x1a01b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01B0u;
        // 0x1a01b4: 0xae000244  sw          $zero, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01b0) {
            ctx->pc = 0x1A01C4u;
            goto label_1a01c4;
        }
    }
    ctx->pc = 0x1A01B8u;
    // 0x1a01b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a01bc: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A01BCu;
    {
        const bool branch_taken_0x1a01bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a01bc) {
            ctx->pc = 0x1A01C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A01BCu;
            // 0x1a01c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A01D0u;
            goto label_1a01d0;
        }
    }
    ctx->pc = 0x1A01C4u;
label_1a01c4:
    // 0x1a01c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a01c8: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x1a01c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a01cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a01ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a01d0:
    // 0x1a01d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a01d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a01d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a01d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a01d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A01D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D8u;
        // 0x1a01dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A01D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A01E0u;
}
