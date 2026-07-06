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

// Function: sub_002641A8
// Address: 0x2641a8 - 0x264360
void sub_002641A8_0x2641a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002641A8_0x2641a8");
#endif

    switch (ctx->pc) {
        case 0x2641b0u: goto label_2641b0;
        case 0x264218u: goto label_264218;
        case 0x264330u: goto label_264330;
        default: break;
    }

    ctx->pc = 0x2641a8u;

    // 0x2641a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2641a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2641ac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2641acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2641b0:
    // 0x2641b0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2641b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2641b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641b8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2641b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2641bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2641bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641c0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2641c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2641c4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2641C4u;
    {
        const bool branch_taken_0x2641c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2641C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641C4u;
        // 0x2641c8: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641c4) {
            ctx->pc = 0x2641DCu;
            goto label_2641dc;
        }
    }
    ctx->pc = 0x2641CCu;
    // 0x2641cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2641ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2641d0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2641d4: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2641d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2641d8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2641d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2641dc:
    // 0x2641dc: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2641dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2641e0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2641e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2641e4: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x2641e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2641e8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2641E8u;
    {
        const bool branch_taken_0x2641e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2641ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641E8u;
        // 0x2641ec: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641e8) {
            ctx->pc = 0x2641F8u;
            goto label_2641f8;
        }
    }
    ctx->pc = 0x2641F0u;
    // 0x2641f0: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2641F0u;
    {
        const bool branch_taken_0x2641f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2641f0) {
            ctx->pc = 0x2641F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2641F0u;
            // 0x2641f4: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264204u;
            goto label_264204;
        }
    }
    ctx->pc = 0x2641F8u;
label_2641f8:
    // 0x2641f8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2641f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2641fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2641fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x264200: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x264200u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_264204:
    // 0x264204: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x264204u;
    {
        const bool branch_taken_0x264204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x264204) {
            ctx->pc = 0x2642A0u;
            goto label_2642a0;
        }
    }
    ctx->pc = 0x26420Cu;
    // 0x26420c: 0x3c0b003e  lui         $t3, 0x3E
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)62 << 16));
    // 0x264210: 0x2562b7c8  addiu       $v0, $t3, -0x4838
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294948808));
    // 0x264214: 0x0  nop
    ctx->pc = 0x264214u;
    // NOP
label_264218:
    // 0x264218: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x264218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26421c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x26421cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264220: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x264220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x264224: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x264224u;
    {
        const bool branch_taken_0x264224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264224u;
        // 0x264228: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264224) {
            ctx->pc = 0x26425Cu;
            goto label_26425c;
        }
    }
    ctx->pc = 0x26422Cu;
    // 0x26422c: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26422Cu;
    {
        const bool branch_taken_0x26422c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x264230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26422Cu;
        // 0x264230: 0xe91018  mult        $v0, $a3, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26422c) {
            ctx->pc = 0x264248u;
            goto label_264248;
        }
    }
    ctx->pc = 0x264234u;
    // 0x264234: 0x24c2ffc8  addiu       $v0, $a2, -0x38
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967240));
    // 0x264238: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x264238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26423c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x26423Cu;
    {
        const bool branch_taken_0x26423c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26423c) {
            ctx->pc = 0x264318u;
            goto label_264318;
        }
    }
    ctx->pc = 0x264244u;
    // 0x264244: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x264244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_264248:
    // 0x264248: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x264248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26424c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x26424cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264250: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x264250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x264254: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x264254u;
    {
        const bool branch_taken_0x264254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264254u;
        // 0x264258: 0x463821  addu        $a3, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264254) {
            ctx->pc = 0x264294u;
            goto label_264294;
        }
    }
    ctx->pc = 0x26425Cu;
label_26425c:
    // 0x26425c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x264260: 0x1522000f  bne         $t1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x264260u;
    {
        const bool branch_taken_0x264260 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x264264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264260u;
        // 0x264264: 0x30a20044  andi        $v0, $a1, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)68);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264260) {
            ctx->pc = 0x2642A0u;
            goto label_2642a0;
        }
    }
    ctx->pc = 0x264268u;
    // 0x264268: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x264268u;
    {
        const bool branch_taken_0x264268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264268u;
        // 0x26426c: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264268) {
            ctx->pc = 0x2642A0u;
            goto label_2642a0;
        }
    }
    ctx->pc = 0x264270u;
    // 0x264270: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x264270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x264274: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264274u;
    {
        const bool branch_taken_0x264274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264274u;
        // 0x264278: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264274) {
            ctx->pc = 0x264284u;
            goto label_264284;
        }
    }
    ctx->pc = 0x26427Cu;
    // 0x26427c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26427Cu;
    {
        const bool branch_taken_0x26427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26427Cu;
        // 0x264280: 0x2462ff9f  addiu       $v0, $v1, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26427c) {
            ctx->pc = 0x264288u;
            goto label_264288;
        }
    }
    ctx->pc = 0x264284u;
label_264284:
    // 0x264284: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x264284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_264288:
    // 0x264288: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x264288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26428c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x264290: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x264290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264294:
    // 0x264294: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x264294u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264298: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x264298u;
    {
        const bool branch_taken_0x264298 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264298u;
        // 0x26429c: 0x2562b7c8  addiu       $v0, $t3, -0x4838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294948808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264298) {
            ctx->pc = 0x264218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264218;
        }
    }
    ctx->pc = 0x2642A0u;
label_2642a0:
    // 0x2642a0: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2642A0u;
    {
        const bool branch_taken_0x2642a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642a0) {
            ctx->pc = 0x264318u;
            goto label_264318;
        }
    }
    ctx->pc = 0x2642A8u;
    // 0x2642a8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2642a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2642ac: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2642acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2642b0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2642B0u;
    {
        const bool branch_taken_0x2642b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2642B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642B0u;
        // 0x2642b4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642b0) {
            ctx->pc = 0x2642DCu;
            goto label_2642dc;
        }
    }
    ctx->pc = 0x2642B8u;
    // 0x2642b8: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2642b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2642bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2642BCu;
    {
        const bool branch_taken_0x2642bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642bc) {
            ctx->pc = 0x264318u;
            goto label_264318;
        }
    }
    ctx->pc = 0x2642C4u;
    // 0x2642c4: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x2642c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2642c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2642C8u;
    {
        const bool branch_taken_0x2642c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642C8u;
        // 0x2642cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642c8) {
            ctx->pc = 0x264318u;
            goto label_264318;
        }
    }
    ctx->pc = 0x2642D0u;
    // 0x2642d0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2642d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x2642d4: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x2642D4u;
    {
        const bool branch_taken_0x2642d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642D4u;
        // 0x2642d8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642d4) {
            ctx->pc = 0x2641B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2641b0;
        }
    }
    ctx->pc = 0x2642DCu;
label_2642dc:
    // 0x2642dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2642DCu;
    {
        const bool branch_taken_0x2642dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642DCu;
        // 0x2642e0: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642dc) {
            ctx->pc = 0x2642FCu;
            goto label_2642fc;
        }
    }
    ctx->pc = 0x2642E4u;
    // 0x2642e4: 0x2442b7c8  addiu       $v0, $v0, -0x4838
    ctx->pc = 0x2642e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2642e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2642ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2642ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2642f0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2642f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2642f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2642F4u;
    {
        const bool branch_taken_0x2642f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642f4) {
            ctx->pc = 0x264318u;
            goto label_264318;
        }
    }
    ctx->pc = 0x2642FCu;
label_2642fc:
    // 0x2642fc: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2642fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x264300: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x264300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x264304: 0x11d1023  subu        $v0, $t0, $sp
    ctx->pc = 0x264304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x264308: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x264308u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    // 0x26430c: 0x2ca30005  sltiu       $v1, $a1, 0x5
    ctx->pc = 0x26430cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x264310: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264310u;
    {
        const bool branch_taken_0x264310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264310u;
        // 0x264314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264310) {
            ctx->pc = 0x264324u;
            goto label_264324;
        }
    }
    ctx->pc = 0x264318u;
label_264318:
    // 0x264318: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x264318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26431c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26431Cu;
    {
        const bool branch_taken_0x26431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26431Cu;
        // 0x264320: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26431c) {
            ctx->pc = 0x264354u;
            goto label_264354;
        }
    }
    ctx->pc = 0x264324u;
label_264324:
    // 0x264324: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x264324u;
    {
        const bool branch_taken_0x264324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x264328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264324u;
        // 0x264328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264324) {
            ctx->pc = 0x264350u;
            goto label_264350;
        }
    }
    ctx->pc = 0x26432Cu;
    // 0x26432c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_264330:
    // 0x264330: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x264330u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264334: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x264334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x264338: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x264338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26433c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x26433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x264340: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x264340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x264344: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x264344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x264348: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x264348u;
    {
        const bool branch_taken_0x264348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264348) {
            ctx->pc = 0x264330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264330;
        }
    }
    ctx->pc = 0x264350u;
label_264350:
    // 0x264350: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x264350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_264354:
    // 0x264354: 0x3e00008  jr          $ra
    ctx->pc = 0x264354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264354u;
        // 0x264358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26435Cu;
    // 0x26435c: 0x0  nop
    ctx->pc = 0x26435cu;
    // NOP
}
