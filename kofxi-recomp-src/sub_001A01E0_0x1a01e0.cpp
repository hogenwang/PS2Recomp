#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A01E0
// Address: 0x1a01e0 - 0x1a0400
void sub_001A01E0_0x1a01e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A01E0_0x1a01e0");
#endif

    switch (ctx->pc) {
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a034cu: goto label_1a034c;
        case 0x1a03b4u: goto label_1a03b4;
        case 0x1a03bcu: goto label_1a03bc;
        default: break;
    }

    ctx->pc = 0x1a01e0u;

    // 0x1a01e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a01e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a01e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a01e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a01e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a01ec: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1a01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1a01f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a01f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a01f4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a01f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a01f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0200: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1a0200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1a0204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a0204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0208: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a0208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a020c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a020cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a0210: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1a0210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1a0214: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0218: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a0218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a021c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1a021cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0220: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a0220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0224: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a0224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0228: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1a0228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a022c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a022cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0230: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1a0230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0234: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1a0234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0238: 0xa2050004  sb          $a1, 0x4($s0)
    ctx->pc = 0x1a0238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a023c: 0xa2050006  sb          $a1, 0x6($s0)
    ctx->pc = 0x1a023cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0240: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x1a0240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0244: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1a0244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0248: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1a0248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a024c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a024cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a0250: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x1a0250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0254: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1a0254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0258: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x1a0258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a025c: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x1a025cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0260: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x1a0260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0264: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1a0264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1a0268: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1a0268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1a026c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1a026cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1a0270: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x1a0270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0274: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x1a0274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a0278: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x1a0278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a027c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1a027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1a0280: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1a0280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1a0284: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1a0284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0288: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x1a0288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a028c: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x1a028cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0290: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x1a0290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0294: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1a0294u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0298: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1a0298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a029c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a02a0:
    // 0x1a02a0: 0xa0e5014c  sb          $a1, 0x14C($a3)
    ctx->pc = 0x1a02a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 332), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02a4: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1a02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1a02a8: 0xa0e5014d  sb          $a1, 0x14D($a3)
    ctx->pc = 0x1a02a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 333), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a02b0: 0xa0e5014e  sb          $a1, 0x14E($a3)
    ctx->pc = 0x1a02b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 334), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02b4: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1a02b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a02b8: 0xa0e5014f  sb          $a1, 0x14F($a3)
    ctx->pc = 0x1a02b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 335), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02bc: 0xa0e50150  sb          $a1, 0x150($a3)
    ctx->pc = 0x1a02bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 336), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02c0: 0xa0e50151  sb          $a1, 0x151($a3)
    ctx->pc = 0x1a02c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 337), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02c4: 0xa0e50152  sb          $a1, 0x152($a3)
    ctx->pc = 0x1a02c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 338), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02c8: 0xa0e50153  sb          $a1, 0x153($a3)
    ctx->pc = 0x1a02c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 339), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02cc: 0xa4e00154  sh          $zero, 0x154($a3)
    ctx->pc = 0x1a02ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 340), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a02d0: 0xa4e00156  sh          $zero, 0x156($a3)
    ctx->pc = 0x1a02d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 342), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a02d4: 0xa4e40158  sh          $a0, 0x158($a3)
    ctx->pc = 0x1a02d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a02d8: 0xa4e4015a  sh          $a0, 0x15A($a3)
    ctx->pc = 0x1a02d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 346), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a02dc: 0xa0e5015c  sb          $a1, 0x15C($a3)
    ctx->pc = 0x1a02dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 348), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02e0: 0xa0e5015d  sb          $a1, 0x15D($a3)
    ctx->pc = 0x1a02e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 349), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02e4: 0xace00160  sw          $zero, 0x160($a3)
    ctx->pc = 0x1a02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 0));
    // 0x1a02e8: 0xa0e00164  sb          $zero, 0x164($a3)
    ctx->pc = 0x1a02e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a02ec: 0xa0e00165  sb          $zero, 0x165($a3)
    ctx->pc = 0x1a02ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 357), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a02f0: 0xa4e00166  sh          $zero, 0x166($a3)
    ctx->pc = 0x1a02f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a02f4: 0xa4e00168  sh          $zero, 0x168($a3)
    ctx->pc = 0x1a02f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a02f8: 0xa0650028  sb          $a1, 0x28($v1)
    ctx->pc = 0x1a02f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02fc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1a02fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1a0300: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x1a0300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
    // 0x1a0304: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x1a0304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x1a0308: 0xacc00140  sw          $zero, 0x140($a2)
    ctx->pc = 0x1a0308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 320), GPR_U32(ctx, 0));
    // 0x1a030c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A030Cu;
    {
        const bool branch_taken_0x1a030c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A030Cu;
            // 0x1a0310: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a030c) {
            ctx->pc = 0x1A02A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a02a0;
        }
    }
    ctx->pc = 0x1A0314u;
    // 0x1a0314: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1a0314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x1a0318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a031c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1a031cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1a0320: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1a0320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0324: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1a0324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1a0328: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1a0328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1a032c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1a032cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1a0330: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1a0330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1a0334: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1a0334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1a0338: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1a0338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1a033c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1a033cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1a0340: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x1a0340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x1a0344: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1a0344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1a0348: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x1a0348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_1a034c:
    // 0x1a034c: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x1a034cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x1a0350: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a0354: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x1a0354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
    // 0x1a0358: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1a0358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a035c: 0xac6000c4  sw          $zero, 0xC4($v1)
    ctx->pc = 0x1a035cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
    // 0x1a0360: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x1a0360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x1a0364: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x1a0364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    // 0x1a0368: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x1a0368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x1a036c: 0xac6000cc  sw          $zero, 0xCC($v1)
    ctx->pc = 0x1a036cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
    // 0x1a0370: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x1a0370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 0));
    // 0x1a0374: 0xac6000d0  sw          $zero, 0xD0($v1)
    ctx->pc = 0x1a0374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
    // 0x1a0378: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x1a0378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
    // 0x1a037c: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x1a037cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x1a0380: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x1a0380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
    // 0x1a0384: 0xac6000d8  sw          $zero, 0xD8($v1)
    ctx->pc = 0x1a0384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
    // 0x1a0388: 0xac600118  sw          $zero, 0x118($v1)
    ctx->pc = 0x1a0388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 0));
    // 0x1a038c: 0xac6000dc  sw          $zero, 0xDC($v1)
    ctx->pc = 0x1a038cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 0));
    // 0x1a0390: 0xac60011c  sw          $zero, 0x11C($v1)
    ctx->pc = 0x1a0390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 0));
    // 0x1a0394: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A0394u;
    {
        const bool branch_taken_0x1a0394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0394u;
            // 0x1a0398: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0394) {
            ctx->pc = 0x1A034Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a034c;
        }
    }
    ctx->pc = 0x1A039Cu;
    // 0x1a039c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a039cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a03a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a03a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03a4: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1a03a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a03a8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1a03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1a03ac: 0xc067f98  jal         func_19FE60
    ctx->pc = 0x1A03ACu;
    SET_GPR_U32(ctx, 31, 0x1A03B4u);
    ctx->pc = 0x1A03B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03ACu;
            // 0x1a03b0: 0xa2000041  sb          $zero, 0x41($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FE60u;
    if (runtime->hasFunction(0x19FE60u)) {
        auto targetFn = runtime->lookupFunction(0x19FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03B4u; }
        if (ctx->pc != 0x1A03B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FE60_0x19fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03B4u; }
        if (ctx->pc != 0x1A03B4u) { return; }
    }
    ctx->pc = 0x1A03B4u;
label_1a03b4:
    // 0x1a03b4: 0xc067fc0  jal         func_19FF00
    ctx->pc = 0x1A03B4u;
    SET_GPR_U32(ctx, 31, 0x1A03BCu);
    ctx->pc = 0x1A03B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03B4u;
            // 0x1a03b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FF00u;
    if (runtime->hasFunction(0x19FF00u)) {
        auto targetFn = runtime->lookupFunction(0x19FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03BCu; }
        if (ctx->pc != 0x1A03BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FF00_0x19ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03BCu; }
        if (ctx->pc != 0x1A03BCu) { return; }
    }
    ctx->pc = 0x1A03BCu;
label_1a03bc:
    // 0x1a03bc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1a03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1a03c0: 0xa2000242  sb          $zero, 0x242($s0)
    ctx->pc = 0x1a03c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 578), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a03c4: 0x9064f35a  lbu         $a0, -0xCA6($v1)
    ctx->pc = 0x1a03c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x1a03c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a03cc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A03CCu;
    {
        const bool branch_taken_0x1a03cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A03D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03CCu;
            // 0x1a03d0: 0xae000244  sw          $zero, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03cc) {
            ctx->pc = 0x1A03E0u;
            goto label_1a03e0;
        }
    }
    ctx->pc = 0x1A03D4u;
    // 0x1a03d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a03d8: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A03D8u;
    {
        const bool branch_taken_0x1a03d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a03d8) {
            ctx->pc = 0x1A03DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03D8u;
            // 0x1a03dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A03ECu;
            goto label_1a03ec;
        }
    }
    ctx->pc = 0x1A03E0u;
label_1a03e0:
    // 0x1a03e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a03e4: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x1a03e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a03e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a03e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a03ec:
    // 0x1a03ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a03ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a03f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a03f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a03f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A03F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A03F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03F4u;
            // 0x1a03f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A03FCu;
    // 0x1a03fc: 0x0  nop
    ctx->pc = 0x1a03fcu;
    // NOP
    ctx->pc = 0x1a0400u;
}
