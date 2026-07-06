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

// Function: sub_001761C0
// Address: 0x1761c0 - 0x1762f0
void sub_001761C0_0x1761c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001761C0_0x1761c0");
#endif

    switch (ctx->pc) {
        case 0x1761f4u: goto label_1761f4;
        default: break;
    }

    ctx->pc = 0x1761c0u;

    // 0x1761c0: 0x240300e6  addiu       $v1, $zero, 0xE6
    ctx->pc = 0x1761c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1761c4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1761c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1761c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1761c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1761cc: 0x24639e60  addiu       $v1, $v1, -0x61A0
    ctx->pc = 0x1761ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942304));
    // 0x1761d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1761d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1761d4: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1761d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1761d8: 0x29040010  slti        $a0, $t0, 0x10
    ctx->pc = 0x1761d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1761dc: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1761DCu;
    {
        const bool branch_taken_0x1761dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1761dc) {
            ctx->pc = 0x176248u;
            goto label_176248;
        }
    }
    ctx->pc = 0x1761E4u;
    // 0x1761e4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1761e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1761e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1761e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1761ec: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1761ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1761f0: 0x2467000e  addiu       $a3, $v1, 0xE
    ctx->pc = 0x1761f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_1761f4:
    // 0x1761f4: 0x84e60006  lh          $a2, 0x6($a3)
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1761f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1761f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1761fc: 0x29240010  slti        $a0, $t1, 0x10
    ctx->pc = 0x1761fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x176200: 0xa4e6fff8  sh          $a2, -0x8($a3)
    ctx->pc = 0x176200u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967288), (uint16_t)GPR_U32(ctx, 6));
    // 0x176204: 0x84e60008  lh          $a2, 0x8($a3)
    ctx->pc = 0x176204u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x176208: 0xa4e6fffa  sh          $a2, -0x6($a3)
    ctx->pc = 0x176208u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967290), (uint16_t)GPR_U32(ctx, 6));
    // 0x17620c: 0x90e6000c  lbu         $a2, 0xC($a3)
    ctx->pc = 0x17620cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x176210: 0xa0e6fffe  sb          $a2, -0x2($a3)
    ctx->pc = 0x176210u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967294), (uint8_t)GPR_U32(ctx, 6));
    // 0x176214: 0x90e6000d  lbu         $a2, 0xD($a3)
    ctx->pc = 0x176214u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x176218: 0xa0e6ffff  sb          $a2, -0x1($a3)
    ctx->pc = 0x176218u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x17621c: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x17621cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x176220: 0xa4e6fffc  sh          $a2, -0x4($a3)
    ctx->pc = 0x176220u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967292), (uint16_t)GPR_U32(ctx, 6));
    // 0x176224: 0x90e6000e  lbu         $a2, 0xE($a3)
    ctx->pc = 0x176224u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x176228: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x176228u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x17622c: 0x84e60010  lh          $a2, 0x10($a3)
    ctx->pc = 0x17622cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x176230: 0xa4e60002  sh          $a2, 0x2($a3)
    ctx->pc = 0x176230u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x176234: 0x84e60012  lh          $a2, 0x12($a3)
    ctx->pc = 0x176234u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x176238: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x176238u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x17623c: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17623Cu;
    {
        const bool branch_taken_0x17623c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17623Cu;
        // 0x176240: 0x24e7000e  addiu       $a3, $a3, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17623c) {
            ctx->pc = 0x1761F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1761f4;
        }
    }
    ctx->pc = 0x176244u;
    // 0x176244: 0x0  nop
    ctx->pc = 0x176244u;
    // NOP
label_176248:
    // 0x176248: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x176248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x17624c: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x17624cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x176250: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x176250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176254: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x176254u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x176258: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x176258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17625c: 0xa4c40006  sh          $a0, 0x6($a2)
    ctx->pc = 0x17625cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x176260: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x176260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x176264: 0xa4c40008  sh          $a0, 0x8($a2)
    ctx->pc = 0x176264u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x176268: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x176268u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x17626c: 0xa0c4000c  sb          $a0, 0xC($a2)
    ctx->pc = 0x17626cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x176270: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x176270u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x176274: 0xa0c4000d  sb          $a0, 0xD($a2)
    ctx->pc = 0x176274u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x176278: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x176278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17627c: 0xa4c4000a  sh          $a0, 0xA($a2)
    ctx->pc = 0x17627cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x176280: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x176280u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x176284: 0xa0c4000e  sb          $a0, 0xE($a2)
    ctx->pc = 0x176284u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x176288: 0x84a4000a  lh          $a0, 0xA($a1)
    ctx->pc = 0x176288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x17628c: 0xa4c40010  sh          $a0, 0x10($a2)
    ctx->pc = 0x17628cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x176290: 0x84a4000c  lh          $a0, 0xC($a1)
    ctx->pc = 0x176290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x176294: 0xa4c40012  sh          $a0, 0x12($a2)
    ctx->pc = 0x176294u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x176298: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x176298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17629c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1762a0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1762a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1762a4: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1762a8: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x1762a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1762ac: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x1762acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1762b0: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1762B0u;
    {
        const bool branch_taken_0x1762b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1762b0) {
            ctx->pc = 0x1762B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762B0u;
            // 0x1762b4: 0x84a40004  lh          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1762C0u;
            goto label_1762c0;
        }
    }
    ctx->pc = 0x1762B8u;
    // 0x1762b8: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x1762b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x1762bc: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1762bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1762c0:
    // 0x1762c0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1762c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1762c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1762C4u;
    {
        const bool branch_taken_0x1762c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1762c4) {
            ctx->pc = 0x1762C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762C4u;
            // 0x1762c8: 0x84a40000  lh          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1762D8u;
            goto label_1762d8;
        }
    }
    ctx->pc = 0x1762CCu;
    // 0x1762cc: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1762ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1762d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1762D0u;
    {
        const bool branch_taken_0x1762d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762D0u;
        // 0x1762d4: 0xa4640004  sh          $a0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762d0) {
            ctx->pc = 0x1762E4u;
            goto label_1762e4;
        }
    }
    ctx->pc = 0x1762D8u;
label_1762d8:
    // 0x1762d8: 0x84650004  lh          $a1, 0x4($v1)
    ctx->pc = 0x1762d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1762dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1762dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1762e0: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x1762e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
label_1762e4:
    // 0x1762e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1762E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1762E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1762ECu;
    // 0x1762ec: 0x0  nop
    ctx->pc = 0x1762ecu;
    // NOP
}
