#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7298
// Address: 0x1a7298 - 0x1a7740
void sub_001A7298_0x1a7298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7298_0x1a7298");
#endif

    switch (ctx->pc) {
        case 0x1a72ecu: goto label_1a72ec;
        case 0x1a7330u: goto label_1a7330;
        case 0x1a73c8u: goto label_1a73c8;
        case 0x1a7400u: goto label_1a7400;
        case 0x1a7448u: goto label_1a7448;
        case 0x1a7474u: goto label_1a7474;
        case 0x1a7488u: goto label_1a7488;
        case 0x1a74b4u: goto label_1a74b4;
        case 0x1a74dcu: goto label_1a74dc;
        case 0x1a74e4u: goto label_1a74e4;
        case 0x1a74f4u: goto label_1a74f4;
        case 0x1a7530u: goto label_1a7530;
        case 0x1a75a0u: goto label_1a75a0;
        case 0x1a75e4u: goto label_1a75e4;
        case 0x1a75ecu: goto label_1a75ec;
        case 0x1a7620u: goto label_1a7620;
        case 0x1a7644u: goto label_1a7644;
        case 0x1a7670u: goto label_1a7670;
        case 0x1a7688u: goto label_1a7688;
        case 0x1a76acu: goto label_1a76ac;
        case 0x1a76c8u: goto label_1a76c8;
        case 0x1a770cu: goto label_1a770c;
        default: break;
    }

    ctx->pc = 0x1a7298u;

    // 0x1a7298: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a7298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a729c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1a729cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72a0: 0x2442e118  addiu       $v0, $v0, -0x1EE8
    ctx->pc = 0x1a72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959384));
    // 0x1a72a4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a72a8: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A72A8u;
    {
        const bool branch_taken_0x1a72a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A72ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72A8u;
            // 0x1a72ac: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72a8) {
            ctx->pc = 0x1A72E4u;
            goto label_1a72e4;
        }
    }
    ctx->pc = 0x1A72B0u;
    // 0x1a72b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a72b4: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a72b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a72b8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1a72b8u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1a72bc: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A72BCu;
    {
        const bool branch_taken_0x1a72bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a72bc) {
            ctx->pc = 0x1A72C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72BCu;
            // 0x1a72c0: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A72ECu;
            goto label_1a72ec;
        }
    }
    ctx->pc = 0x1A72C4u;
    // 0x1a72c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a72c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a72cc: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x1a72ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x1a72d0: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x1a72d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x1a72d4: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x1a72d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x1a72d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a72d8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1a72dc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a72dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1a72e0: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x1a72e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 2)); // MMIO: 0x10000810
label_1a72e4:
    // 0x1a72e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A72E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A72ECu;
label_1a72ec:
    // 0x1a72ec: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1a72ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a72f0: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1a72f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a72f4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a72f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a72f8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a72f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a72fc: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A72FCu;
    {
        const bool branch_taken_0x1a72fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72FCu;
            // 0x1a7300: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72fc) {
            ctx->pc = 0x1A7364u;
            goto label_1a7364;
        }
    }
    ctx->pc = 0x1A7304u;
    // 0x1a7304: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a7304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a7308: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x1a7308u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
    // 0x1a730c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a730cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a7310: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a7310u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a7314: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a7314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a7318: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a7318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a731c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a731cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a7320: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7320u;
    {
        const bool branch_taken_0x1a7320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7320u;
            // 0x1a7324: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7320) {
            ctx->pc = 0x1A7364u;
            goto label_1a7364;
        }
    }
    ctx->pc = 0x1A7328u;
    // 0x1a7328: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a7328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a732c: 0x0  nop
    ctx->pc = 0x1a732cu;
    // NOP
label_1a7330:
    // 0x1a7330: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a7330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a7334: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7334u;
    {
        const bool branch_taken_0x1a7334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7334u;
            // 0x1a7338: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7334) {
            ctx->pc = 0x1A7368u;
            goto label_1a7368;
        }
    }
    ctx->pc = 0x1A733Cu;
    // 0x1a733c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a733cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a7340: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a7340u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a7344: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a7344u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a7348: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a7348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a734c: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a7350: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a7350u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a7354: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7354u;
    {
        const bool branch_taken_0x1a7354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7354) {
            ctx->pc = 0x1A7358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7354u;
            // 0x1a7358: 0xea102f  dsubu       $v0, $a3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A736Cu;
            goto label_1a736c;
        }
    }
    ctx->pc = 0x1A735Cu;
    // 0x1a735c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1A735Cu;
    {
        const bool branch_taken_0x1a735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A735Cu;
            // 0x1a7360: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a735c) {
            ctx->pc = 0x1A7330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7330;
        }
    }
    ctx->pc = 0x1A7364u;
label_1a7364:
    // 0x1a7364: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x1a7364u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_1a7368:
    // 0x1a7368: 0xea102f  dsubu       $v0, $a3, $t2
    ctx->pc = 0x1a7368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 10));
label_1a736c:
    // 0x1a736c: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x1a736cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x1a7370: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A7370u;
    {
        const bool branch_taken_0x1a7370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7370u;
            // 0x1a7374: 0x82880  sll         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7370) {
            ctx->pc = 0x1A73C8u;
            goto label_1a73c8;
        }
    }
    ctx->pc = 0x1A7378u;
    // 0x1a7378: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a7378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a737c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a737cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a7380: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a7380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a7384: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x1a7388: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a7388u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1a738c: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x1a738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x1a7390: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7394: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a7394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a7398: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a739c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a73a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a73a4: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x1a73a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
    // 0x1a73a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a73ac: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a73acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a73b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a73b4: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a73b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a73b8: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a73b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a73bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a73bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1a73c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A73C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A73C8u;
label_1a73c8:
    // 0x1a73c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a73c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a73cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a73ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a73d0: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a73d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a73d4: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a73d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a73d8: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x1a73d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x1a73dc: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x1a73dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x1a73e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a73e4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a73e8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a73e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a73ec: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1a73ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1a73f0: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x1a73f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x1a73f4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a73f4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x1a73f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A73F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7400u;
label_1a7400:
    // 0x1a7400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a7400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a7404: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1a7408: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a7408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a740c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a740cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7410: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a7410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a7414: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a7414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7418: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a7418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a741c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a741cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7420: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a7420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a7424: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a742c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A742Cu;
    {
        const bool branch_taken_0x1a742c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A742Cu;
            // 0x1a7430: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a742c) {
            ctx->pc = 0x1A7440u;
            goto label_1a7440;
        }
    }
    ctx->pc = 0x1A7434u;
    // 0x1a7434: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a7438: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A7438u;
    {
        const bool branch_taken_0x1a7438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7438u;
            // 0x1a743c: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7438) {
            ctx->pc = 0x1A7504u;
            goto label_1a7504;
        }
    }
    ctx->pc = 0x1A7440u;
label_1a7440:
    // 0x1a7440: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A7440u;
    SET_GPR_U32(ctx, 31, 0x1A7448u);
    ctx->pc = 0x1A7444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7440u;
            // 0x1a7444: 0x3c1201bf  lui         $s2, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7448u; }
        if (ctx->pc != 0x1A7448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7448u; }
        if (ctx->pc != 0x1A7448u) { return; }
    }
    ctx->pc = 0x1A7448u;
label_1a7448:
    // 0x1a7448: 0x8e50fc40  lw          $s0, -0x3C0($s2)
    ctx->pc = 0x1a7448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966336)));
    // 0x1a744c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A744Cu;
    {
        const bool branch_taken_0x1a744c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A744Cu;
            // 0x1a7450: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a744c) {
            ctx->pc = 0x1A745Cu;
            goto label_1a745c;
        }
    }
    ctx->pc = 0x1A7454u;
    // 0x1a7454: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7458: 0xae42fc40  sw          $v0, -0x3C0($s2)
    ctx->pc = 0x1a7458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966336), GPR_U32(ctx, 2));
label_1a745c:
    // 0x1a745c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A745Cu;
    {
        const bool branch_taken_0x1a745c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a745c) {
            ctx->pc = 0x1A7480u;
            goto label_1a7480;
        }
    }
    ctx->pc = 0x1A7464u;
    // 0x1a7464: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7464u;
    {
        const bool branch_taken_0x1a7464 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7464) {
            ctx->pc = 0x1A7474u;
            goto label_1a7474;
        }
    }
    ctx->pc = 0x1A746Cu;
    // 0x1a746c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1A746Cu;
    SET_GPR_U32(ctx, 31, 0x1A7474u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7474u; }
        if (ctx->pc != 0x1A7474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7474u; }
        if (ctx->pc != 0x1A7474u) { return; }
    }
    ctx->pc = 0x1A7474u;
label_1a7474:
    // 0x1a7474: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a7474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a7478: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A7478u;
    {
        const bool branch_taken_0x1a7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7478u;
            // 0x1a747c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7478) {
            ctx->pc = 0x1A7504u;
            goto label_1a7504;
        }
    }
    ctx->pc = 0x1A7480u;
label_1a7480:
    // 0x1a7480: 0xc069ac2  jal         func_1A6B08
    ctx->pc = 0x1A7480u;
    SET_GPR_U32(ctx, 31, 0x1A7488u);
    ctx->pc = 0x1A6B08u;
    if (runtime->hasFunction(0x1A6B08u)) {
        auto targetFn = runtime->lookupFunction(0x1A6B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7488u; }
        if (ctx->pc != 0x1A7488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6B08_0x1a6b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7488u; }
        if (ctx->pc != 0x1A7488u) { return; }
    }
    ctx->pc = 0x1A7488u;
label_1a7488:
    // 0x1a7488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a748c: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A748Cu;
    {
        const bool branch_taken_0x1a748c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1a748c) {
            ctx->pc = 0x1A7490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A748Cu;
            // 0x1a7490: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A74BCu;
            goto label_1a74bc;
        }
    }
    ctx->pc = 0x1A7494u;
    // 0x1a7494: 0x8e42fc40  lw          $v0, -0x3C0($s2)
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966336)));
    // 0x1a7498: 0xae50fc40  sw          $s0, -0x3C0($s2)
    ctx->pc = 0x1a7498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966336), GPR_U32(ctx, 16));
    // 0x1a749c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a74a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a74a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a74a4: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A74A4u;
    {
        const bool branch_taken_0x1a74a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74A4u;
            // 0x1a74a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74a4) {
            ctx->pc = 0x1A7504u;
            goto label_1a7504;
        }
    }
    ctx->pc = 0x1A74ACu;
    // 0x1a74ac: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1A74ACu;
    SET_GPR_U32(ctx, 31, 0x1A74B4u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74B4u; }
        if (ctx->pc != 0x1A74B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74B4u; }
        if (ctx->pc != 0x1A74B4u) { return; }
    }
    ctx->pc = 0x1A74B4u;
label_1a74b4:
    // 0x1a74b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A74B4u;
    {
        const bool branch_taken_0x1a74b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74B4u;
            // 0x1a74b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74b4) {
            ctx->pc = 0x1A7504u;
            goto label_1a7504;
        }
    }
    ctx->pc = 0x1A74BCu;
label_1a74bc:
    // 0x1a74bc: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a74c0: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x1a74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x1a74c4: 0x24c67790  addiu       $a2, $a2, 0x7790
    ctx->pc = 0x1a74c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x1a74c8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1a74cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a74ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74d4: 0xc069c50  jal         func_1A7140
    ctx->pc = 0x1A74D4u;
    SET_GPR_U32(ctx, 31, 0x1A74DCu);
    ctx->pc = 0x1A74D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74D4u;
            // 0x1a74d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7140u;
    if (runtime->hasFunction(0x1A7140u)) {
        auto targetFn = runtime->lookupFunction(0x1A7140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74DCu; }
        if (ctx->pc != 0x1A74DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7140_0x1a7140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74DCu; }
        if (ctx->pc != 0x1A74DCu) { return; }
    }
    ctx->pc = 0x1A74DCu;
label_1a74dc:
    // 0x1a74dc: 0xc069b68  jal         func_1A6DA0
    ctx->pc = 0x1A74DCu;
    SET_GPR_U32(ctx, 31, 0x1A74E4u);
    ctx->pc = 0x1A74E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74DCu;
            // 0x1a74e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DA0u;
    if (runtime->hasFunction(0x1A6DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74E4u; }
        if (ctx->pc != 0x1A74E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6DA0_0x1a6da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74E4u; }
        if (ctx->pc != 0x1A74E4u) { return; }
    }
    ctx->pc = 0x1A74E4u;
label_1a74e4:
    // 0x1a74e4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A74E4u;
    {
        const bool branch_taken_0x1a74e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74E4u;
            // 0x1a74e8: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74e4) {
            ctx->pc = 0x1A74F8u;
            goto label_1a74f8;
        }
    }
    ctx->pc = 0x1A74ECu;
    // 0x1a74ec: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1A74ECu;
    SET_GPR_U32(ctx, 31, 0x1A74F4u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74F4u; }
        if (ctx->pc != 0x1A74F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74F4u; }
        if (ctx->pc != 0x1A74F4u) { return; }
    }
    ctx->pc = 0x1A74F4u;
label_1a74f4:
    // 0x1a74f4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1a74f8:
    // 0x1a74f8: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x1a74f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x1a74fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a74fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7500: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a7504:
    // 0x1a7504: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a7504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7508: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a7508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a750c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a750cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7510: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a7510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7514: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a7514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7518: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a7518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a751c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a751cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7524: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7524u;
            // 0x1a7528: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A752Cu;
    // 0x1a752c: 0x0  nop
    ctx->pc = 0x1a752cu;
    // NOP
label_1a7530:
    // 0x1a7530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a7534: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a7538: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a7538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a753c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a753cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7540: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a7540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a7544: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a7544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7548: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a7548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a754c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a754cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7550: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7554: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7558: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7558u;
    {
        const bool branch_taken_0x1a7558 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A755Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7558u;
            // 0x1a755c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7558) {
            ctx->pc = 0x1A756Cu;
            goto label_1a756c;
        }
    }
    ctx->pc = 0x1A7560u;
    // 0x1a7560: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a7564: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A7564u;
    {
        const bool branch_taken_0x1a7564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7564u;
            // 0x1a7568: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7564) {
            ctx->pc = 0x1A75FCu;
            goto label_1a75fc;
        }
    }
    ctx->pc = 0x1A756Cu;
label_1a756c:
    // 0x1a756c: 0x3c1201bf  lui         $s2, 0x1BF
    ctx->pc = 0x1a756cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)447 << 16));
    // 0x1a7570: 0x8e50fc40  lw          $s0, -0x3C0($s2)
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966336)));
    // 0x1a7574: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7574u;
    {
        const bool branch_taken_0x1a7574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7574) {
            ctx->pc = 0x1A7584u;
            goto label_1a7584;
        }
    }
    ctx->pc = 0x1A757Cu;
    // 0x1a757c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7580: 0xae42fc40  sw          $v0, -0x3C0($s2)
    ctx->pc = 0x1a7580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966336), GPR_U32(ctx, 2));
label_1a7584:
    // 0x1a7584: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7584u;
    {
        const bool branch_taken_0x1a7584 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7584) {
            ctx->pc = 0x1A7598u;
            goto label_1a7598;
        }
    }
    ctx->pc = 0x1A758Cu;
    // 0x1a758c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a7590: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A7590u;
    {
        const bool branch_taken_0x1a7590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7590u;
            // 0x1a7594: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7590) {
            ctx->pc = 0x1A75FCu;
            goto label_1a75fc;
        }
    }
    ctx->pc = 0x1A7598u;
label_1a7598:
    // 0x1a7598: 0xc069aea  jal         func_1A6BA8
    ctx->pc = 0x1A7598u;
    SET_GPR_U32(ctx, 31, 0x1A75A0u);
    ctx->pc = 0x1A6BA8u;
    if (runtime->hasFunction(0x1A6BA8u)) {
        auto targetFn = runtime->lookupFunction(0x1A6BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75A0u; }
        if (ctx->pc != 0x1A75A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6BA8_0x1a6ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75A0u; }
        if (ctx->pc != 0x1A75A0u) { return; }
    }
    ctx->pc = 0x1A75A0u;
label_1a75a0:
    // 0x1a75a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a75a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75a4: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A75A4u;
    {
        const bool branch_taken_0x1a75a4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1a75a4) {
            ctx->pc = 0x1A75A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75A4u;
            // 0x1a75a8: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A75C4u;
            goto label_1a75c4;
        }
    }
    ctx->pc = 0x1A75ACu;
    // 0x1a75ac: 0x8e43fc40  lw          $v1, -0x3C0($s2)
    ctx->pc = 0x1a75acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966336)));
    // 0x1a75b0: 0xae50fc40  sw          $s0, -0x3C0($s2)
    ctx->pc = 0x1a75b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966336), GPR_U32(ctx, 16));
    // 0x1a75b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a75b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a75b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a75b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a75bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A75BCu;
    {
        const bool branch_taken_0x1a75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75BCu;
            // 0x1a75c0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75bc) {
            ctx->pc = 0x1A7600u;
            goto label_1a7600;
        }
    }
    ctx->pc = 0x1A75C4u;
label_1a75c4:
    // 0x1a75c4: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a75c8: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x1a75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x1a75cc: 0x24c67790  addiu       $a2, $a2, 0x7790
    ctx->pc = 0x1a75ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x1a75d0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1a75d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a75d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a75d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75dc: 0xc0698ec  jal         func_1A63B0
    ctx->pc = 0x1A75DCu;
    SET_GPR_U32(ctx, 31, 0x1A75E4u);
    ctx->pc = 0x1A75E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75DCu;
            // 0x1a75e0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A63B0u;
    if (runtime->hasFunction(0x1A63B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A63B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75E4u; }
        if (ctx->pc != 0x1A75E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A63B0_0x1a63b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75E4u; }
        if (ctx->pc != 0x1A75E4u) { return; }
    }
    ctx->pc = 0x1A75E4u;
label_1a75e4:
    // 0x1a75e4: 0xc0697b6  jal         func_1A5ED8
    ctx->pc = 0x1A75E4u;
    SET_GPR_U32(ctx, 31, 0x1A75ECu);
    ctx->pc = 0x1A75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75E4u;
            // 0x1a75e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5ED8u;
    if (runtime->hasFunction(0x1A5ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1A5ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75ECu; }
        if (ctx->pc != 0x1A75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5ED8_0x1a5ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75ECu; }
        if (ctx->pc != 0x1A75ECu) { return; }
    }
    ctx->pc = 0x1A75ECu;
label_1a75ec:
    // 0x1a75ec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a75f0: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x1a75f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x1a75f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a75f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a75f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a75f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a75fc:
    // 0x1a75fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a75fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a7600:
    // 0x1a7600: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a7600u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7604: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a7604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7608: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a7608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a760c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a760cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7610: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7618: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7618u;
            // 0x1a761c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7620u;
label_1a7620:
    // 0x1a7620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a762c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7630: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x1a7634: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a763c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A763Cu;
    SET_GPR_U32(ctx, 31, 0x1A7644u);
    ctx->pc = 0x1A7640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A763Cu;
            // 0x1a7640: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7644u; }
        if (ctx->pc != 0x1A7644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7644u; }
        if (ctx->pc != 0x1A7644u) { return; }
    }
    ctx->pc = 0x1A7644u;
label_1a7644:
    // 0x1a7644: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7644u;
    {
        const bool branch_taken_0x1a7644 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A7648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7644u;
            // 0x1a7648: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7644) {
            ctx->pc = 0x1A7660u;
            goto label_1a7660;
        }
    }
    ctx->pc = 0x1A764Cu;
    // 0x1a764c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a7650: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x1a7650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1a7654: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a7654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a7658: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7658u;
    {
        const bool branch_taken_0x1a7658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7658) {
            ctx->pc = 0x1A767Cu;
            goto label_1a767c;
        }
    }
    ctx->pc = 0x1A7660u;
label_1a7660:
    // 0x1a7660: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7660u;
    {
        const bool branch_taken_0x1a7660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7660) {
            ctx->pc = 0x1A7670u;
            goto label_1a7670;
        }
    }
    ctx->pc = 0x1A7668u;
    // 0x1a7668: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1A7668u;
    SET_GPR_U32(ctx, 31, 0x1A7670u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7670u; }
        if (ctx->pc != 0x1A7670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7670u; }
        if (ctx->pc != 0x1A7670u) { return; }
    }
    ctx->pc = 0x1A7670u;
label_1a7670:
    // 0x1a7670: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a7670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a7674: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7674u;
    {
        const bool branch_taken_0x1a7674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7674u;
            // 0x1a7678: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7674) {
            ctx->pc = 0x1A76B0u;
            goto label_1a76b0;
        }
    }
    ctx->pc = 0x1A767Cu;
label_1a767c:
    // 0x1a767c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a7680: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A7680u;
    SET_GPR_U32(ctx, 31, 0x1A7688u);
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7688u; }
        if (ctx->pc != 0x1A7688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6C18_0x1a6c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7688u; }
        if (ctx->pc != 0x1A7688u) { return; }
    }
    ctx->pc = 0x1A7688u;
label_1a7688:
    // 0x1a7688: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a768c: 0x8c62fc40  lw          $v0, -0x3C0($v1)
    ctx->pc = 0x1a768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966336)));
    // 0x1a7690: 0xac71fc40  sw          $s1, -0x3C0($v1)
    ctx->pc = 0x1a7690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966336), GPR_U32(ctx, 17));
    // 0x1a7694: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a7694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a7698: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a7698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1a769c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A769Cu;
    {
        const bool branch_taken_0x1a769c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A769Cu;
            // 0x1a76a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a769c) {
            ctx->pc = 0x1A76B0u;
            goto label_1a76b0;
        }
    }
    ctx->pc = 0x1A76A4u;
    // 0x1a76a4: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1A76A4u;
    SET_GPR_U32(ctx, 31, 0x1A76ACu);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76ACu; }
        if (ctx->pc != 0x1A76ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76ACu; }
        if (ctx->pc != 0x1A76ACu) { return; }
    }
    ctx->pc = 0x1A76ACu;
label_1a76ac:
    // 0x1a76ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a76acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a76b0:
    // 0x1a76b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a76b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a76b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a76b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a76b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a76b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a76bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a76bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a76c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A76C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A76C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76C0u;
            // 0x1a76c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A76C8u;
label_1a76c8:
    // 0x1a76c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a76c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a76cc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1a76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1a76d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a76d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a76d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a76d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a76d8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A76D8u;
    {
        const bool branch_taken_0x1a76d8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A76DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76D8u;
            // 0x1a76dc: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76d8) {
            ctx->pc = 0x1A76F4u;
            goto label_1a76f4;
        }
    }
    ctx->pc = 0x1A76E0u;
    // 0x1a76e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a76e4: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x1a76e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1a76e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a76e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a76ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A76ECu;
    {
        const bool branch_taken_0x1a76ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a76ec) {
            ctx->pc = 0x1A7700u;
            goto label_1a7700;
        }
    }
    ctx->pc = 0x1A76F4u;
label_1a76f4:
    // 0x1a76f4: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a76f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A76F8u;
    {
        const bool branch_taken_0x1a76f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76F8u;
            // 0x1a76fc: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76f8) {
            ctx->pc = 0x1A7730u;
            goto label_1a7730;
        }
    }
    ctx->pc = 0x1A7700u;
label_1a7700:
    // 0x1a7700: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a7704: 0xc069b3e  jal         func_1A6CF8
    ctx->pc = 0x1A7704u;
    SET_GPR_U32(ctx, 31, 0x1A770Cu);
    ctx->pc = 0x1A6CF8u;
    if (runtime->hasFunction(0x1A6CF8u)) {
        auto targetFn = runtime->lookupFunction(0x1A6CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A770Cu; }
        if (ctx->pc != 0x1A770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6CF8_0x1a6cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A770Cu; }
        if (ctx->pc != 0x1A770Cu) { return; }
    }
    ctx->pc = 0x1A770Cu;
label_1a770c:
    // 0x1a770c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7710: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7710u;
    {
        const bool branch_taken_0x1a7710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7710u;
            // 0x1a7714: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7710) {
            ctx->pc = 0x1A7730u;
            goto label_1a7730;
        }
    }
    ctx->pc = 0x1A7718u;
    // 0x1a7718: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a771c: 0x8c43fc40  lw          $v1, -0x3C0($v0)
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966336)));
    // 0x1a7720: 0xac50fc40  sw          $s0, -0x3C0($v0)
    ctx->pc = 0x1a7720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966336), GPR_U32(ctx, 16));
    // 0x1a7724: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a7724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a7728: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a7728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a772c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a772cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7730:
    // 0x1a7730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7738: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A773Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7738u;
            // 0x1a773c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7740u;
    ctx->pc = 0x1a7740u;
}
