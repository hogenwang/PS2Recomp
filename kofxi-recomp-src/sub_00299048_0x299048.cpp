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

// Function: sub_00299048
// Address: 0x299048 - 0x299360
void sub_00299048_0x299048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299048_0x299048");
#endif

    switch (ctx->pc) {
        case 0x299078u: goto label_299078;
        case 0x2990e0u: goto label_2990e0;
        case 0x2990f0u: goto label_2990f0;
        case 0x2991e0u: goto label_2991e0;
        case 0x299260u: goto label_299260;
        case 0x2992b8u: goto label_2992b8;
        case 0x2992e0u: goto label_2992e0;
        case 0x2992e8u: goto label_2992e8;
        case 0x299314u: goto label_299314;
        case 0x299320u: goto label_299320;
        default: break;
    }

    ctx->pc = 0x299048u;

label_299048:
    // 0x299048: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x299048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29904c: 0x24990054  addiu       $t9, $a0, 0x54
    ctx->pc = 0x29904cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x299050: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x299050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x299054: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x299054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x299058: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x299058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29905c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x29905cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299060: 0x8c8d003c  lw          $t5, 0x3C($a0)
    ctx->pc = 0x299060u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x299064: 0x244a4f08  addiu       $t2, $v0, 0x4F08
    ctx->pc = 0x299064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 20232));
    // 0x299068: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x299068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29906c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x29906cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299070: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x299070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299074: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x299074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_299078:
    // 0x299078: 0x12f1021  addu        $v0, $t1, $t7
    ctx->pc = 0x299078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x29907c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x29907cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x299080: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x299080u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299084: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x299084u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x299088: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x299088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29908c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x29908cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x299090: 0x16d1026  xor         $v0, $t3, $t5
    ctx->pc = 0x299090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 13));
    // 0x299094: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x299094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x299098: 0x1651826  xor         $v1, $t3, $a1
    ctx->pc = 0x299098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 5));
    // 0x29909c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29909cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2990a0: 0xacc30080  sw          $v1, 0x80($a2)
    ctx->pc = 0x2990a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 3));
    // 0x2990a4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2990a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2990a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2990ac: 0x29e50010  slti        $a1, $t7, 0x10
    ctx->pc = 0x2990acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2990b0: 0xaccb0040  sw          $t3, 0x40($a2)
    ctx->pc = 0x2990b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 11));
    // 0x2990b4: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x2990b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2990b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2990b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2990bc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2990bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2990c0: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2990c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990c4: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2990C4u;
    {
        const bool branch_taken_0x2990c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2990C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990C4u;
        // 0x2990c8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990c4) {
            ctx->pc = 0x299078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299078;
        }
    }
    ctx->pc = 0x2990CCu;
    // 0x2990cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2990ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2990d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2990d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990d4: 0x244e4f08  addiu       $t6, $v0, 0x4F08
    ctx->pc = 0x2990d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 20232));
    // 0x2990d8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2990d8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990dc: 0x0  nop
    ctx->pc = 0x2990dcu;
    // NOP
label_2990e0:
    // 0x2990e0: 0x25f80001  addiu       $t8, $t7, 0x1
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2990e4: 0x27ac001c  addiu       $t4, $sp, 0x1C
    ctx->pc = 0x2990e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2990e8: 0x240d0028  addiu       $t5, $zero, 0x28
    ctx->pc = 0x2990e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2990ec: 0x0  nop
    ctx->pc = 0x2990ecu;
    // NOP
label_2990f0:
    // 0x2990f0: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2990f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2990f4: 0x8d84ffe4  lw          $a0, -0x1C($t4)
    ctx->pc = 0x2990f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967268)));
    // 0x2990f8: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2990f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2990fc: 0x8d85ffe8  lw          $a1, -0x18($t4)
    ctx->pc = 0x2990fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967272)));
    // 0x299100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299104: 0x25adfff8  addiu       $t5, $t5, -0x8
    ctx->pc = 0x299104u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
    // 0x299108: 0x8d86ffec  lw          $a2, -0x14($t4)
    ctx->pc = 0x299108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967276)));
    // 0x29910c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x29910cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x299110: 0x8d87fff0  lw          $a3, -0x10($t4)
    ctx->pc = 0x299110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967280)));
    // 0x299114: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x299114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x299118: 0x8d88fff4  lw          $t0, -0xC($t4)
    ctx->pc = 0x299118u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967284)));
    // 0x29911c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x29911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x299120: 0x8d89fff8  lw          $t1, -0x8($t4)
    ctx->pc = 0x299120u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967288)));
    // 0x299124: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x299124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299128: 0xad84ffe4  sw          $a0, -0x1C($t4)
    ctx->pc = 0x299128u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967268), GPR_U32(ctx, 4));
    // 0x29912c: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x29912cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x299130: 0x8d8afffc  lw          $t2, -0x4($t4)
    ctx->pc = 0x299130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967292)));
    // 0x299134: 0xad85ffe8  sw          $a1, -0x18($t4)
    ctx->pc = 0x299134u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967272), GPR_U32(ctx, 5));
    // 0x299138: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x299138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29913c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x29913cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x299140: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x299140u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x299144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299148: 0xc23026  xor         $a2, $a2, $v0
    ctx->pc = 0x299148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x29914c: 0xad86ffec  sw          $a2, -0x14($t4)
    ctx->pc = 0x29914cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967276), GPR_U32(ctx, 6));
    // 0x299150: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x299150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x299154: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x299154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x299158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29915c: 0xe23826  xor         $a3, $a3, $v0
    ctx->pc = 0x29915cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x299160: 0xad87fff0  sw          $a3, -0x10($t4)
    ctx->pc = 0x299160u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967280), GPR_U32(ctx, 7));
    // 0x299164: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x299164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x299168: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x299168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x29916c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299170: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x299170u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x299174: 0xad88fff4  sw          $t0, -0xC($t4)
    ctx->pc = 0x299174u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967284), GPR_U32(ctx, 8));
    // 0x299178: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x299178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29917c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x29917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x299180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299184: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x299184u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x299188: 0xad89fff8  sw          $t1, -0x8($t4)
    ctx->pc = 0x299188u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967288), GPR_U32(ctx, 9));
    // 0x29918c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x29918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x299190: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x299190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x299194: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299198: 0x1425026  xor         $t2, $t2, $v0
    ctx->pc = 0x299198u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 2));
    // 0x29919c: 0xad8afffc  sw          $t2, -0x4($t4)
    ctx->pc = 0x29919cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967292), GPR_U32(ctx, 10));
    // 0x2991a0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2991a4: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x2991a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2991a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2991a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2991ac: 0x1625826  xor         $t3, $t3, $v0
    ctx->pc = 0x2991acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 2));
    // 0x2991b0: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x2991b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x2991b4: 0x5a1ffce  bgez        $t5, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2991B4u;
    {
        const bool branch_taken_0x2991b4 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x2991B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991B4u;
        // 0x2991b8: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991b4) {
            ctx->pc = 0x2990F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2990f0;
        }
    }
    ctx->pc = 0x2991BCu;
    // 0x2991bc: 0x16f1821  addu        $v1, $t3, $t7
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x2991c0: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x2991c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991c4: 0x29e20012  slti        $v0, $t7, 0x12
    ctx->pc = 0x2991c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2991c8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2991C8u;
    {
        const bool branch_taken_0x2991c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2991CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991C8u;
        // 0x2991cc: 0x306b00ff  andi        $t3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991c8) {
            ctx->pc = 0x2990E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2990e0;
        }
    }
    ctx->pc = 0x2991D0u;
    // 0x2991d0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2991d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2991d4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2991d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2991d8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2991d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2991dc: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2991dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2991e0:
    // 0x2991e0: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x2991e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2991e4: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x2991e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2991e8: 0x6ba8001f  ldl         $t0, 0x1F($sp)
    ctx->pc = 0x2991e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2991ec: 0x6fa80018  ldr         $t0, 0x18($sp)
    ctx->pc = 0x2991ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2991f0: 0xb3220007  sdl         $v0, 0x7($t9)
    ctx->pc = 0x2991f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2991f4: 0xb7220000  sdr         $v0, 0x0($t9)
    ctx->pc = 0x2991f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2991f8: 0xb323000f  sdl         $v1, 0xF($t9)
    ctx->pc = 0x2991f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2991fc: 0xb7230008  sdr         $v1, 0x8($t9)
    ctx->pc = 0x2991fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299200: 0xb3270017  sdl         $a3, 0x17($t9)
    ctx->pc = 0x299200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299204: 0xb7270010  sdr         $a3, 0x10($t9)
    ctx->pc = 0x299204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299208: 0xb328001f  sdl         $t0, 0x1F($t9)
    ctx->pc = 0x299208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29920c: 0xb7280018  sdr         $t0, 0x18($t9)
    ctx->pc = 0x29920cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299210: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x299210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x299214: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x299214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x299218: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x299218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x29921c: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x29921cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x299220: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x299220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x299224: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x299224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x299228: 0x6ba8003f  ldl         $t0, 0x3F($sp)
    ctx->pc = 0x299228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x29922c: 0x6fa80038  ldr         $t0, 0x38($sp)
    ctx->pc = 0x29922cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x299230: 0xb3220027  sdl         $v0, 0x27($t9)
    ctx->pc = 0x299230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299234: 0xb7220020  sdr         $v0, 0x20($t9)
    ctx->pc = 0x299234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299238: 0xb323002f  sdl         $v1, 0x2F($t9)
    ctx->pc = 0x299238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29923c: 0xb7230028  sdr         $v1, 0x28($t9)
    ctx->pc = 0x29923cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299240: 0xb3270037  sdl         $a3, 0x37($t9)
    ctx->pc = 0x299240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299244: 0xb7270030  sdr         $a3, 0x30($t9)
    ctx->pc = 0x299244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299248: 0xb328003f  sdl         $t0, 0x3F($t9)
    ctx->pc = 0x299248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29924c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29924cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299254: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x299254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x299258: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x299258u;
    SET_GPR_U32(ctx, 31, 0x299260u);
    ctx->pc = 0x29925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299258u;
    // 0x29925c: 0xb7280038  sdr         $t0, 0x38($t9) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x299258u, 0x299260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299260u;
label_299260:
    // 0x299260: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x299260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x299264: 0x3e00008  jr          $ra
    ctx->pc = 0x299264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299264u;
        // 0x299268: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29926Cu;
    // 0x29926c: 0x0  nop
    ctx->pc = 0x29926cu;
    // NOP
    // 0x299270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299274: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x299274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x299278: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29927c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x299280: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x299280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x299284: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x299284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299288: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x299288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29928c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x299290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x299294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x299298: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x299298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x29929c: 0x26340054  addiu       $s4, $s1, 0x54
    ctx->pc = 0x29929cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x2992a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2992a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2992a4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x2992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2992a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2992a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992ac: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2992acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2992b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2992B0u;
    {
        const bool branch_taken_0x2992b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992B0u;
        // 0x2992b4: 0x26320014  addiu       $s2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992b0) {
            ctx->pc = 0x2992D4u;
            goto label_2992d4;
        }
    }
    ctx->pc = 0x2992B8u;
label_2992b8:
    // 0x2992b8: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x2992b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2992bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2992c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2992c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2992c4: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2992c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2992c8: 0x0  nop
    ctx->pc = 0x2992c8u;
    // NOP
    // 0x2992cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2992CCu;
    {
        const bool branch_taken_0x2992cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2992cc) {
            ctx->pc = 0x2992B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2992b8;
        }
    }
    ctx->pc = 0x2992D4u;
label_2992d4:
    // 0x2992d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2992d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992d8: 0xc0a6412  jal         func_299048
    ctx->pc = 0x2992D8u;
    SET_GPR_U32(ctx, 31, 0x2992E0u);
    ctx->pc = 0x2992DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992D8u;
    // 0x2992dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299048u;
    goto label_299048;
    ctx->pc = 0x2992E0u;
label_2992e0:
    // 0x2992e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2992e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2992e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2992e8:
    // 0x2992e8: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x2992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2992ec: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2992ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2992f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2992f4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2992f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2992f8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2992f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2992fc: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2992fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x299300: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299300u;
    {
        const bool branch_taken_0x299300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299300) {
            ctx->pc = 0x2992E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2992e8;
        }
    }
    ctx->pc = 0x299308u;
    // 0x299308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29930c: 0xc0a6412  jal         func_299048
    ctx->pc = 0x29930Cu;
    SET_GPR_U32(ctx, 31, 0x299314u);
    ctx->pc = 0x299310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29930Cu;
    // 0x299310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299048u;
    goto label_299048;
    ctx->pc = 0x299314u;
label_299314:
    // 0x299314: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x299314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29931c: 0x0  nop
    ctx->pc = 0x29931cu;
    // NOP
label_299320:
    // 0x299320: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x299320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x299324: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x299324u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x299328: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x299328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29932c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x29932cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x299330: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x299330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299334: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x299334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x299338: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299338u;
    {
        const bool branch_taken_0x299338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299338) {
            ctx->pc = 0x299320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299320;
        }
    }
    ctx->pc = 0x299340u;
    // 0x299340: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x299340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299344: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299344u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299348: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x299348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29934c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29934cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299350: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299358: 0x3e00008  jr          $ra
    ctx->pc = 0x299358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299358u;
        // 0x29935c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299360u;
}
