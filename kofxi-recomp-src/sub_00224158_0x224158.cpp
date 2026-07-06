#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224158
// Address: 0x224158 - 0x224270
void sub_00224158_0x224158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224158_0x224158");
#endif

    switch (ctx->pc) {
        case 0x224158u: goto label_224158;
        case 0x22415cu: goto label_22415c;
        case 0x224160u: goto label_224160;
        case 0x224164u: goto label_224164;
        case 0x224168u: goto label_224168;
        case 0x22416cu: goto label_22416c;
        case 0x224170u: goto label_224170;
        case 0x224174u: goto label_224174;
        case 0x224178u: goto label_224178;
        case 0x22417cu: goto label_22417c;
        case 0x224180u: goto label_224180;
        case 0x224184u: goto label_224184;
        case 0x224188u: goto label_224188;
        case 0x22418cu: goto label_22418c;
        case 0x224190u: goto label_224190;
        case 0x224194u: goto label_224194;
        case 0x224198u: goto label_224198;
        case 0x22419cu: goto label_22419c;
        case 0x2241a0u: goto label_2241a0;
        case 0x2241a4u: goto label_2241a4;
        case 0x2241a8u: goto label_2241a8;
        case 0x2241acu: goto label_2241ac;
        case 0x2241b0u: goto label_2241b0;
        case 0x2241b4u: goto label_2241b4;
        case 0x2241b8u: goto label_2241b8;
        case 0x2241bcu: goto label_2241bc;
        case 0x2241c0u: goto label_2241c0;
        case 0x2241c4u: goto label_2241c4;
        case 0x2241c8u: goto label_2241c8;
        case 0x2241ccu: goto label_2241cc;
        case 0x2241d0u: goto label_2241d0;
        case 0x2241d4u: goto label_2241d4;
        case 0x2241d8u: goto label_2241d8;
        case 0x2241dcu: goto label_2241dc;
        case 0x2241e0u: goto label_2241e0;
        case 0x2241e4u: goto label_2241e4;
        case 0x2241e8u: goto label_2241e8;
        case 0x2241ecu: goto label_2241ec;
        case 0x2241f0u: goto label_2241f0;
        case 0x2241f4u: goto label_2241f4;
        case 0x2241f8u: goto label_2241f8;
        case 0x2241fcu: goto label_2241fc;
        case 0x224200u: goto label_224200;
        case 0x224204u: goto label_224204;
        case 0x224208u: goto label_224208;
        case 0x22420cu: goto label_22420c;
        case 0x224210u: goto label_224210;
        case 0x224214u: goto label_224214;
        case 0x224218u: goto label_224218;
        case 0x22421cu: goto label_22421c;
        case 0x224220u: goto label_224220;
        case 0x224224u: goto label_224224;
        case 0x224228u: goto label_224228;
        case 0x22422cu: goto label_22422c;
        case 0x224230u: goto label_224230;
        case 0x224234u: goto label_224234;
        case 0x224238u: goto label_224238;
        case 0x22423cu: goto label_22423c;
        case 0x224240u: goto label_224240;
        case 0x224244u: goto label_224244;
        case 0x224248u: goto label_224248;
        case 0x22424cu: goto label_22424c;
        case 0x224250u: goto label_224250;
        case 0x224254u: goto label_224254;
        case 0x224258u: goto label_224258;
        case 0x22425cu: goto label_22425c;
        case 0x224260u: goto label_224260;
        case 0x224264u: goto label_224264;
        case 0x224268u: goto label_224268;
        case 0x22426cu: goto label_22426c;
        default: break;
    }

    ctx->pc = 0x224158u;

label_224158:
    // 0x224158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22415c:
    // 0x22415c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_224160:
    // 0x224160: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x224160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_224164:
    // 0x224164: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x224164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_224168:
    // 0x224168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22416c:
    // 0x22416c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_224170:
    // 0x224170: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x224170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_224174:
    // 0x224174: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x224174u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
label_224178:
    // 0x224178: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_22417c:
    if (ctx->pc == 0x22417Cu) {
        ctx->pc = 0x22417Cu;
            // 0x22417c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224180u;
        goto label_224180;
    }
    ctx->pc = 0x224178u;
    {
        const bool branch_taken_0x224178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224178u;
            // 0x22417c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224178) {
            ctx->pc = 0x2241BCu;
            goto label_2241bc;
        }
    }
    ctx->pc = 0x224180u;
label_224180:
    // 0x224180: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_224184:
    // 0x224184: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224184u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_224188:
    // 0x224188: 0x24843450  addiu       $a0, $a0, 0x3450
    ctx->pc = 0x224188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
label_22418c:
    // 0x22418c: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x22418cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
label_224190:
    // 0x224190: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x224190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_224194:
    // 0x224194: 0x0  nop
    ctx->pc = 0x224194u;
    // NOP
label_224198:
    // 0x224198: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22419c:
    // 0x22419c: 0xc089794  jal         func_225E50
label_2241a0:
    if (ctx->pc == 0x2241A0u) {
        ctx->pc = 0x2241A0u;
            // 0x2241a0: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->pc = 0x2241A4u;
        goto label_2241a4;
    }
    ctx->pc = 0x22419Cu;
    SET_GPR_U32(ctx, 31, 0x2241A4u);
    ctx->pc = 0x2241A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22419Cu;
            // 0x2241a0: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241A4u; }
        if (ctx->pc != 0x2241A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241A4u; }
        if (ctx->pc != 0x2241A4u) { return; }
    }
    ctx->pc = 0x2241A4u;
label_2241a4:
    // 0x2241a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2241a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2241a8:
    // 0x2241a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2241a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2241ac:
    // 0x2241ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2241acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2241b0:
    // 0x2241b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2241b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2241b4:
    // 0x2241b4: 0x3e00008  jr          $ra
label_2241b8:
    if (ctx->pc == 0x2241B8u) {
        ctx->pc = 0x2241B8u;
            // 0x2241b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2241BCu;
        goto label_2241bc;
    }
    ctx->pc = 0x2241B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2241B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241B4u;
            // 0x2241b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2241BCu;
label_2241bc:
    // 0x2241bc: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2241bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2241c0:
    // 0x2241c0: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2241c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2241c4:
    // 0x2241c4: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
label_2241c8:
    if (ctx->pc == 0x2241C8u) {
        ctx->pc = 0x2241C8u;
            // 0x2241c8: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2241CCu;
        goto label_2241cc;
    }
    ctx->pc = 0x2241C4u;
    {
        const bool branch_taken_0x2241c4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2241C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241C4u;
            // 0x2241c8: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241c4) {
            ctx->pc = 0x2241E0u;
            goto label_2241e0;
        }
    }
    ctx->pc = 0x2241CCu;
label_2241cc:
    // 0x2241cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2241ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2241d0:
    // 0x2241d0: 0x24843450  addiu       $a0, $a0, 0x3450
    ctx->pc = 0x2241d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
label_2241d4:
    // 0x2241d4: 0x25083460  addiu       $t0, $t0, 0x3460
    ctx->pc = 0x2241d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13408));
label_2241d8:
    // 0x2241d8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_2241dc:
    if (ctx->pc == 0x2241DCu) {
        ctx->pc = 0x2241DCu;
            // 0x2241dc: 0x240500d3  addiu       $a1, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->pc = 0x2241E0u;
        goto label_2241e0;
    }
    ctx->pc = 0x2241D8u;
    {
        const bool branch_taken_0x2241d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241D8u;
            // 0x2241dc: 0x240500d3  addiu       $a1, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241d8) {
            ctx->pc = 0x224198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224198;
        }
    }
    ctx->pc = 0x2241E0u;
label_2241e0:
    // 0x2241e0: 0x8c8d106c  lw          $t5, 0x106C($a0)
    ctx->pc = 0x2241e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4204)));
label_2241e4:
    // 0x2241e4: 0x15a00006  bnez        $t5, . + 4 + (0x6 << 2)
label_2241e8:
    if (ctx->pc == 0x2241E8u) {
        ctx->pc = 0x2241E8u;
            // 0x2241e8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2241ECu;
        goto label_2241ec;
    }
    ctx->pc = 0x2241E4u;
    {
        const bool branch_taken_0x2241e4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2241E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241E4u;
            // 0x2241e8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241e4) {
            ctx->pc = 0x224200u;
            goto label_224200;
        }
    }
    ctx->pc = 0x2241ECu;
label_2241ec:
    // 0x2241ec: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2241ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2241f0:
    // 0x2241f0: 0x24843450  addiu       $a0, $a0, 0x3450
    ctx->pc = 0x2241f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
label_2241f4:
    // 0x2241f4: 0x25083378  addiu       $t0, $t0, 0x3378
    ctx->pc = 0x2241f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
label_2241f8:
    // 0x2241f8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_2241fc:
    if (ctx->pc == 0x2241FCu) {
        ctx->pc = 0x2241FCu;
            // 0x2241fc: 0x240500d6  addiu       $a1, $zero, 0xD6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
        ctx->pc = 0x224200u;
        goto label_224200;
    }
    ctx->pc = 0x2241F8u;
    {
        const bool branch_taken_0x2241f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241F8u;
            // 0x2241fc: 0x240500d6  addiu       $a1, $zero, 0xD6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241f8) {
            ctx->pc = 0x224198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224198;
        }
    }
    ctx->pc = 0x224200u;
label_224200:
    // 0x224200: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
label_224204:
    if (ctx->pc == 0x224204u) {
        ctx->pc = 0x224204u;
            // 0x224204: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x224208u;
        goto label_224208;
    }
    ctx->pc = 0x224200u;
    {
        const bool branch_taken_0x224200 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x224204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224200u;
            // 0x224204: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224200) {
            ctx->pc = 0x22423Cu;
            goto label_22423c;
        }
    }
    ctx->pc = 0x224208u;
label_224208:
    // 0x224208: 0x8deeca20  lw          $t6, -0x35E0($t7)
    ctx->pc = 0x224208u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953504)));
label_22420c:
    // 0x22420c: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
label_224210:
    if (ctx->pc == 0x224210u) {
        ctx->pc = 0x224210u;
            // 0x224210: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224214u;
        goto label_224214;
    }
    ctx->pc = 0x22420Cu;
    {
        const bool branch_taken_0x22420c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x224210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22420Cu;
            // 0x224210: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22420c) {
            ctx->pc = 0x22423Cu;
            goto label_22423c;
        }
    }
    ctx->pc = 0x224214u;
label_224214:
    // 0x224214: 0xc08903a  jal         func_2240E8
label_224218:
    if (ctx->pc == 0x224218u) {
        ctx->pc = 0x224218u;
            // 0x224218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22421Cu;
        goto label_22421c;
    }
    ctx->pc = 0x224214u;
    SET_GPR_U32(ctx, 31, 0x22421Cu);
    ctx->pc = 0x224218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224214u;
            // 0x224218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2240E8u;
    if (runtime->hasFunction(0x2240E8u)) {
        auto targetFn = runtime->lookupFunction(0x2240E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22421Cu; }
        if (ctx->pc != 0x22421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002240E8_0x2240e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22421Cu; }
        if (ctx->pc != 0x22421Cu) { return; }
    }
    ctx->pc = 0x22421Cu;
label_22421c:
    // 0x22421c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x22421cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
label_224220:
    // 0x224220: 0x2516821  addu        $t5, $s2, $s1
    ctx->pc = 0x224220u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_224224:
    // 0x224224: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x224224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_224228:
    // 0x224228: 0x93ae0001  lbu         $t6, 0x1($sp)
    ctx->pc = 0x224228u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_22422c:
    // 0x22422c: 0x93af0000  lbu         $t7, 0x0($sp)
    ctx->pc = 0x22422cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_224230:
    // 0x224230: 0xa1ae0001  sb          $t6, 0x1($t5)
    ctx->pc = 0x224230u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 14));
label_224234:
    // 0x224234: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x224234u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
label_224238:
    // 0x224238: 0x8e0d106c  lw          $t5, 0x106C($s0)
    ctx->pc = 0x224238u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4204)));
label_22423c:
    // 0x22423c: 0x55a00007  bnel        $t5, $zero, . + 4 + (0x7 << 2)
label_224240:
    if (ctx->pc == 0x224240u) {
        ctx->pc = 0x224240u;
            // 0x224240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224244u;
        goto label_224244;
    }
    ctx->pc = 0x22423Cu;
    {
        const bool branch_taken_0x22423c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x22423c) {
            ctx->pc = 0x224240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22423Cu;
            // 0x224240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22425Cu;
            goto label_22425c;
        }
    }
    ctx->pc = 0x224244u;
label_224244:
    // 0x224244: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_224248:
    // 0x224248: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224248u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_22424c:
    // 0x22424c: 0x24843450  addiu       $a0, $a0, 0x3450
    ctx->pc = 0x22424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
label_224250:
    // 0x224250: 0x25083378  addiu       $t0, $t0, 0x3378
    ctx->pc = 0x224250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
label_224254:
    // 0x224254: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
label_224258:
    if (ctx->pc == 0x224258u) {
        ctx->pc = 0x224258u;
            // 0x224258: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x22425Cu;
        goto label_22425c;
    }
    ctx->pc = 0x224254u;
    {
        const bool branch_taken_0x224254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224254u;
            // 0x224258: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224254) {
            ctx->pc = 0x224198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224198;
        }
    }
    ctx->pc = 0x22425Cu;
label_22425c:
    // 0x22425c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224260:
    // 0x224260: 0x1a0f809  jalr        $t5
label_224264:
    if (ctx->pc == 0x224264u) {
        ctx->pc = 0x224264u;
            // 0x224264: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224268u;
        goto label_224268;
    }
    ctx->pc = 0x224260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        SET_GPR_U32(ctx, 31, 0x224268u);
        ctx->pc = 0x224264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224260u;
            // 0x224264: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224268u; }
            if (ctx->pc != 0x224268u) { return; }
        }
        }
    }
    ctx->pc = 0x224268u;
label_224268:
    // 0x224268: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_22426c:
    if (ctx->pc == 0x22426Cu) {
        ctx->pc = 0x22426Cu;
            // 0x22426c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x224270u;
        goto label_fallthrough_0x224268;
    }
    ctx->pc = 0x224268u;
    {
        const bool branch_taken_0x224268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224268u;
            // 0x22426c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224268) {
            ctx->pc = 0x2241A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2241a8;
        }
    }
label_fallthrough_0x224268:
    ctx->pc = 0x224270u;
    ctx->pc = 0x224270u;
}
