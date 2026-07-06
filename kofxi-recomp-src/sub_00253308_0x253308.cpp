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

// Function: sub_00253308
// Address: 0x253308 - 0x255b18
void sub_00253308_0x253308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253308_0x253308");
#endif

    switch (ctx->pc) {
        case 0x253388u: goto label_253388;
        case 0x2533ccu: goto label_2533cc;
        case 0x2533dcu: goto label_2533dc;
        case 0x253414u: goto label_253414;
        case 0x25343cu: goto label_25343c;
        case 0x25345cu: goto label_25345c;
        case 0x253498u: goto label_253498;
        case 0x2534dcu: goto label_2534dc;
        case 0x253528u: goto label_253528;
        case 0x25353cu: goto label_25353c;
        case 0x253588u: goto label_253588;
        case 0x2535d8u: goto label_2535d8;
        case 0x253600u: goto label_253600;
        case 0x253610u: goto label_253610;
        case 0x253638u: goto label_253638;
        case 0x2537b8u: goto label_2537b8;
        case 0x2537ccu: goto label_2537cc;
        case 0x2537d4u: goto label_2537d4;
        case 0x2537f0u: goto label_2537f0;
        case 0x2538acu: goto label_2538ac;
        case 0x2538f8u: goto label_2538f8;
        case 0x253924u: goto label_253924;
        case 0x253940u: goto label_253940;
        case 0x253964u: goto label_253964;
        case 0x253978u: goto label_253978;
        case 0x2539d0u: goto label_2539d0;
        case 0x2539f0u: goto label_2539f0;
        case 0x253a30u: goto label_253a30;
        case 0x253a60u: goto label_253a60;
        case 0x253adcu: goto label_253adc;
        case 0x253b0cu: goto label_253b0c;
        case 0x253b20u: goto label_253b20;
        case 0x253b28u: goto label_253b28;
        case 0x253b8cu: goto label_253b8c;
        case 0x253bd0u: goto label_253bd0;
        case 0x253c0cu: goto label_253c0c;
        case 0x253c18u: goto label_253c18;
        case 0x253c28u: goto label_253c28;
        case 0x253c34u: goto label_253c34;
        case 0x253c54u: goto label_253c54;
        case 0x253c70u: goto label_253c70;
        case 0x253c8cu: goto label_253c8c;
        case 0x253c9cu: goto label_253c9c;
        case 0x253cb0u: goto label_253cb0;
        case 0x253cd0u: goto label_253cd0;
        case 0x253cf4u: goto label_253cf4;
        case 0x253d50u: goto label_253d50;
        case 0x253d7cu: goto label_253d7c;
        case 0x253d90u: goto label_253d90;
        case 0x253db0u: goto label_253db0;
        case 0x253dd4u: goto label_253dd4;
        case 0x253e44u: goto label_253e44;
        case 0x253e58u: goto label_253e58;
        case 0x253f0cu: goto label_253f0c;
        case 0x253f1cu: goto label_253f1c;
        case 0x253f4cu: goto label_253f4c;
        case 0x253f58u: goto label_253f58;
        case 0x253f64u: goto label_253f64;
        case 0x253f78u: goto label_253f78;
        case 0x253fa4u: goto label_253fa4;
        case 0x254018u: goto label_254018;
        case 0x254038u: goto label_254038;
        case 0x25408cu: goto label_25408c;
        case 0x2540c8u: goto label_2540c8;
        case 0x2541c8u: goto label_2541c8;
        case 0x25421cu: goto label_25421c;
        case 0x254384u: goto label_254384;
        case 0x2543c4u: goto label_2543c4;
        case 0x2543dcu: goto label_2543dc;
        case 0x25442cu: goto label_25442c;
        case 0x254440u: goto label_254440;
        case 0x254454u: goto label_254454;
        case 0x254504u: goto label_254504;
        case 0x254518u: goto label_254518;
        case 0x254524u: goto label_254524;
        case 0x25453cu: goto label_25453c;
        case 0x2545d0u: goto label_2545d0;
        case 0x2545e4u: goto label_2545e4;
        case 0x2546b0u: goto label_2546b0;
        case 0x2546c4u: goto label_2546c4;
        case 0x2546e0u: goto label_2546e0;
        case 0x254744u: goto label_254744;
        case 0x2547b4u: goto label_2547b4;
        case 0x254814u: goto label_254814;
        case 0x254834u: goto label_254834;
        case 0x25483cu: goto label_25483c;
        case 0x254868u: goto label_254868;
        case 0x254884u: goto label_254884;
        case 0x254894u: goto label_254894;
        case 0x2548a8u: goto label_2548a8;
        case 0x2548b0u: goto label_2548b0;
        case 0x2548c4u: goto label_2548c4;
        case 0x25490cu: goto label_25490c;
        case 0x254ba0u: goto label_254ba0;
        case 0x254c44u: goto label_254c44;
        case 0x254c4cu: goto label_254c4c;
        case 0x254cacu: goto label_254cac;
        case 0x254dbcu: goto label_254dbc;
        case 0x254e54u: goto label_254e54;
        case 0x254e5cu: goto label_254e5c;
        case 0x254e88u: goto label_254e88;
        case 0x254ea4u: goto label_254ea4;
        case 0x254eb4u: goto label_254eb4;
        case 0x254ec8u: goto label_254ec8;
        case 0x254ed0u: goto label_254ed0;
        case 0x25501cu: goto label_25501c;
        case 0x255068u: goto label_255068;
        case 0x2550d8u: goto label_2550d8;
        case 0x2551d4u: goto label_2551d4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552e0u: goto label_2552e0;
        case 0x255304u: goto label_255304;
        case 0x255388u: goto label_255388;
        case 0x2553c4u: goto label_2553c4;
        case 0x2553dcu: goto label_2553dc;
        case 0x2553f8u: goto label_2553f8;
        case 0x2555c8u: goto label_2555c8;
        case 0x25561cu: goto label_25561c;
        case 0x255678u: goto label_255678;
        case 0x255694u: goto label_255694;
        case 0x2556a4u: goto label_2556a4;
        case 0x255798u: goto label_255798;
        case 0x2557acu: goto label_2557ac;
        case 0x2557b8u: goto label_2557b8;
        case 0x2557d4u: goto label_2557d4;
        case 0x2557e4u: goto label_2557e4;
        case 0x2557f8u: goto label_2557f8;
        case 0x255810u: goto label_255810;
        case 0x255820u: goto label_255820;
        case 0x255868u: goto label_255868;
        case 0x2558f4u: goto label_2558f4;
        case 0x25590cu: goto label_25590c;
        case 0x255948u: goto label_255948;
        case 0x25595cu: goto label_25595c;
        case 0x255994u: goto label_255994;
        case 0x2559a8u: goto label_2559a8;
        case 0x2559bcu: goto label_2559bc;
        case 0x2559e0u: goto label_2559e0;
        case 0x2559f4u: goto label_2559f4;
        case 0x255a10u: goto label_255a10;
        case 0x255a5cu: goto label_255a5c;
        case 0x255aa4u: goto label_255aa4;
        case 0x255ab8u: goto label_255ab8;
        case 0x255adcu: goto label_255adc;
        case 0x255ae4u: goto label_255ae4;
        default: break;
    }

    ctx->pc = 0x253308u;

label_253308:
    // 0x253308: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x253308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25330c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x25330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x253310: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x253310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x253314: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x253314u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253318: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x253318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x25331c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25331cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253320: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x253320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x253324: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x253324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253328: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x253328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x25332c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x25332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x253330: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x253330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x253334: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x253334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x253338: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x253338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x25333c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x253340: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x253340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x253344: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x253344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x253348: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253348u;
    {
        const bool branch_taken_0x253348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253348u;
        // 0x25334c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253348) {
            ctx->pc = 0x253358u;
            goto label_253358;
        }
    }
    ctx->pc = 0x253350u;
    // 0x253350: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x253350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x253354: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x253354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_253358:
    // 0x253358: 0x50a000ed  beql        $a1, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x253358u;
    {
        const bool branch_taken_0x253358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x253358) {
            ctx->pc = 0x25335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253358u;
            // 0x25335c: 0x86c40018  lh          $a0, 0x18($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253710u;
            goto label_253710;
        }
    }
    ctx->pc = 0x253360u;
    // 0x253360: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x253360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x253364: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x253364u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253368: 0x8cf30000  lw          $s3, 0x0($a3)
    ctx->pc = 0x253368u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25336c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x25336cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x253370: 0x8cf70000  lw          $s7, 0x0($a3)
    ctx->pc = 0x253370u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x253374: 0x88b20007  lwl         $s2, 0x7($a1)
    ctx->pc = 0x253374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 18) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 18, (int32_t)merged); }
    // 0x253378: 0x98b20004  lwr         $s2, 0x4($a1)
    ctx->pc = 0x253378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 18) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 18) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 18, merged64); }
    // 0x25337c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x25337Cu;
    {
        const bool branch_taken_0x25337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25337Cu;
        // 0x253380: 0x8ed10004  lw          $s1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25337c) {
            ctx->pc = 0x25358Cu;
            goto label_25358c;
        }
    }
    ctx->pc = 0x253384u;
    // 0x253384: 0x0  nop
    ctx->pc = 0x253384u;
    // NOP
label_253388:
    // 0x253388: 0xd21823  subu        $v1, $a2, $s2
    ctx->pc = 0x253388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x25338c: 0x1c600017  bgtz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x25338Cu;
    {
        const bool branch_taken_0x25338c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x253390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25338Cu;
        // 0x253390: 0xca1021  addu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25338c) {
            ctx->pc = 0x2533ECu;
            goto label_2533ec;
        }
    }
    ctx->pc = 0x253394u;
    // 0x253394: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x253394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x253398: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x253398u;
    {
        const bool branch_taken_0x253398 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253398u;
        // 0x25339c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253398) {
            ctx->pc = 0x2533E4u;
            goto label_2533e4;
        }
    }
    ctx->pc = 0x2533A0u;
    // 0x2533a0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2533a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2533a4: 0x24661308  addiu       $a2, $v1, 0x1308
    ctx->pc = 0x2533a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x2533a8: 0xdcc50118  ld          $a1, 0x118($a2)
    ctx->pc = 0x2533a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 280)));
    // 0x2533ac: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x2533acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2533b0: 0xdcc20120  ld          $v0, 0x120($a2)
    ctx->pc = 0x2533b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x2533b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2533b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2533b8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x2533b8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x2533bc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2533bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2533c0: 0xfcc50118  sd          $a1, 0x118($a2)
    ctx->pc = 0x2533c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 280), GPR_U64(ctx, 5));
    // 0x2533c4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2533C4u;
    SET_GPR_U32(ctx, 31, 0x2533CCu);
    ctx->pc = 0x2533C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2533C4u;
    // 0x2533c8: 0xfcc20120  sd          $v0, 0x120($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 288), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2533C4u, 0x2533CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533CCu;
label_2533cc:
    // 0x2533cc: 0x12800109  beqz        $s4, . + 4 + (0x109 << 2)
    ctx->pc = 0x2533CCu;
    {
        const bool branch_taken_0x2533cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533CCu;
        // 0x2533d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533cc) {
            ctx->pc = 0x2537F4u;
            goto label_2537f4;
        }
    }
    ctx->pc = 0x2533D4u;
    // 0x2533d4: 0xc098560  jal         func_261580
    ctx->pc = 0x2533D4u;
    SET_GPR_U32(ctx, 31, 0x2533DCu);
    ctx->pc = 0x2533D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2533D4u;
    // 0x2533d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2533D4u, 0x2533DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533DCu;
label_2533dc:
    // 0x2533dc: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2533DCu;
    {
        const bool branch_taken_0x2533dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533DCu;
        // 0x2533e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533dc) {
            ctx->pc = 0x2537F4u;
            goto label_2537f4;
        }
    }
    ctx->pc = 0x2533E4u;
label_2533e4:
    // 0x2533e4: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2533E4u;
    {
        const bool branch_taken_0x2533e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2533E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533E4u;
        // 0x2533e8: 0xca1021  addu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533e4) {
            ctx->pc = 0x253424u;
            goto label_253424;
        }
    }
    ctx->pc = 0x2533ECu;
label_2533ec:
    // 0x2533ec: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2533ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2533f0: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2533F0u;
    {
        const bool branch_taken_0x2533f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2533F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533F0u;
        // 0x2533f4: 0x1121023  subu        $v0, $t0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533f0) {
            ctx->pc = 0x25341Cu;
            goto label_25341c;
        }
    }
    ctx->pc = 0x2533F8u;
    // 0x2533f8: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x2533f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2533fc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2533fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x253400: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x253400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x253404: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x253404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x253408: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x253408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x25340c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25340Cu;
    SET_GPR_U32(ctx, 31, 0x253414u);
    ctx->pc = 0x253410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25340Cu;
    // 0x253410: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25340Cu, 0x253414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253414u;
label_253414:
    // 0x253414: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x253414u;
    {
        const bool branch_taken_0x253414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253414u;
        // 0x253418: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253414) {
            ctx->pc = 0x253540u;
            goto label_253540;
        }
    }
    ctx->pc = 0x25341Cu;
label_25341c:
    // 0x25341c: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25341Cu;
    {
        const bool branch_taken_0x25341c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x253420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25341Cu;
        // 0x253420: 0xd21023  subu        $v0, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25341c) {
            ctx->pc = 0x253478u;
            goto label_253478;
        }
    }
    ctx->pc = 0x253424u;
label_253424:
    // 0x253424: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x253424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x253428: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x253428u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25342c: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25342Cu;
    {
        const bool branch_taken_0x25342c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x253430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25342Cu;
        // 0x253430: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25342c) {
            ctx->pc = 0x253474u;
            goto label_253474;
        }
    }
    ctx->pc = 0x253434u;
    // 0x253434: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x253434u;
    SET_GPR_U32(ctx, 31, 0x25343Cu);
    ctx->pc = 0x253438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253434u;
    // 0x253438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x253434u, 0x25343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25343Cu;
label_25343c:
    // 0x25343c: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x25343cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x253440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253444: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x253444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x253448: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x253448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25344c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x25344cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x253450: 0x2e2b82f  dsubu       $s7, $s7, $v0
    ctx->pc = 0x253450u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) - GPR_U64(ctx, 2));
    // 0x253454: 0xc08ac56  jal         func_22B158
    ctx->pc = 0x253454u;
    SET_GPR_U32(ctx, 31, 0x25345Cu);
    ctx->pc = 0x253458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253454u;
    // 0x253458: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B158u, 0x253454u, 0x25345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25345Cu;
label_25345c:
    // 0x25345c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x253460: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x253460u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x253464: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x253464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x253468: 0x8e32001c  lw          $s2, 0x1C($s1)
    ctx->pc = 0x253468u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x25346c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x25346Cu;
    {
        const bool branch_taken_0x25346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25346Cu;
        // 0x253470: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25346c) {
            ctx->pc = 0x25353Cu;
            goto label_25353c;
        }
    }
    ctx->pc = 0x253474u;
label_253474:
    // 0x253474: 0xd21023  subu        $v0, $a2, $s2
    ctx->pc = 0x253474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_253478:
    // 0x253478: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253478u;
    {
        const bool branch_taken_0x253478 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253478u;
        // 0x25347c: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253478) {
            ctx->pc = 0x2534B0u;
            goto label_2534b0;
        }
    }
    ctx->pc = 0x253480u;
    // 0x253480: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x253480u;
    {
        const bool branch_taken_0x253480 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x253484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253480u;
        // 0x253484: 0x1288023  subu        $s0, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253480) {
            ctx->pc = 0x2534B0u;
            goto label_2534b0;
        }
    }
    ctx->pc = 0x253488u;
    // 0x253488: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x253488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25348c: 0x102823  negu        $a1, $s0
    ctx->pc = 0x25348cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x253490: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x253490u;
    SET_GPR_U32(ctx, 31, 0x253498u);
    ctx->pc = 0x253494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253490u;
    // 0x253494: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x253490u, 0x253498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253498u;
label_253498:
    // 0x253498: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x253498u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25349c: 0x8e28001c  lw          $t0, 0x1C($s1)
    ctx->pc = 0x25349cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2534a0: 0x2f0b82f  dsubu       $s7, $s7, $s0
    ctx->pc = 0x2534a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) - GPR_U64(ctx, 16));
    // 0x2534a4: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x2534a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2534a8: 0x2534821  addu        $t1, $s2, $s3
    ctx->pc = 0x2534a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2534ac: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2534acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_2534b0:
    // 0x2534b0: 0x1509001f  bne         $t0, $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2534B0u;
    {
        const bool branch_taken_0x2534b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x2534B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534B0u;
        // 0x2534b4: 0x1121023  subu        $v0, $t0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534b0) {
            ctx->pc = 0x253530u;
            goto label_253530;
        }
    }
    ctx->pc = 0x2534B8u;
    // 0x2534b8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2534b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2534bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2534bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2534c0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2534c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2534c4: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2534c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2534c8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2534c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2534cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2534ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2534d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2534d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2534d4: 0xc08ac56  jal         func_22B158
    ctx->pc = 0x2534D4u;
    SET_GPR_U32(ctx, 31, 0x2534DCu);
    ctx->pc = 0x2534D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534D4u;
    // 0x2534d8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B158u, 0x2534D4u, 0x2534DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534DCu;
label_2534dc:
    // 0x2534dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2534dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2534e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2534E0u;
    {
        const bool branch_taken_0x2534e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534E0u;
        // 0x2534e4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534e0) {
            ctx->pc = 0x2534F8u;
            goto label_2534f8;
        }
    }
    ctx->pc = 0x2534E8u;
    // 0x2534e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2534e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2534ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2534ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2534f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2534f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2534f4: 0x0  nop
    ctx->pc = 0x2534f4u;
    // NOP
label_2534f8:
    // 0x2534f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2534f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2534fc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2534fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x253500: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x253500u;
    {
        const bool branch_taken_0x253500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253500u;
        // 0x253504: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253500) {
            ctx->pc = 0x253518u;
            goto label_253518;
        }
    }
    ctx->pc = 0x253508u;
    // 0x253508: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x253508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x25350c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x25350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x253510: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x253510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x253514: 0x0  nop
    ctx->pc = 0x253514u;
    // NOP
label_253518:
    // 0x253518: 0x12800049  beqz        $s4, . + 4 + (0x49 << 2)
    ctx->pc = 0x253518u;
    {
        const bool branch_taken_0x253518 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253518u;
        // 0x25351c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253518) {
            ctx->pc = 0x253640u;
            goto label_253640;
        }
    }
    ctx->pc = 0x253520u;
    // 0x253520: 0xc098560  jal         func_261580
    ctx->pc = 0x253520u;
    SET_GPR_U32(ctx, 31, 0x253528u);
    ctx->pc = 0x253524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253520u;
    // 0x253524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x253520u, 0x253528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253528u;
label_253528:
    // 0x253528: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x253528u;
    {
        const bool branch_taken_0x253528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253528) {
            ctx->pc = 0x253600u;
            goto label_253600;
        }
    }
    ctx->pc = 0x253530u;
label_253530:
    // 0x253530: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x253530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253534: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x253534u;
    {
        const bool branch_taken_0x253534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253534u;
        // 0x253538: 0x222f00a  movz        $fp, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253534) {
            ctx->pc = 0x253588u;
            goto label_253588;
        }
    }
    ctx->pc = 0x25353Cu;
label_25353c:
    // 0x25353c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_253540:
    // 0x253540: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253540u;
    {
        const bool branch_taken_0x253540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253540u;
        // 0x253544: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253540) {
            ctx->pc = 0x253554u;
            goto label_253554;
        }
    }
    ctx->pc = 0x253548u;
    // 0x253548: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x253548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25354c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253550: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x253550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_253554:
    // 0x253554: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x253554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x253558: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x253558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25355c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25355Cu;
    {
        const bool branch_taken_0x25355c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25355Cu;
        // 0x253560: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25355c) {
            ctx->pc = 0x253570u;
            goto label_253570;
        }
    }
    ctx->pc = 0x253564u;
    // 0x253564: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x253564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x253568: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x253568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25356c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x25356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_253570:
    // 0x253570: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x253570u;
    {
        const bool branch_taken_0x253570 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x253574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253570u;
        // 0x253574: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253570) {
            ctx->pc = 0x253580u;
            goto label_253580;
        }
    }
    ctx->pc = 0x253578u;
    // 0x253578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253578u;
    {
        const bool branch_taken_0x253578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253578u;
        // 0x25357c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253578) {
            ctx->pc = 0x253588u;
            goto label_253588;
        }
    }
    ctx->pc = 0x253580u;
label_253580:
    // 0x253580: 0xc098560  jal         func_261580
    ctx->pc = 0x253580u;
    SET_GPR_U32(ctx, 31, 0x253588u);
    ctx->pc = 0x253584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253580u;
    // 0x253584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x253580u, 0x253588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253588u;
label_253588:
    // 0x253588: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x253588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25358c:
    // 0x25358c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x25358Cu;
    {
        const bool branch_taken_0x25358c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25358c) {
            ctx->pc = 0x253600u;
            goto label_253600;
        }
    }
    ctx->pc = 0x253594u;
    // 0x253594: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x253594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253598: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x253598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x25359c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x25359cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2535a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2535a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2535a4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2535a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535a8: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x2535a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2535ac: 0x1492000c  bne         $a0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2535ACu;
    {
        const bool branch_taken_0x2535ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x2535B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535ACu;
        // 0x2535b0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535ac) {
            ctx->pc = 0x2535E0u;
            goto label_2535e0;
        }
    }
    ctx->pc = 0x2535B4u;
    // 0x2535b4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2535b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2535b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2535b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2535bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2535c0: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x2535c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2535c4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2535c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2535c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2535c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2535ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2535d0: 0xc08ac56  jal         func_22B158
    ctx->pc = 0x2535D0u;
    SET_GPR_U32(ctx, 31, 0x2535D8u);
    ctx->pc = 0x2535D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535D0u;
    // 0x2535d4: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B158u, 0x2535D0u, 0x2535D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2535D8u;
label_2535d8:
    // 0x2535d8: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x2535D8u;
    {
        const bool branch_taken_0x2535d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2535DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535D8u;
        // 0x2535dc: 0x8e35000c  lw          $s5, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535d8) {
            ctx->pc = 0x25353Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25353c;
        }
    }
    ctx->pc = 0x2535E0u;
label_2535e0:
    // 0x2535e0: 0x921023  subu        $v0, $a0, $s2
    ctx->pc = 0x2535e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2535e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2535E4u;
    {
        const bool branch_taken_0x2535e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2535E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535E4u;
        // 0x2535e8: 0x2532821  addu        $a1, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535e4) {
            ctx->pc = 0x2535F4u;
            goto label_2535f4;
        }
    }
    ctx->pc = 0x2535ECu;
    // 0x2535ec: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2535ECu;
    {
        const bool branch_taken_0x2535ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2535F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535ECu;
        // 0x2535f0: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535ec) {
            ctx->pc = 0x253588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253588;
        }
    }
    ctx->pc = 0x2535F4u;
label_2535f4:
    // 0x2535f4: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2535f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2535f8: 0x1840ff63  blez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x2535F8u;
    {
        const bool branch_taken_0x2535f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2535FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535F8u;
        // 0x2535fc: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535f8) {
            ctx->pc = 0x253388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253388;
        }
    }
    ctx->pc = 0x253600u;
label_253600:
    // 0x253600: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x253600u;
    {
        const bool branch_taken_0x253600 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x253604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253600u;
        // 0x253604: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253600) {
            ctx->pc = 0x253648u;
            goto label_253648;
        }
    }
    ctx->pc = 0x253608u;
    // 0x253608: 0xc098552  jal         func_261548
    ctx->pc = 0x253608u;
    SET_GPR_U32(ctx, 31, 0x253610u);
    ctx->pc = 0x25360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253608u;
    // 0x25360c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x253608u, 0x253610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253610u;
label_253610:
    // 0x253610: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x253610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253614: 0x5680000c  bnel        $s4, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x253614u;
    {
        const bool branch_taken_0x253614 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x253614) {
            ctx->pc = 0x253618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253614u;
            // 0x253618: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253648u;
            goto label_253648;
        }
    }
    ctx->pc = 0x25361Cu;
    // 0x25361c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25361cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x253620: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x253620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x253624: 0xdc620108  ld          $v0, 0x108($v1)
    ctx->pc = 0x253624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x253628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x253628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25362c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25362cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x253630: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x253630u;
    SET_GPR_U32(ctx, 31, 0x253638u);
    ctx->pc = 0x253634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253630u;
    // 0x253634: 0xfc620108  sd          $v0, 0x108($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 264), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x253630u, 0x253638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253638u;
label_253638:
    // 0x253638: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x253638u;
    {
        const bool branch_taken_0x253638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253638u;
        // 0x25363c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253638) {
            ctx->pc = 0x2537F4u;
            goto label_2537f4;
        }
    }
    ctx->pc = 0x253640u;
label_253640:
    // 0x253640: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x253640u;
    {
        const bool branch_taken_0x253640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253640u;
        // 0x253644: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253640) {
            ctx->pc = 0x253600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253600;
        }
    }
    ctx->pc = 0x253648u;
label_253648:
    // 0x253648: 0x24461308  addiu       $a2, $v0, 0x1308
    ctx->pc = 0x253648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x25364c: 0xdcc20138  ld          $v0, 0x138($a2)
    ctx->pc = 0x25364cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 312)));
    // 0x253650: 0xdcc30140  ld          $v1, 0x140($a2)
    ctx->pc = 0x253650u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 320)));
    // 0x253654: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x253654u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x253658: 0x77182d  daddu       $v1, $v1, $s7
    ctx->pc = 0x253658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 23));
    // 0x25365c: 0xfcc20138  sd          $v0, 0x138($a2)
    ctx->pc = 0x25365cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 312), GPR_U64(ctx, 2));
    // 0x253660: 0xfcc30140  sd          $v1, 0x140($a2)
    ctx->pc = 0x253660u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 320), GPR_U64(ctx, 3));
    // 0x253664: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x253664u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253668: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x253668u;
    {
        const bool branch_taken_0x253668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253668u;
        // 0x25366c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253668) {
            ctx->pc = 0x253688u;
            goto label_253688;
        }
    }
    ctx->pc = 0x253670u;
    // 0x253670: 0xdcc20128  ld          $v0, 0x128($a2)
    ctx->pc = 0x253670u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x253674: 0xdcc30130  ld          $v1, 0x130($a2)
    ctx->pc = 0x253674u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x253678: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x253678u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25367c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x25367cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x253680: 0xfcc20128  sd          $v0, 0x128($a2)
    ctx->pc = 0x253680u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 296), GPR_U64(ctx, 2));
    // 0x253684: 0xfcc30130  sd          $v1, 0x130($a2)
    ctx->pc = 0x253684u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 304), GPR_U64(ctx, 3));
label_253688:
    // 0x253688: 0xae95000c  sw          $s5, 0xC($s4)
    ctx->pc = 0x253688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 21));
    // 0x25368c: 0xae92001c  sw          $s2, 0x1C($s4)
    ctx->pc = 0x25368cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 18));
    // 0x253690: 0xae930020  sw          $s3, 0x20($s4)
    ctx->pc = 0x253690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 19));
    // 0x253694: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x253694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253698: 0x17c0000b  bnez        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x253698u;
    {
        const bool branch_taken_0x253698 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x25369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253698u;
        // 0x25369c: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253698) {
            ctx->pc = 0x2536C8u;
            goto label_2536c8;
        }
    }
    ctx->pc = 0x2536A0u;
    // 0x2536a0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2536a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2536A4u;
    {
        const bool branch_taken_0x2536a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536A4u;
        // 0x2536a8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536a4) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x2536ACu;
    // 0x2536ac: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2536acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2536b0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x2536b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x2536b4: 0x0  nop
    ctx->pc = 0x2536b4u;
    // NOP
label_2536b8:
    // 0x2536b8: 0xaed40004  sw          $s4, 0x4($s6)
    ctx->pc = 0x2536b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 20));
    // 0x2536bc: 0x26c20004  addiu       $v0, $s6, 0x4
    ctx->pc = 0x2536bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2536c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2536C0u;
    {
        const bool branch_taken_0x2536c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536C0u;
        // 0x2536c4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536c0) {
            ctx->pc = 0x2536E8u;
            goto label_2536e8;
        }
    }
    ctx->pc = 0x2536C8u;
label_2536c8:
    // 0x2536c8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2536c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2536cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2536CCu;
    {
        const bool branch_taken_0x2536cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536CCu;
        // 0x2536d0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536cc) {
            ctx->pc = 0x2536E0u;
            goto label_2536e0;
        }
    }
    ctx->pc = 0x2536D4u;
    // 0x2536d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2536d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2536d8: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x2536d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x2536dc: 0x0  nop
    ctx->pc = 0x2536dcu;
    // NOP
label_2536e0:
    // 0x2536e0: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x2536e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x2536e4: 0xae9e0004  sw          $fp, 0x4($s4)
    ctx->pc = 0x2536e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
label_2536e8:
    // 0x2536e8: 0x8ec200c4  lw          $v0, 0xC4($s6)
    ctx->pc = 0x2536e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
    // 0x2536ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2536ECu;
    {
        const bool branch_taken_0x2536ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536ECu;
        // 0x2536f0: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536ec) {
            ctx->pc = 0x253700u;
            goto label_253700;
        }
    }
    ctx->pc = 0x2536F4u;
    // 0x2536f4: 0x8ec300c4  lw          $v1, 0xC4($s6)
    ctx->pc = 0x2536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
    // 0x2536f8: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x2536f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x2536fc: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2536fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_253700:
    // 0x253700: 0xaed400c4  sw          $s4, 0xC4($s6)
    ctx->pc = 0x253700u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 20));
    // 0x253704: 0x26c200c4  addiu       $v0, $s6, 0xC4
    ctx->pc = 0x253704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 196));
    // 0x253708: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x253708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x25370c: 0x86c40018  lh          $a0, 0x18($s6)
    ctx->pc = 0x25370cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
label_253710:
    // 0x253710: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x253710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x253714: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x253714u;
    {
        const bool branch_taken_0x253714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253714u;
        // 0x253718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253714) {
            ctx->pc = 0x2537F4u;
            goto label_2537f4;
        }
    }
    ctx->pc = 0x25371Cu;
    // 0x25371c: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x25371cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x253720: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x253720u;
    {
        const bool branch_taken_0x253720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x253724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253720u;
        // 0x253724: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253720) {
            ctx->pc = 0x2537F8u;
            goto label_2537f8;
        }
    }
    ctx->pc = 0x253728u;
    // 0x253728: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x253728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x25372c: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x25372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x253730: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x253730u;
    {
        const bool branch_taken_0x253730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x253734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253730u;
        // 0x253734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253730) {
            ctx->pc = 0x2537F8u;
            goto label_2537f8;
        }
    }
    ctx->pc = 0x253738u;
    // 0x253738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x253738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25373c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25373Cu;
    {
        const bool branch_taken_0x25373c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x253740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25373Cu;
        // 0x253740: 0x8e270020  lw          $a3, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25373c) {
            ctx->pc = 0x25374Cu;
            goto label_25374c;
        }
    }
    ctx->pc = 0x253744u;
    // 0x253744: 0x14e0002c  bnez        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x253744u;
    {
        const bool branch_taken_0x253744 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x253748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253744u;
        // 0x253748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253744) {
            ctx->pc = 0x2537F8u;
            goto label_2537f8;
        }
    }
    ctx->pc = 0x25374Cu;
label_25374c:
    // 0x25374c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x25374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x253750: 0xaec20070  sw          $v0, 0x70($s6)
    ctx->pc = 0x253750u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 2));
    // 0x253754: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x253754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x253758: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x253758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25375c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x25375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x253760: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x253760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253764u;
    {
        const bool branch_taken_0x253764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253764u;
        // 0x253768: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253764) {
            ctx->pc = 0x253778u;
            goto label_253778;
        }
    }
    ctx->pc = 0x25376Cu;
    // 0x25376c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25376cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x253770: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x253770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253774: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x253774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_253778:
    // 0x253778: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x253778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25377c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x25377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x253780: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x253780u;
    {
        const bool branch_taken_0x253780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253780u;
        // 0x253784: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253780) {
            ctx->pc = 0x253798u;
            goto label_253798;
        }
    }
    ctx->pc = 0x253788u;
    // 0x253788: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x253788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x25378c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x25378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x253790: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x253790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x253794: 0x0  nop
    ctx->pc = 0x253794u;
    // NOP
label_253798:
    // 0x253798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x253798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25379c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x25379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2537a0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2537a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2537a4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2537a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2537a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2537A8u;
    {
        const bool branch_taken_0x2537a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537A8u;
        // 0x2537ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537a8) {
            ctx->pc = 0x2537C0u;
            goto label_2537c0;
        }
    }
    ctx->pc = 0x2537B0u;
    // 0x2537b0: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2537B0u;
    SET_GPR_U32(ctx, 31, 0x2537B8u);
    ctx->pc = 0x2537B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537B0u;
    // 0x2537b4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2537B0u, 0x2537B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537B8u;
label_2537b8:
    // 0x2537b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2537B8u;
    {
        const bool branch_taken_0x2537b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2537b8) {
            ctx->pc = 0x2537CCu;
            goto label_2537cc;
        }
    }
    ctx->pc = 0x2537C0u;
label_2537c0:
    // 0x2537c0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2537c4: 0xc08c2a8  jal         func_230AA0
    ctx->pc = 0x2537C4u;
    SET_GPR_U32(ctx, 31, 0x2537CCu);
    ctx->pc = 0x2537C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537C4u;
    // 0x2537c8: 0x24440048  addiu       $a0, $v0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AA0u, 0x2537C4u, 0x2537CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537CCu;
label_2537cc:
    // 0x2537cc: 0xc098560  jal         func_261580
    ctx->pc = 0x2537CCu;
    SET_GPR_U32(ctx, 31, 0x2537D4u);
    ctx->pc = 0x2537D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537CCu;
    // 0x2537d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2537CCu, 0x2537D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537D4u;
label_2537d4:
    // 0x2537d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2537d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2537d8: 0x94620078  lhu         $v0, 0x78($v1)
    ctx->pc = 0x2537d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2537dc: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2537dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2537e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2537E0u;
    {
        const bool branch_taken_0x2537e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537E0u;
        // 0x2537e4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537e0) {
            ctx->pc = 0x2537F0u;
            goto label_2537f0;
        }
    }
    ctx->pc = 0x2537E8u;
    // 0x2537e8: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x2537E8u;
    SET_GPR_U32(ctx, 31, 0x2537F0u);
    ctx->pc = 0x2537ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537E8u;
    // 0x2537ec: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x2537E8u, 0x2537F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537F0u;
label_2537f0:
    // 0x2537f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2537f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2537f4:
    // 0x2537f4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2537f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2537f8:
    // 0x2537f8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2537f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2537fc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2537fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253800: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x253800u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253804: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x253804u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253808: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x253808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25380c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x25380cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253810: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x253810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253814: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x253814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253818: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x253818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25381c: 0x3e00008  jr          $ra
    ctx->pc = 0x25381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25381Cu;
        // 0x253820: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25381Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253824u;
    // 0x253824: 0x0  nop
    ctx->pc = 0x253824u;
    // NOP
    // 0x253828: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x253828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x25382c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x253830: 0xffa50188  sd          $a1, 0x188($sp)
    ctx->pc = 0x253830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 5));
    // 0x253834: 0x24431308  addiu       $v1, $v0, 0x1308
    ctx->pc = 0x253834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x253838: 0xffb70110  sd          $s7, 0x110($sp)
    ctx->pc = 0x253838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
    // 0x25383c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25383cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x253840: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x253840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x253844: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x253844u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253848: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x253848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x25384c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253850: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x253850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x253854: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x253854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253858: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x253858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x25385c: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x25385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x253860: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x253860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x253864: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x253864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x253868: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x253868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x25386c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x25386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x253870: 0x8fb30188  lw          $s3, 0x188($sp)
    ctx->pc = 0x253870u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x253874: 0xdc6200e0  ld          $v0, 0xE0($v1)
    ctx->pc = 0x253874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x253878: 0xffa60190  sd          $a2, 0x190($sp)
    ctx->pc = 0x253878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 6));
    // 0x25387c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25387cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x253880: 0xfc6200e0  sd          $v0, 0xE0($v1)
    ctx->pc = 0x253880u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 2));
    // 0x253884: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x253884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x253888: 0xffa70198  sd          $a3, 0x198($sp)
    ctx->pc = 0x253888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 7));
    // 0x25388c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x25388cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x253890: 0xffa801a0  sd          $t0, 0x1A0($sp)
    ctx->pc = 0x253890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 8));
    // 0x253894: 0xffa901a8  sd          $t1, 0x1A8($sp)
    ctx->pc = 0x253894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 9));
    // 0x253898: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x253898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x25389c: 0xffaa01b0  sd          $t2, 0x1B0($sp)
    ctx->pc = 0x25389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 10));
    // 0x2538a0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2538a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2538a4: 0xc048c96  jal         func_123258
    ctx->pc = 0x2538A4u;
    SET_GPR_U32(ctx, 31, 0x2538ACu);
    ctx->pc = 0x2538A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538A4u;
    // 0x2538a8: 0xffab01b8  sd          $t3, 0x1B8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x2538A4u, 0x2538ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538ACu;
label_2538ac:
    // 0x2538ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2538acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2538b0: 0xa7a0001c  sh          $zero, 0x1C($sp)
    ctx->pc = 0x2538b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2538b4: 0x96e20012  lhu         $v0, 0x12($s7)
    ctx->pc = 0x2538b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x2538b8: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x2538b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x2538bc: 0x14400880  bnez        $v0, . + 4 + (0x880 << 2)
    ctx->pc = 0x2538BCu;
    {
        const bool branch_taken_0x2538bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2538C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538BCu;
        // 0x2538c0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538bc) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2538C4u;
    // 0x2538c4: 0x8efe0008  lw          $fp, 0x8($s7)
    ctx->pc = 0x2538c4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2538c8: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x2538c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2538cc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2538ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2538d0: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2538D0u;
    {
        const bool branch_taken_0x2538d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2538D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538D0u;
        // 0x2538d4: 0x26630014  addiu       $v1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538d0) {
            ctx->pc = 0x2539C8u;
            goto label_2539c8;
        }
    }
    ctx->pc = 0x2538D8u;
    // 0x2538d8: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2538d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2538dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2538dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2538e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2538E0u;
    {
        const bool branch_taken_0x2538e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538E0u;
        // 0x2538e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538e0) {
            ctx->pc = 0x253950u;
            goto label_253950;
        }
    }
    ctx->pc = 0x2538E8u;
    // 0x2538e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2538e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538ec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2538ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2538f0: 0xc08af40  jal         func_22BD00
    ctx->pc = 0x2538F0u;
    SET_GPR_U32(ctx, 31, 0x2538F8u);
    ctx->pc = 0x2538F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538F0u;
    // 0x2538f4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BD00u, 0x2538F0u, 0x2538F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538F8u;
label_2538f8:
    // 0x2538f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2538f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538fc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2538FCu;
    {
        const bool branch_taken_0x2538fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538FCu;
        // 0x253900: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538fc) {
            ctx->pc = 0x253938u;
            goto label_253938;
        }
    }
    ctx->pc = 0x253904u;
    // 0x253904: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x253904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x253908: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x253908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x25390c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x25390cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x253910: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x253910u;
    {
        const bool branch_taken_0x253910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253910) {
            ctx->pc = 0x253914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253910u;
            // 0x253914: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253930u;
            goto label_253930;
        }
    }
    ctx->pc = 0x253918u;
    // 0x253918: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x253918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25391c: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x25391Cu;
    SET_GPR_U32(ctx, 31, 0x253924u);
    ctx->pc = 0x253920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25391Cu;
    // 0x253920: 0x24846eb0  addiu       $a0, $a0, 0x6EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x25391Cu, 0x253924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253924u;
label_253924:
    // 0x253924: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x253924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253928: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x253928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25392c: 0x0  nop
    ctx->pc = 0x25392cu;
    // NOP
label_253930:
    // 0x253930: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253930u;
    {
        const bool branch_taken_0x253930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253930u;
        // 0x253934: 0x44a021  addu        $s4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253930) {
            ctx->pc = 0x253940u;
            goto label_253940;
        }
    }
    ctx->pc = 0x253938u;
label_253938:
    // 0x253938: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x253938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25393c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x25393cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253940:
    // 0x253940: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x253940u;
    {
        const bool branch_taken_0x253940 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x253944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253940u;
        // 0x253944: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253940) {
            ctx->pc = 0x253958u;
            goto label_253958;
        }
    }
    ctx->pc = 0x253948u;
    // 0x253948: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x253948u;
    {
        const bool branch_taken_0x253948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253948) {
            ctx->pc = 0x253A84u;
            goto label_253a84;
        }
    }
    ctx->pc = 0x253950u;
label_253950:
    // 0x253950: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x253950u;
    {
        const bool branch_taken_0x253950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253950u;
        // 0x253954: 0x3d3a021  addu        $s4, $fp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253950) {
            ctx->pc = 0x253940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253940;
        }
    }
    ctx->pc = 0x253958u;
label_253958:
    // 0x253958: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x253958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x25395c: 0xc08a254  jal         func_228950
    ctx->pc = 0x25395Cu;
    SET_GPR_U32(ctx, 31, 0x253964u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x25395Cu, 0x253964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253964u;
label_253964:
    // 0x253964: 0x8bd00013  lwl         $s0, 0x13($fp)
    ctx->pc = 0x253964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x253968: 0x9bd00010  lwr         $s0, 0x10($fp)
    ctx->pc = 0x253968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x25396c: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x25396cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x253970: 0xc08a254  jal         func_228950
    ctx->pc = 0x253970u;
    SET_GPR_U32(ctx, 31, 0x253978u);
    ctx->pc = 0x253974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253970u;
    // 0x253974: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x253970u, 0x253978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253978u;
label_253978:
    // 0x253978: 0x12020851  beq         $s0, $v0, . + 4 + (0x851 << 2)
    ctx->pc = 0x253978u;
    {
        const bool branch_taken_0x253978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x253978) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x253980u;
    // 0x253980: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x253980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x253984: 0x93c30002  lbu         $v1, 0x2($fp)
    ctx->pc = 0x253984u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x253988: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x253988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25398c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25398cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x253990: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x253990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x253994: 0x532023  subu        $a0, $v0, $s3
    ctx->pc = 0x253994u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x253998: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x253998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x25399c: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x25399cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2539a0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2539a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2539a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2539a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2539a8: 0x2c430014  sltiu       $v1, $v0, 0x14
    ctx->pc = 0x2539a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2539ac: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2539ACu;
    {
        const bool branch_taken_0x2539ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2539B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539ACu;
        // 0x2539b0: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539ac) {
            ctx->pc = 0x2539D8u;
            goto label_2539d8;
        }
    }
    ctx->pc = 0x2539B4u;
    // 0x2539b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2539b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2539b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2539B8u;
    {
        const bool branch_taken_0x2539b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539B8u;
        // 0x2539bc: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539b8) {
            ctx->pc = 0x2539FCu;
            goto label_2539fc;
        }
    }
    ctx->pc = 0x2539C0u;
    // 0x2539c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2539C0u;
    {
        const bool branch_taken_0x2539c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539C0u;
        // 0x2539c4: 0x24a31308  addiu       $v1, $a1, 0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539c0) {
            ctx->pc = 0x2539E0u;
            goto label_2539e0;
        }
    }
    ctx->pc = 0x2539C8u;
label_2539c8:
    // 0x2539c8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2539C8u;
    SET_GPR_U32(ctx, 31, 0x2539D0u);
    ctx->pc = 0x2539CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539C8u;
    // 0x2539cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2539C8u, 0x2539D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539D0u;
label_2539d0:
    // 0x2539d0: 0x10000845  b           . + 4 + (0x845 << 2)
    ctx->pc = 0x2539D0u;
    {
        const bool branch_taken_0x2539d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539D0u;
        // 0x2539d4: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539d0) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x2539D8u;
label_2539d8:
    // 0x2539d8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2539d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2539dc: 0x24a31308  addiu       $v1, $a1, 0x1308
    ctx->pc = 0x2539dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
label_2539e0:
    // 0x2539e0: 0xdc620100  ld          $v0, 0x100($v1)
    ctx->pc = 0x2539e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2539e4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2539e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2539e8: 0x10000835  b           . + 4 + (0x835 << 2)
    ctx->pc = 0x2539E8u;
    {
        const bool branch_taken_0x2539e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539E8u;
        // 0x2539ec: 0xfc620100  sd          $v0, 0x100($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539e8) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2539F0u;
label_2539f0:
    // 0x2539f0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x2539f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2539f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2539F4u;
    {
        const bool branch_taken_0x2539f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539F4u;
        // 0x2539f8: 0x53a021  addu        $s4, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539f4) {
            ctx->pc = 0x253A78u;
            goto label_253a78;
        }
    }
    ctx->pc = 0x2539FCu;
label_2539fc:
    // 0x2539fc: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2539fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x253a00: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x253a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x253a04: 0x2cc30015  sltiu       $v1, $a2, 0x15
    ctx->pc = 0x253a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x253a08: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x253A08u;
    {
        const bool branch_taken_0x253a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A08u;
        // 0x253a0c: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a08) {
            ctx->pc = 0x253B24u;
            goto label_253b24;
        }
    }
    ctx->pc = 0x253A10u;
    // 0x253a10: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x253a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x253a14: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x253a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x253a18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x253a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x253a1c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x253A1Cu;
    {
        const bool branch_taken_0x253a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A1Cu;
        // 0x253a20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a1c) {
            ctx->pc = 0x2539F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2539f0;
        }
    }
    ctx->pc = 0x253A24u;
    // 0x253a24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x253a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a28: 0xc08af40  jal         func_22BD00
    ctx->pc = 0x253A28u;
    SET_GPR_U32(ctx, 31, 0x253A30u);
    ctx->pc = 0x253A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A28u;
    // 0x253a2c: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BD00u, 0x253A28u, 0x253A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A30u;
label_253a30:
    // 0x253a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a34: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x253A34u;
    {
        const bool branch_taken_0x253a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A34u;
        // 0x253a38: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a34) {
            ctx->pc = 0x253A70u;
            goto label_253a70;
        }
    }
    ctx->pc = 0x253A3Cu;
    // 0x253a3c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x253a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x253a40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x253a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x253a44: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x253a48: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x253a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x253a4c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x253A4Cu;
    {
        const bool branch_taken_0x253a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253a4c) {
            ctx->pc = 0x253A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A4Cu;
            // 0x253a50: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253A68u;
            goto label_253a68;
        }
    }
    ctx->pc = 0x253A54u;
    // 0x253a54: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x253a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x253a58: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x253A58u;
    SET_GPR_U32(ctx, 31, 0x253A60u);
    ctx->pc = 0x253A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A58u;
    // 0x253a5c: 0x24846eb0  addiu       $a0, $a0, 0x6EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x253A58u, 0x253A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A60u;
label_253a60:
    // 0x253a60: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x253a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x253a64: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x253a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_253a68:
    // 0x253a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253A68u;
    {
        const bool branch_taken_0x253a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A68u;
        // 0x253a6c: 0x44a021  addu        $s4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a68) {
            ctx->pc = 0x253A78u;
            goto label_253a78;
        }
    }
    ctx->pc = 0x253A70u;
label_253a70:
    // 0x253a70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x253a70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a74: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x253a74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253a78:
    // 0x253a78: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x253A78u;
    {
        const bool branch_taken_0x253a78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x253A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A78u;
        // 0x253a7c: 0x8fa20088  lw          $v0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a78) {
            ctx->pc = 0x253A9Cu;
            goto label_253a9c;
        }
    }
    ctx->pc = 0x253A80u;
    // 0x253a80: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x253a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_253a84:
    // 0x253a84: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x253a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x253a88: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x253a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x253a8c: 0xdc620110  ld          $v0, 0x110($v1)
    ctx->pc = 0x253a8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x253a90: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x253a90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x253a94: 0x10000813  b           . + 4 + (0x813 << 2)
    ctx->pc = 0x253A94u;
    {
        const bool branch_taken_0x253a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A94u;
        // 0x253a98: 0xfc620110  sd          $v0, 0x110($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a94) {
            ctx->pc = 0x255AE4u;
            goto label_255ae4;
        }
    }
    ctx->pc = 0x253A9Cu;
label_253a9c:
    // 0x253a9c: 0x26830014  addiu       $v1, $s4, 0x14
    ctx->pc = 0x253a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x253aa0: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x253aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x253aa4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x253aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x253aa8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x253aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x253aac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x253aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x253ab0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x253ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253ab4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253AB4u;
    {
        const bool branch_taken_0x253ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x253AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AB4u;
        // 0x253ab8: 0x2882000d  slti        $v0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ab4) {
            ctx->pc = 0x253AD0u;
            goto label_253ad0;
        }
    }
    ctx->pc = 0x253ABCu;
    // 0x253abc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x253ABCu;
    {
        const bool branch_taken_0x253abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253abc) {
            ctx->pc = 0x253AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253ABCu;
            // 0x253ac0: 0x9296000d  lbu         $s6, 0xD($s4) (Delay Slot)
            SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253B28u;
            goto label_253b28;
        }
    }
    ctx->pc = 0x253AC4u;
    // 0x253ac4: 0x8062000c  lb          $v0, 0xC($v1)
    ctx->pc = 0x253ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x253ac8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x253AC8u;
    {
        const bool branch_taken_0x253ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253ac8) {
            ctx->pc = 0x253ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253AC8u;
            // 0x253acc: 0x9296000d  lbu         $s6, 0xD($s4) (Delay Slot)
            SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253B28u;
            goto label_253b28;
        }
    }
    ctx->pc = 0x253AD0u;
label_253ad0:
    // 0x253ad0: 0x3c040101  lui         $a0, 0x101
    ctx->pc = 0x253ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)257 << 16));
    // 0x253ad4: 0xc08a254  jal         func_228950
    ctx->pc = 0x253AD4u;
    SET_GPR_U32(ctx, 31, 0x253ADCu);
    ctx->pc = 0x253AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AD4u;
    // 0x253ad8: 0x3484080a  ori         $a0, $a0, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x253AD4u, 0x253ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253ADCu;
label_253adc:
    // 0x253adc: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x253adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x253ae0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x253AE0u;
    {
        const bool branch_taken_0x253ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x253ae0) {
            ctx->pc = 0x253AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253AE0u;
            // 0x253ae4: 0x9296000d  lbu         $s6, 0xD($s4) (Delay Slot)
            SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253B28u;
            goto label_253b28;
        }
    }
    ctx->pc = 0x253AE8u;
    // 0x253ae8: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x253ae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x253aec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x253aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x253af0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x253AF0u;
    {
        const bool branch_taken_0x253af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253af0) {
            ctx->pc = 0x253AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253AF0u;
            // 0x253af4: 0x9296000d  lbu         $s6, 0xD($s4) (Delay Slot)
            SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253B28u;
            goto label_253b28;
        }
    }
    ctx->pc = 0x253AF8u;
    // 0x253af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253afc: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x253afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x253b00: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x253b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x253b04: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x253B04u;
    SET_GPR_U32(ctx, 31, 0x253B0Cu);
    ctx->pc = 0x253B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B04u;
    // 0x253b08: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x253B04u, 0x253B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B0Cu;
label_253b0c:
    // 0x253b0c: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x253b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x253b10: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x253b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x253b14: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x253b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x253b18: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x253B18u;
    SET_GPR_U32(ctx, 31, 0x253B20u);
    ctx->pc = 0x253B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B18u;
    // 0x253b1c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x253B18u, 0x253B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B20u;
label_253b20:
    // 0x253b20: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x253b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_253b24:
    // 0x253b24: 0x9296000d  lbu         $s6, 0xD($s4)
    ctx->pc = 0x253b24u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
label_253b28:
    // 0x253b28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x253b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253b2c: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x253B2Cu;
    {
        const bool branch_taken_0x253b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B2Cu;
        // 0x253b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b2c) {
            ctx->pc = 0x253D08u;
            goto label_253d08;
        }
    }
    ctx->pc = 0x253B34u;
    // 0x253b34: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x253b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x253b38: 0x92860001  lbu         $a2, 0x1($s4)
    ctx->pc = 0x253b38u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x253b3c: 0x245212e0  addiu       $s2, $v0, 0x12E0
    ctx->pc = 0x253b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4832));
    // 0x253b40: 0x92880003  lbu         $t0, 0x3($s4)
    ctx->pc = 0x253b40u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x253b44: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x253b44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x253b48: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x253b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x253b4c: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x253b4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x253b50: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x253b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x253b54: 0x8bc5000f  lwl         $a1, 0xF($fp)
    ctx->pc = 0x253b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x253b58: 0x9bc5000c  lwr         $a1, 0xC($fp)
    ctx->pc = 0x253b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x253b5c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x253b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x253b60: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x253b60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x253b64: 0x8bc70013  lwl         $a3, 0x13($fp)
    ctx->pc = 0x253b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x253b68: 0x9bc70010  lwr         $a3, 0x10($fp)
    ctx->pc = 0x253b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x253b6c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x253b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x253b70: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x253b70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x253b74: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x253b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x253b78: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x253b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x253b7c: 0xf13824  and         $a3, $a3, $s1
    ctx->pc = 0x253b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x253b80: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x253b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x253b84: 0xc093182  jal         func_24C608
    ctx->pc = 0x253B84u;
    SET_GPR_U32(ctx, 31, 0x253B8Cu);
    ctx->pc = 0x253B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B84u;
    // 0x253b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C608u, 0x253B84u, 0x253B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B8Cu;
label_253b8c:
    // 0x253b8c: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x253B8Cu;
    {
        const bool branch_taken_0x253b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253b8c) {
            ctx->pc = 0x253B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253B8Cu;
            // 0x253b90: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253D0Cu;
            goto label_253d0c;
        }
    }
    ctx->pc = 0x253B94u;
    // 0x253b94: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x253b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x253b98: 0x24901308  addiu       $s0, $a0, 0x1308
    ctx->pc = 0x253b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x253b9c: 0xde0201a8  ld          $v0, 0x1A8($s0)
    ctx->pc = 0x253b9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x253ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ba4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x253ba4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x253ba8: 0xfe0201a8  sd          $v0, 0x1A8($s0)
    ctx->pc = 0x253ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 424), GPR_U64(ctx, 2));
    // 0x253bac: 0x92860003  lbu         $a2, 0x3($s4)
    ctx->pc = 0x253bacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x253bb0: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x253bb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x253bb4: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x253bb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x253bb8: 0x8bc50013  lwl         $a1, 0x13($fp)
    ctx->pc = 0x253bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x253bbc: 0x9bc50010  lwr         $a1, 0x10($fp)
    ctx->pc = 0x253bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x253bc0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x253bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x253bc4: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x253bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x253bc8: 0xc0931d8  jal         func_24C760
    ctx->pc = 0x253BC8u;
    SET_GPR_U32(ctx, 31, 0x253BD0u);
    ctx->pc = 0x253BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BC8u;
    // 0x253bcc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C760u, 0x253BC8u, 0x253BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BD0u;
label_253bd0:
    // 0x253bd0: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x253BD0u;
    {
        const bool branch_taken_0x253bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253bd0) {
            ctx->pc = 0x253BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BD0u;
            // 0x253bd4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253D0Cu;
            goto label_253d0c;
        }
    }
    ctx->pc = 0x253BD8u;
    // 0x253bd8: 0xde0201b0  ld          $v0, 0x1B0($s0)
    ctx->pc = 0x253bd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x253bdc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x253bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x253be0: 0x8c641214  lw          $a0, 0x1214($v1)
    ctx->pc = 0x253be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4628)));
    // 0x253be4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x253be4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x253be8: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x253BE8u;
    {
        const bool branch_taken_0x253be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x253BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE8u;
        // 0x253bec: 0xfe0201b0  sd          $v0, 0x1B0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253be8) {
            ctx->pc = 0x253C8Cu;
            goto label_253c8c;
        }
    }
    ctx->pc = 0x253BF0u;
    // 0x253bf0: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x253bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x253bf4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x253BF4u;
    {
        const bool branch_taken_0x253bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253bf4) {
            ctx->pc = 0x253C8Cu;
            goto label_253c8c;
        }
    }
    ctx->pc = 0x253BFCu;
    // 0x253bfc: 0x8bc4000f  lwl         $a0, 0xF($fp)
    ctx->pc = 0x253bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x253c00: 0x9bc4000c  lwr         $a0, 0xC($fp)
    ctx->pc = 0x253c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x253c04: 0xc08a26a  jal         func_2289A8
    ctx->pc = 0x253C04u;
    SET_GPR_U32(ctx, 31, 0x253C0Cu);
    ctx->pc = 0x253C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C04u;
    // 0x253c08: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2289A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2289A8u, 0x253C04u, 0x253C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C0Cu;
label_253c0c:
    // 0x253c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x253c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c10: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x253C10u;
    SET_GPR_U32(ctx, 31, 0x253C18u);
    ctx->pc = 0x253C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C10u;
    // 0x253c14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x253C10u, 0x253C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C18u;
label_253c18:
    // 0x253c18: 0x8bc40013  lwl         $a0, 0x13($fp)
    ctx->pc = 0x253c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x253c1c: 0x9bc40010  lwr         $a0, 0x10($fp)
    ctx->pc = 0x253c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x253c20: 0xc08a26a  jal         func_2289A8
    ctx->pc = 0x253C20u;
    SET_GPR_U32(ctx, 31, 0x253C28u);
    ctx->pc = 0x253C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C20u;
    // 0x253c24: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2289A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2289A8u, 0x253C20u, 0x253C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C28u;
label_253c28:
    // 0x253c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x253c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c2c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x253C2Cu;
    SET_GPR_U32(ctx, 31, 0x253C34u);
    ctx->pc = 0x253C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C2Cu;
    // 0x253c30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x253C2Cu, 0x253C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C34u;
label_253c34:
    // 0x253c34: 0x92840003  lbu         $a0, 0x3($s4)
    ctx->pc = 0x253c34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x253c38: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x253c38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x253c3c: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x253c3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x253c40: 0x26106ed8  addiu       $s0, $s0, 0x6ED8
    ctx->pc = 0x253c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28376));
    // 0x253c44: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x253c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x253c48: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x253c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x253c4c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x253C4Cu;
    SET_GPR_U32(ctx, 31, 0x253C54u);
    ctx->pc = 0x253C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C4Cu;
    // 0x253c50: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x253C4Cu, 0x253C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C54u;
label_253c54:
    // 0x253c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x253c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c58: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x253c58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x253c5c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x253c5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x253c60: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x253c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x253c64: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x253c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x253c68: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x253C68u;
    SET_GPR_U32(ctx, 31, 0x253C70u);
    ctx->pc = 0x253C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C68u;
    // 0x253c6c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x253C68u, 0x253C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C70u;
label_253c70:
    // 0x253c70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x253c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x253c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x253c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c7c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x253c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c80: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x253c80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c84: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x253C84u;
    SET_GPR_U32(ctx, 31, 0x253C8Cu);
    ctx->pc = 0x253C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C84u;
    // 0x253c88: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x253C84u, 0x253C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C8Cu;
label_253c8c:
    // 0x253c8c: 0x8a840007  lwl         $a0, 0x7($s4)
    ctx->pc = 0x253c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x253c90: 0x9a840004  lwr         $a0, 0x4($s4)
    ctx->pc = 0x253c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x253c94: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x253C94u;
    SET_GPR_U32(ctx, 31, 0x253C9Cu);
    ctx->pc = 0x253C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C94u;
    // 0x253c98: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x253C94u, 0x253C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C9Cu;
label_253c9c:
    // 0x253c9c: 0xaa820007  swl         $v0, 0x7($s4)
    ctx->pc = 0x253c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253ca0: 0xba820004  swr         $v0, 0x4($s4)
    ctx->pc = 0x253ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253ca4: 0x8a84000b  lwl         $a0, 0xB($s4)
    ctx->pc = 0x253ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x253ca8: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x253CA8u;
    SET_GPR_U32(ctx, 31, 0x253CB0u);
    ctx->pc = 0x253CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CA8u;
    // 0x253cac: 0x9a840008  lwr         $a0, 0x8($s4) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x253CA8u, 0x253CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CB0u;
label_253cb0:
    // 0x253cb0: 0xaa82000b  swl         $v0, 0xB($s4)
    ctx->pc = 0x253cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253cb4: 0xba820008  swr         $v0, 0x8($s4)
    ctx->pc = 0x253cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253cb8: 0x9284000f  lbu         $a0, 0xF($s4)
    ctx->pc = 0x253cb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
    // 0x253cbc: 0x9282000e  lbu         $v0, 0xE($s4)
    ctx->pc = 0x253cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x253cc0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x253cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x253cc4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x253cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x253cc8: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x253CC8u;
    SET_GPR_U32(ctx, 31, 0x253CD0u);
    ctx->pc = 0x253CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CC8u;
    // 0x253ccc: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x253CC8u, 0x253CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CD0u;
label_253cd0:
    // 0x253cd0: 0x92840013  lbu         $a0, 0x13($s4)
    ctx->pc = 0x253cd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x253cd4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x253cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x253cd8: 0x92850012  lbu         $a1, 0x12($s4)
    ctx->pc = 0x253cd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x253cdc: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x253cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x253ce0: 0xa283000f  sb          $v1, 0xF($s4)
    ctx->pc = 0x253ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x253ce4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x253ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x253ce8: 0xa282000e  sb          $v0, 0xE($s4)
    ctx->pc = 0x253ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x253cec: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x253CECu;
    SET_GPR_U32(ctx, 31, 0x253CF4u);
    ctx->pc = 0x253CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CECu;
    // 0x253cf0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x253CECu, 0x253CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CF4u;
label_253cf4:
    // 0x253cf4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x253cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x253cf8: 0xa2820012  sb          $v0, 0x12($s4)
    ctx->pc = 0x253cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x253cfc: 0x10000731  b           . + 4 + (0x731 << 2)
    ctx->pc = 0x253CFCu;
    {
        const bool branch_taken_0x253cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CFCu;
        // 0x253d00: 0xa2830013  sb          $v1, 0x13($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cfc) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x253D04u;
    // 0x253d04: 0x0  nop
    ctx->pc = 0x253d04u;
    // NOP
label_253d08:
    // 0x253d08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x253d08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253d0c:
    // 0x253d0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253D0Cu;
    {
        const bool branch_taken_0x253d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D0Cu;
        // 0x253d10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d0c) {
            ctx->pc = 0x253D1Cu;
            goto label_253d1c;
        }
    }
    ctx->pc = 0x253D14u;
    // 0x253d14: 0x8c52001c  lw          $s2, 0x1C($v0)
    ctx->pc = 0x253d14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x253d18: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x253d18u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_253d1c:
    // 0x253d1c: 0x12a0ffdb  beqz        $s5, . + 4 + (-0x25 << 2)
    ctx->pc = 0x253D1Cu;
    {
        const bool branch_taken_0x253d1c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d1c) {
            ctx->pc = 0x253C8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253c8c;
        }
    }
    ctx->pc = 0x253D24u;
    // 0x253d24: 0x86a20018  lh          $v0, 0x18($s5)
    ctx->pc = 0x253d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x253d28: 0x10400765  beqz        $v0, . + 4 + (0x765 << 2)
    ctx->pc = 0x253D28u;
    {
        const bool branch_taken_0x253d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D28u;
        // 0x253d2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d28) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x253D30u;
    // 0x253d30: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x253D30u;
    {
        const bool branch_taken_0x253d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D30u;
        // 0x253d34: 0x8fa70068  lw          $a3, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d30) {
            ctx->pc = 0x253D70u;
            goto label_253d70;
        }
    }
    ctx->pc = 0x253D38u;
    // 0x253d38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x253d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d3c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x253d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x253d40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x253d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x253d44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x253d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d48: 0xc092c84  jal         func_24B210
    ctx->pc = 0x253D48u;
    SET_GPR_U32(ctx, 31, 0x253D50u);
    ctx->pc = 0x253D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D48u;
    // 0x253d4c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B210u, 0x253D48u, 0x253D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D50u;
label_253d50:
    // 0x253d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253D50u;
    {
        const bool branch_taken_0x253d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d50) {
            ctx->pc = 0x253D70u;
            goto label_253d70;
        }
    }
    ctx->pc = 0x253D58u;
    // 0x253d58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x253d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x253d5c: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x253d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x253d60: 0xdc6200f8  ld          $v0, 0xF8($v1)
    ctx->pc = 0x253d60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x253d64: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x253d64u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x253d68: 0x10000755  b           . + 4 + (0x755 << 2)
    ctx->pc = 0x253D68u;
    {
        const bool branch_taken_0x253d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D68u;
        // 0x253d6c: 0xfc6200f8  sd          $v0, 0xF8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d68) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x253D70u;
label_253d70:
    // 0x253d70: 0x8a840007  lwl         $a0, 0x7($s4)
    ctx->pc = 0x253d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x253d74: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x253D74u;
    SET_GPR_U32(ctx, 31, 0x253D7Cu);
    ctx->pc = 0x253D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D74u;
    // 0x253d78: 0x9a840004  lwr         $a0, 0x4($s4) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x253D74u, 0x253D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D7Cu;
label_253d7c:
    // 0x253d7c: 0xaa820007  swl         $v0, 0x7($s4)
    ctx->pc = 0x253d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253d80: 0xba820004  swr         $v0, 0x4($s4)
    ctx->pc = 0x253d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253d84: 0x8a84000b  lwl         $a0, 0xB($s4)
    ctx->pc = 0x253d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x253d88: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x253D88u;
    SET_GPR_U32(ctx, 31, 0x253D90u);
    ctx->pc = 0x253D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D88u;
    // 0x253d8c: 0x9a840008  lwr         $a0, 0x8($s4) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x253D88u, 0x253D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D90u;
label_253d90:
    // 0x253d90: 0xaa82000b  swl         $v0, 0xB($s4)
    ctx->pc = 0x253d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253d94: 0xba820008  swr         $v0, 0x8($s4)
    ctx->pc = 0x253d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253d98: 0x9284000f  lbu         $a0, 0xF($s4)
    ctx->pc = 0x253d98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
    // 0x253d9c: 0x9282000e  lbu         $v0, 0xE($s4)
    ctx->pc = 0x253d9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x253da0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x253da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x253da4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x253da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x253da8: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x253DA8u;
    SET_GPR_U32(ctx, 31, 0x253DB0u);
    ctx->pc = 0x253DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DA8u;
    // 0x253dac: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x253DA8u, 0x253DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DB0u;
label_253db0:
    // 0x253db0: 0x92840013  lbu         $a0, 0x13($s4)
    ctx->pc = 0x253db0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x253db4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x253db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x253db8: 0x92850012  lbu         $a1, 0x12($s4)
    ctx->pc = 0x253db8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x253dbc: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x253dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x253dc0: 0xa283000f  sb          $v1, 0xF($s4)
    ctx->pc = 0x253dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x253dc4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x253dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x253dc8: 0xa282000e  sb          $v0, 0xE($s4)
    ctx->pc = 0x253dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x253dcc: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x253DCCu;
    SET_GPR_U32(ctx, 31, 0x253DD4u);
    ctx->pc = 0x253DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DCCu;
    // 0x253dd0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x253DCCu, 0x253DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DD4u;
label_253dd4:
    // 0x253dd4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x253dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x253dd8: 0xa2820012  sb          $v0, 0x12($s4)
    ctx->pc = 0x253dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x253ddc: 0xa2830013  sb          $v1, 0x13($s4)
    ctx->pc = 0x253ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x253de0: 0x32c50002  andi        $a1, $s6, 0x2
    ctx->pc = 0x253de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x253de4: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x253DE4u;
    {
        const bool branch_taken_0x253de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x253DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DE4u;
        // 0x253de8: 0xafa50090  sw          $a1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253de4) {
            ctx->pc = 0x253E10u;
            goto label_253e10;
        }
    }
    ctx->pc = 0x253DECu;
    // 0x253dec: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x253decu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
    // 0x253df0: 0x9283000e  lbu         $v1, 0xE($s4)
    ctx->pc = 0x253df0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x253df4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x253df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x253df8: 0x92a400b4  lbu         $a0, 0xB4($s5)
    ctx->pc = 0x253df8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x253dfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x253dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x253e00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x253e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x253e04: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x253e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x253e08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x253E08u;
    {
        const bool branch_taken_0x253e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E08u;
        // 0x253e0c: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e08) {
            ctx->pc = 0x253E20u;
            goto label_253e20;
        }
    }
    ctx->pc = 0x253E10u;
label_253e10:
    // 0x253e10: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x253e10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
    // 0x253e14: 0x9283000e  lbu         $v1, 0xE($s4)
    ctx->pc = 0x253e14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x253e18: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x253e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x253e1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x253e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_253e20:
    // 0x253e20: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x253e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
    // 0x253e24: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x253e24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x253e28: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x253e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x253e2c: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x253E2Cu;
    {
        const bool branch_taken_0x253e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E2Cu;
        // 0x253e30: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e2c) {
            ctx->pc = 0x2541D0u;
            goto label_2541d0;
        }
    }
    ctx->pc = 0x253E34u;
    // 0x253e34: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x253e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x253e38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x253e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e3c: 0xc048c96  jal         func_123258
    ctx->pc = 0x253E3Cu;
    SET_GPR_U32(ctx, 31, 0x253E44u);
    ctx->pc = 0x253E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E3Cu;
    // 0x253e40: 0xafa60094  sw          $a2, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x253E3Cu, 0x253E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E44u;
label_253e44:
    // 0x253e44: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x253e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x253e48: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x253e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x253e4c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x253e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x253e50: 0xc048c96  jal         func_123258
    ctx->pc = 0x253E50u;
    SET_GPR_U32(ctx, 31, 0x253E58u);
    ctx->pc = 0x253E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E50u;
    // 0x253e54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x253E50u, 0x253E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E58u;
label_253e58:
    // 0x253e58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x253e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253e5c: 0x106006c1  beqz        $v1, . + 4 + (0x6C1 << 2)
    ctx->pc = 0x253E5Cu;
    {
        const bool branch_taken_0x253e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E5Cu;
        // 0x253e60: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e5c) {
            ctx->pc = 0x255964u;
            goto label_255964;
        }
    }
    ctx->pc = 0x253E64u;
    // 0x253e64: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x253e64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x253e68: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x253e68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x253e6c: 0x8bc5000f  lwl         $a1, 0xF($fp)
    ctx->pc = 0x253e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x253e70: 0x9bc5000c  lwr         $a1, 0xC($fp)
    ctx->pc = 0x253e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x253e74: 0xaba50027  swl         $a1, 0x27($sp)
    ctx->pc = 0x253e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253e78: 0xbba50024  swr         $a1, 0x24($sp)
    ctx->pc = 0x253e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253e7c: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x253e7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x253e80: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x253e80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x253e84: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x253e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x253e88: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x253e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x253e8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x253e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x253e90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x253e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253e94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x253e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x253e98: 0xa3a40041  sb          $a0, 0x41($sp)
    ctx->pc = 0x253e98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 4));
    // 0x253e9c: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x253e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x253ea0: 0x8bc50013  lwl         $a1, 0x13($fp)
    ctx->pc = 0x253ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x253ea4: 0x9bc50010  lwr         $a1, 0x10($fp)
    ctx->pc = 0x253ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x253ea8: 0xaba50047  swl         $a1, 0x47($sp)
    ctx->pc = 0x253ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253eac: 0xbba50044  swr         $a1, 0x44($sp)
    ctx->pc = 0x253eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253eb0: 0x92820003  lbu         $v0, 0x3($s4)
    ctx->pc = 0x253eb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x253eb4: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x253eb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x253eb8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x253eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x253ebc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x253ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x253ec0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x253ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x253ec4: 0xa7a20042  sh          $v0, 0x42($sp)
    ctx->pc = 0x253ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x253ec8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x253ec8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x253ecc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x253eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x253ed0: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x253ED0u;
    {
        const bool branch_taken_0x253ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253ED0u;
        // 0x253ed4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ed0) {
            ctx->pc = 0x254064u;
            goto label_254064;
        }
    }
    ctx->pc = 0x253ED8u;
    // 0x253ed8: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x253ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x253edc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x253ee0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x253ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253ee4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x253EE4u;
    {
        const bool branch_taken_0x253ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253ee4) {
            ctx->pc = 0x253F44u;
            goto label_253f44;
        }
    }
    ctx->pc = 0x253EECu;
    // 0x253eec: 0x96e20012  lhu         $v0, 0x12($s7)
    ctx->pc = 0x253eecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x253ef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253ef4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x253EF4u;
    {
        const bool branch_taken_0x253ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF4u;
        // 0x253ef8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ef4) {
            ctx->pc = 0x253F44u;
            goto label_253f44;
        }
    }
    ctx->pc = 0x253EFCu;
    // 0x253efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f00: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x253f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x253f04: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x253F04u;
    SET_GPR_U32(ctx, 31, 0x253F0Cu);
    ctx->pc = 0x253F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F04u;
    // 0x253f08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x253F04u, 0x253F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F0Cu;
label_253f0c:
    // 0x253f0c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x253F0Cu;
    {
        const bool branch_taken_0x253f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F0Cu;
        // 0x253f10: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f0c) {
            ctx->pc = 0x25405Cu;
            goto label_25405c;
        }
    }
    ctx->pc = 0x253F14u;
    // 0x253f14: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x253F14u;
    {
        const bool branch_taken_0x253f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F14u;
        // 0x253f18: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f14) {
            ctx->pc = 0x253FA8u;
            goto label_253fa8;
        }
    }
    ctx->pc = 0x253F1Cu;
label_253f1c:
    // 0x253f1c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x253f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x253f20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x253f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253f24: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x253f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x253f28: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x253f28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x253f2c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x253f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x253f30: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x253f30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x253f34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x253f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x253f38: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x253f38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x253f3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x253F3Cu;
    {
        const bool branch_taken_0x253f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F3Cu;
        // 0x253f40: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f3c) {
            ctx->pc = 0x253F80u;
            goto label_253f80;
        }
    }
    ctx->pc = 0x253F44u;
label_253f44:
    // 0x253f44: 0xc08c682  jal         func_231A08
    ctx->pc = 0x253F44u;
    SET_GPR_U32(ctx, 31, 0x253F4Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x253F44u, 0x253F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F4Cu;
label_253f4c:
    // 0x253f4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f50: 0xc098552  jal         func_261548
    ctx->pc = 0x253F50u;
    SET_GPR_U32(ctx, 31, 0x253F58u);
    ctx->pc = 0x253F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F50u;
    // 0x253f54: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x253F50u, 0x253F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F58u;
label_253f58:
    // 0x253f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f5c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x253F5Cu;
    SET_GPR_U32(ctx, 31, 0x253F64u);
    ctx->pc = 0x253F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F5Cu;
    // 0x253f60: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x253F5Cu, 0x253F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F64u;
label_253f64:
    // 0x253f64: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x253f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x253f68: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x253F68u;
    {
        const bool branch_taken_0x253f68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x253F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F68u;
        // 0x253f6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f68) {
            ctx->pc = 0x253F1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253f1c;
        }
    }
    ctx->pc = 0x253F70u;
    // 0x253f70: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x253F70u;
    SET_GPR_U32(ctx, 31, 0x253F78u);
    ctx->pc = 0x253F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F70u;
    // 0x253f74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x253F70u, 0x253F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F78u;
label_253f78:
    // 0x253f78: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x253f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x253f7c: 0x0  nop
    ctx->pc = 0x253f7cu;
    // NOP
label_253f80:
    // 0x253f80: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x253f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x253f84: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x253F84u;
    {
        const bool branch_taken_0x253f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F84u;
        // 0x253f88: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f84) {
            ctx->pc = 0x25405Cu;
            goto label_25405c;
        }
    }
    ctx->pc = 0x253F8Cu;
    // 0x253f8c: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x253f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x253f90: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x253f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x253f94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x253f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f9c: 0xc08ac18  jal         func_22B060
    ctx->pc = 0x253F9Cu;
    SET_GPR_U32(ctx, 31, 0x253FA4u);
    ctx->pc = 0x253FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F9Cu;
    // 0x253fa0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B060u, 0x253F9Cu, 0x253FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FA4u;
label_253fa4:
    // 0x253fa4: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x253fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_253fa8:
    // 0x253fa8: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x253fa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x253fac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253fb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253FB0u;
    {
        const bool branch_taken_0x253fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FB0u;
        // 0x253fb4: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fb0) {
            ctx->pc = 0x253FE8u;
            goto label_253fe8;
        }
    }
    ctx->pc = 0x253FB8u;
    // 0x253fb8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x253fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x253fbc: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x253fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x253fc0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x253fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x253fc4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x253fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x253fc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x253fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x253fcc: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x253fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x253fd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x253fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253fd4: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x253fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x253fd8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253FD8u;
    {
        const bool branch_taken_0x253fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FD8u;
        // 0x253fdc: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fd8) {
            ctx->pc = 0x254010u;
            goto label_254010;
        }
    }
    ctx->pc = 0x253FE0u;
    // 0x253fe0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x253FE0u;
    {
        const bool branch_taken_0x253fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FE0u;
        // 0x253fe4: 0x24c20014  addiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fe0) {
            ctx->pc = 0x254024u;
            goto label_254024;
        }
    }
    ctx->pc = 0x253FE8u;
label_253fe8:
    // 0x253fe8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x253fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x253fec: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x253fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x253ff0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x253ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x253ff4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x253ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x253ff8: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x253ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x253ffc: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x253ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x254000: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x254000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254004: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x254004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x254008: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254008u;
    {
        const bool branch_taken_0x254008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254008u;
        // 0x25400c: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254008) {
            ctx->pc = 0x254020u;
            goto label_254020;
        }
    }
    ctx->pc = 0x254010u;
label_254010:
    // 0x254010: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x254010u;
    SET_GPR_U32(ctx, 31, 0x254018u);
    ctx->pc = 0x254014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254010u;
    // 0x254014: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x254010u, 0x254018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254018u;
label_254018:
    // 0x254018: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254018u;
    {
        const bool branch_taken_0x254018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254018u;
        // 0x25401c: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254018) {
            ctx->pc = 0x254038u;
            goto label_254038;
        }
    }
    ctx->pc = 0x254020u;
label_254020:
    // 0x254020: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x254020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_254024:
    // 0x254024: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x254024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x254028: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x254028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25402c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x25402cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x254030: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x254030u;
    SET_GPR_U32(ctx, 31, 0x254038u);
    ctx->pc = 0x254034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254030u;
    // 0x254034: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x254030u, 0x254038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254038u;
label_254038:
    // 0x254038: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x254038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25403c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25403Cu;
    {
        const bool branch_taken_0x25403c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x254040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25403Cu;
        // 0x254040: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25403c) {
            ctx->pc = 0x25405Cu;
            goto label_25405c;
        }
    }
    ctx->pc = 0x254044u;
    // 0x254044: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x254044u;
    {
        const bool branch_taken_0x254044 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x254048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254044u;
        // 0x254048: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254044) {
            ctx->pc = 0x25405Cu;
            goto label_25405c;
        }
    }
    ctx->pc = 0x25404Cu;
    // 0x25404c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x25404cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254050: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x254050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x254054: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x254054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x254058: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x254058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_25405c:
    // 0x25405c: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x25405cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x254060: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x254060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_254064:
    // 0x254064: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x254064u;
    {
        const bool branch_taken_0x254064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254064u;
        // 0x254068: 0x32c60016  andi        $a2, $s6, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254064) {
            ctx->pc = 0x2541D0u;
            goto label_2541d0;
        }
    }
    ctx->pc = 0x25406Cu;
    // 0x25406c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x25406cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254070: 0x10d0002a  beq         $a2, $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x254070u;
    {
        const bool branch_taken_0x254070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x254074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254070u;
        // 0x254074: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254070) {
            ctx->pc = 0x25411Cu;
            goto label_25411c;
        }
    }
    ctx->pc = 0x254078u;
    // 0x254078: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x254078u;
    {
        const bool branch_taken_0x254078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254078u;
        // 0x25407c: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254078) {
            ctx->pc = 0x254094u;
            goto label_254094;
        }
    }
    ctx->pc = 0x254080u;
    // 0x254080: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x254080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254084: 0xc095cc0  jal         func_257300
    ctx->pc = 0x254084u;
    SET_GPR_U32(ctx, 31, 0x25408Cu);
    ctx->pc = 0x254088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254084u;
    // 0x254088: 0x8fa50098  lw          $a1, 0x98($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257300u, 0x254084u, 0x25408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25408Cu;
label_25408c:
    // 0x25408c: 0x1000068c  b           . + 4 + (0x68C << 2)
    ctx->pc = 0x25408Cu;
    {
        const bool branch_taken_0x25408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25408c) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x254094u;
label_254094:
    // 0x254094: 0x32c30012  andi        $v1, $s6, 0x12
    ctx->pc = 0x254094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)18);
    // 0x254098: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x254098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x25409c: 0x10620632  beq         $v1, $v0, . + 4 + (0x632 << 2)
    ctx->pc = 0x25409Cu;
    {
        const bool branch_taken_0x25409c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2540A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25409Cu;
        // 0x2540a0: 0x32c20010  andi        $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25409c) {
            ctx->pc = 0x255968u;
            goto label_255968;
        }
    }
    ctx->pc = 0x2540A4u;
    // 0x2540a4: 0x10400630  beqz        $v0, . + 4 + (0x630 << 2)
    ctx->pc = 0x2540A4u;
    {
        const bool branch_taken_0x2540a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540A4u;
        // 0x2540a8: 0x8fa80068  lw          $t0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540a4) {
            ctx->pc = 0x255968u;
            goto label_255968;
        }
    }
    ctx->pc = 0x2540ACu;
    // 0x2540ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2540acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540b0: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x2540b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2540b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2540b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540b8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x2540b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2540bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2540bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540c0: 0xc095b4c  jal         func_256D30
    ctx->pc = 0x2540C0u;
    SET_GPR_U32(ctx, 31, 0x2540C8u);
    ctx->pc = 0x2540C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540C0u;
    // 0x2540c4: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256D30u, 0x2540C0u, 0x2540C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540C8u;
label_2540c8:
    // 0x2540c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2540c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540cc: 0x12400627  beqz        $s2, . + 4 + (0x627 << 2)
    ctx->pc = 0x2540CCu;
    {
        const bool branch_taken_0x2540cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540CCu;
        // 0x2540d0: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540cc) {
            ctx->pc = 0x25596Cu;
            goto label_25596c;
        }
    }
    ctx->pc = 0x2540D4u;
    // 0x2540d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2540d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2540d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2540d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2540dc: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2540DCu;
    {
        const bool branch_taken_0x2540dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2540dc) {
            ctx->pc = 0x2540E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540DCu;
            // 0x2540e0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2540ECu;
            goto label_2540ec;
        }
    }
    ctx->pc = 0x2540E4u;
    // 0x2540e4: 0x10000676  b           . + 4 + (0x676 << 2)
    ctx->pc = 0x2540E4u;
    {
        const bool branch_taken_0x2540e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540E4u;
        // 0x2540e8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540e4) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2540ECu;
label_2540ec:
    // 0x2540ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2540ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2540f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2540f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2540f4: 0x14900003  bne         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2540F4u;
    {
        const bool branch_taken_0x2540f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x2540F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540F4u;
        // 0x2540f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540f4) {
            ctx->pc = 0x254104u;
            goto label_254104;
        }
    }
    ctx->pc = 0x2540FCu;
    // 0x2540fc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2540fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x254100: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x254100u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_254104:
    // 0x254104: 0x12a00618  beqz        $s5, . + 4 + (0x618 << 2)
    ctx->pc = 0x254104u;
    {
        const bool branch_taken_0x254104 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x254108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254104u;
        // 0x254108: 0xdfa30080  ld          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254104) {
            ctx->pc = 0x255968u;
            goto label_255968;
        }
    }
    ctx->pc = 0x25410Cu;
    // 0x25410c: 0x92a200b4  lbu         $v0, 0xB4($s5)
    ctx->pc = 0x25410cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x254110: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x254110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x254114: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x254114u;
    {
        const bool branch_taken_0x254114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254114u;
        // 0x254118: 0xffa30080  sd          $v1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254114) {
            ctx->pc = 0x2541D0u;
            goto label_2541d0;
        }
    }
    ctx->pc = 0x25411Cu;
label_25411c:
    // 0x25411c: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x25411cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x254120: 0x92820003  lbu         $v0, 0x3($s4)
    ctx->pc = 0x254120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x254124: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x254124u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x254128: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x254128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x25412c: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x25412cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x254130: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x254130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x254134: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x254134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x254138: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x254138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x25413c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25413cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254140: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254144: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x254144u;
    {
        const bool branch_taken_0x254144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x254144) {
            ctx->pc = 0x254148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254144u;
            // 0x254148: 0x86430032  lh          $v1, 0x32($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254190u;
            goto label_254190;
        }
    }
    ctx->pc = 0x25414Cu;
    // 0x25414c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x25414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254150: 0x54860007  bnel        $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x254150u;
    {
        const bool branch_taken_0x254150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x254150) {
            ctx->pc = 0x254154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254150u;
            // 0x254154: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254170u;
            goto label_254170;
        }
    }
    ctx->pc = 0x254158u;
    // 0x254158: 0x8bc3000f  lwl         $v1, 0xF($fp)
    ctx->pc = 0x254158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x25415c: 0x9bc3000c  lwr         $v1, 0xC($fp)
    ctx->pc = 0x25415cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254160: 0x8bc20013  lwl         $v0, 0x13($fp)
    ctx->pc = 0x254160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x254164: 0x9bc20010  lwr         $v0, 0x10($fp)
    ctx->pc = 0x254164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x254168: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x254168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x25416c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x25416cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_254170:
    // 0x254170: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x254170u;
    {
        const bool branch_taken_0x254170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254170u;
        // 0x254174: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254170) {
            ctx->pc = 0x25418Cu;
            goto label_25418c;
        }
    }
    ctx->pc = 0x254178u;
    // 0x254178: 0x24a31308  addiu       $v1, $a1, 0x1308
    ctx->pc = 0x254178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x25417c: 0xdc6201b8  ld          $v0, 0x1B8($v1)
    ctx->pc = 0x25417cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x254180: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x254180u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x254184: 0x1000064e  b           . + 4 + (0x64E << 2)
    ctx->pc = 0x254184u;
    {
        const bool branch_taken_0x254184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254184u;
        // 0x254188: 0xfc6201b8  sd          $v0, 0x1B8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 440), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254184) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x25418Cu;
label_25418c:
    // 0x25418c: 0x86430032  lh          $v1, 0x32($s2)
    ctx->pc = 0x25418cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_254190:
    // 0x254190: 0x86420034  lh          $v0, 0x34($s2)
    ctx->pc = 0x254190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x254194: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x254194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254198: 0x14400649  bnez        $v0, . + 4 + (0x649 << 2)
    ctx->pc = 0x254198u;
    {
        const bool branch_taken_0x254198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254198u;
        // 0x25419c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254198) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2541A0u;
    // 0x2541a0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x2541a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2541a4: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x2541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2541a8: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2541a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541ac: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x2541acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2541b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2541b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541b4: 0x8faa006c  lw          $t2, 0x6C($sp)
    ctx->pc = 0x2541b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2541b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2541b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541bc: 0x8fab0070  lw          $t3, 0x70($sp)
    ctx->pc = 0x2541bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2541c0: 0xc095d9e  jal         func_257678
    ctx->pc = 0x2541C0u;
    SET_GPR_U32(ctx, 31, 0x2541C8u);
    ctx->pc = 0x2541C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541C0u;
    // 0x2541c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257678u, 0x2541C0u, 0x2541C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541C8u;
label_2541c8:
    // 0x2541c8: 0x1000063d  b           . + 4 + (0x63D << 2)
    ctx->pc = 0x2541C8u;
    {
        const bool branch_taken_0x2541c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2541CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541C8u;
        // 0x2541cc: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541c8) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2541D0u;
label_2541d0:
    // 0x2541d0: 0x86a20018  lh          $v0, 0x18($s5)
    ctx->pc = 0x2541d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2541d4: 0xa6a00098  sh          $zero, 0x98($s5)
    ctx->pc = 0x2541d4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 152), (uint16_t)GPR_U32(ctx, 0));
    // 0x2541d8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2541d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2541dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2541DCu;
    {
        const bool branch_taken_0x2541dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2541E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541DCu;
        // 0x2541e0: 0x96ab0018  lhu         $t3, 0x18($s5) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541dc) {
            ctx->pc = 0x2541FCu;
            goto label_2541fc;
        }
    }
    ctx->pc = 0x2541E4u;
    // 0x2541e4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2541e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2541e8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2541e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2541ec: 0x8c82f990  lw          $v0, -0x670($a0)
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965648)));
    // 0x2541f0: 0x8ca31530  lw          $v1, 0x1530($a1)
    ctx->pc = 0x2541f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5424)));
    // 0x2541f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2541f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2541f8: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x2541f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_2541fc:
    // 0x2541fc: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x2541fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x254200: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x254200u;
    {
        const bool branch_taken_0x254200 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x254204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254200u;
        // 0x254204: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254200) {
            ctx->pc = 0x254220u;
            goto label_254220;
        }
    }
    ctx->pc = 0x254208u;
    // 0x254208: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25420c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x25420cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x254210: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x254210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254214: 0xc0956c6  jal         func_255B18
    ctx->pc = 0x254214u;
    SET_GPR_U32(ctx, 31, 0x25421Cu);
    ctx->pc = 0x254218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254214u;
    // 0x254218: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255B18u, 0x254214u, 0x25421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25421Cu;
label_25421c:
    // 0x25421c: 0x96ab0018  lhu         $t3, 0x18($s5)
    ctx->pc = 0x25421cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
label_254220:
    // 0x254220: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x254220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x254224: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x254224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x254228: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x254228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25422c: 0x544300ef  bnel        $v0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x25422Cu;
    {
        const bool branch_taken_0x25422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25422c) {
            ctx->pc = 0x254230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25422Cu;
            // 0x254230: 0x8eaa0070  lw          $t2, 0x70($s5) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545ECu;
            goto label_2545ec;
        }
    }
    ctx->pc = 0x254234u;
    // 0x254234: 0x32c30037  andi        $v1, $s6, 0x37
    ctx->pc = 0x254234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)55);
    // 0x254238: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x254238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25423c: 0x546200eb  bnel        $v1, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x25423Cu;
    {
        const bool branch_taken_0x25423c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25423c) {
            ctx->pc = 0x254240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25423Cu;
            // 0x254240: 0x8eaa0070  lw          $t2, 0x70($s5) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545ECu;
            goto label_2545ec;
        }
    }
    ctx->pc = 0x254244u;
    // 0x254244: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x254244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254248: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254248u;
    {
        const bool branch_taken_0x254248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254248u;
        // 0x25424c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254248) {
            ctx->pc = 0x254260u;
            goto label_254260;
        }
    }
    ctx->pc = 0x254250u;
    // 0x254250: 0x8ea300b8  lw          $v1, 0xB8($s5)
    ctx->pc = 0x254250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x254254: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254258: 0x44200e4  bltzl       $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x254258u;
    {
        const bool branch_taken_0x254258 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x254258) {
            ctx->pc = 0x25425Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254258u;
            // 0x25425c: 0x8eaa0070  lw          $t2, 0x70($s5) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545ECu;
            goto label_2545ec;
        }
    }
    ctx->pc = 0x254260u;
label_254260:
    // 0x254260: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x254260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x254264: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x254264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x254268: 0x8eaa0070  lw          $t2, 0x70($s5)
    ctx->pc = 0x254268u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x25426c: 0x544a00e0  bnel        $v0, $t2, . + 4 + (0xE0 << 2)
    ctx->pc = 0x25426Cu;
    {
        const bool branch_taken_0x25426c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x25426c) {
            ctx->pc = 0x254270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25426Cu;
            // 0x254270: 0xde480050  ld          $t0, 0x50($s2) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x254274u;
    // 0x254274: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x254274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254278: 0x504000dd  beql        $v0, $zero, . + 4 + (0xDD << 2)
    ctx->pc = 0x254278u;
    {
        const bool branch_taken_0x254278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254278) {
            ctx->pc = 0x25427Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254278u;
            // 0x25427c: 0xde480050  ld          $t0, 0x50($s2) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x254280u;
    // 0x254280: 0xdea60058  ld          $a2, 0x58($s5)
    ctx->pc = 0x254280u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x254284: 0x544600da  bnel        $v0, $a2, . + 4 + (0xDA << 2)
    ctx->pc = 0x254284u;
    {
        const bool branch_taken_0x254284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x254284) {
            ctx->pc = 0x254288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254284u;
            // 0x254288: 0xde480050  ld          $t0, 0x50($s2) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x25428Cu;
    // 0x25428c: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x25428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x254290: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x254290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x254294: 0x144400d5  bne         $v0, $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x254294u;
    {
        const bool branch_taken_0x254294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x254298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254294u;
        // 0x254298: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254294) {
            ctx->pc = 0x2545ECu;
            goto label_2545ec;
        }
    }
    ctx->pc = 0x25429Cu;
    // 0x25429c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x25429Cu;
    {
        const bool branch_taken_0x25429c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25429Cu;
        // 0x2542a0: 0x8fa90068  lw          $t1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25429c) {
            ctx->pc = 0x2542D0u;
            goto label_2542d0;
        }
    }
    ctx->pc = 0x2542A4u;
    // 0x2542a4: 0x8ea300c0  lw          $v1, 0xC0($s5)
    ctx->pc = 0x2542a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x2542a8: 0x1431023  subu        $v0, $t2, $v1
    ctx->pc = 0x2542a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2542ac: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2542ACu;
    {
        const bool branch_taken_0x2542ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2542B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542ACu;
        // 0x2542b0: 0x1491021  addu        $v0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542ac) {
            ctx->pc = 0x2542D0u;
            goto label_2542d0;
        }
    }
    ctx->pc = 0x2542B4u;
    // 0x2542b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2542b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2542b8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2542B8u;
    {
        const bool branch_taken_0x2542b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2542BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542B8u;
        // 0x2542bc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542b8) {
            ctx->pc = 0x2542D0u;
            goto label_2542d0;
        }
    }
    ctx->pc = 0x2542C0u;
    // 0x2542c0: 0x8c431528  lw          $v1, 0x1528($v0)
    ctx->pc = 0x2542c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    // 0x2542c4: 0xaea300bc  sw          $v1, 0xBC($s5)
    ctx->pc = 0x2542c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 3));
    // 0x2542c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2542c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2542cc: 0xaea200b8  sw          $v0, 0xB8($s5)
    ctx->pc = 0x2542ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 2));
label_2542d0:
    // 0x2542d0: 0x15200062  bnez        $t1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2542D0u;
    {
        const bool branch_taken_0x2542d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2542D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542D0u;
        // 0x2542d4: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542d0) {
            ctx->pc = 0x25445Cu;
            goto label_25445c;
        }
    }
    ctx->pc = 0x2542D8u;
    // 0x2542d8: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x2542d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2542dc: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x2542dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2542e0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2542e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2542e4: 0x184000c1  blez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2542E4u;
    {
        const bool branch_taken_0x2542e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2542E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542E4u;
        // 0x2542e8: 0x671023  subu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542e4) {
            ctx->pc = 0x2545ECu;
            goto label_2545ec;
        }
    }
    ctx->pc = 0x2542ECu;
    // 0x2542ec: 0x5c4000c0  bgtzl       $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2542ECu;
    {
        const bool branch_taken_0x2542ec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2542ec) {
            ctx->pc = 0x2542F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542ECu;
            // 0x2542f0: 0xde480050  ld          $t0, 0x50($s2) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x2542F4u;
    // 0x2542f4: 0xdea20088  ld          $v0, 0x88($s5)
    ctx->pc = 0x2542f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x2542f8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2542f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2542fc: 0x544000bc  bnel        $v0, $zero, . + 4 + (0xBC << 2)
    ctx->pc = 0x2542FCu;
    {
        const bool branch_taken_0x2542fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2542fc) {
            ctx->pc = 0x254300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542FCu;
            // 0x254300: 0xde480050  ld          $t0, 0x50($s2) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x254304u;
    // 0x254304: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x254304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x254308: 0x86a3001e  lh          $v1, 0x1E($s5)
    ctx->pc = 0x254308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x25430c: 0x8c441210  lw          $a0, 0x1210($v0)
    ctx->pc = 0x25430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x254310: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x254310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x254314: 0x106000b5  beqz        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x254314u;
    {
        const bool branch_taken_0x254314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254314u;
        // 0x254318: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254314) {
            ctx->pc = 0x2545ECu;
            goto label_2545ec;
        }
    }
    ctx->pc = 0x25431Cu;
    // 0x25431c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254320: 0x24621308  addiu       $v0, $v1, 0x1308
    ctx->pc = 0x254320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x254324: 0xdc430198  ld          $v1, 0x198($v0)
    ctx->pc = 0x254324u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x254328: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x254328u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25432c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25432Cu;
    {
        const bool branch_taken_0x25432c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25432Cu;
        // 0x254330: 0xfc430198  sd          $v1, 0x198($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 408), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25432c) {
            ctx->pc = 0x254354u;
            goto label_254354;
        }
    }
    ctx->pc = 0x254334u;
    // 0x254334: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x254334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x254338: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x254338u;
    {
        const bool branch_taken_0x254338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254338u;
        // 0x25433c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254338) {
            ctx->pc = 0x254354u;
            goto label_254354;
        }
    }
    ctx->pc = 0x254340u;
    // 0x254340: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254344: 0x8c451528  lw          $a1, 0x1528($v0)
    ctx->pc = 0x254344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    // 0x254348: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x254348u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25434c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25434Cu;
    {
        const bool branch_taken_0x25434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25434Cu;
        // 0x254350: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25434c) {
            ctx->pc = 0x25437Cu;
            goto label_25437c;
        }
    }
    ctx->pc = 0x254354u;
label_254354:
    // 0x254354: 0x86a5009a  lh          $a1, 0x9A($s5)
    ctx->pc = 0x254354u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 154)));
    // 0x254358: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x254358u;
    {
        const bool branch_taken_0x254358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x254358) {
            ctx->pc = 0x254384u;
            goto label_254384;
        }
    }
    ctx->pc = 0x254360u;
    // 0x254360: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x254360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x254364: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x254364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x254368: 0x8ea2009c  lw          $v0, 0x9C($s5)
    ctx->pc = 0x254368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x25436c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x25436cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x254370: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254370u;
    {
        const bool branch_taken_0x254370 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x254370) {
            ctx->pc = 0x254374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254370u;
            // 0x254374: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254390u;
            goto label_254390;
        }
    }
    ctx->pc = 0x254378u;
    // 0x254378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25437c:
    // 0x25437c: 0xc0957a6  jal         func_255E98
    ctx->pc = 0x25437Cu;
    SET_GPR_U32(ctx, 31, 0x254384u);
    ctx->pc = 0x255E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E98u, 0x25437Cu, 0x254384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254384u;
label_254384:
    // 0x254384: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x254384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x254388: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x254388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x25438c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25438cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_254390:
    // 0x254390: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x254390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x254394: 0x24a41308  addiu       $a0, $a1, 0x1308
    ctx->pc = 0x254394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x254398: 0x8ea50040  lw          $a1, 0x40($s5)
    ctx->pc = 0x254398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x25439c: 0xdc830178  ld          $v1, 0x178($a0)
    ctx->pc = 0x25439cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x2543a0: 0xdc820180  ld          $v0, 0x180($a0)
    ctx->pc = 0x2543a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2543a4: 0xc59823  subu        $s3, $a2, $a1
    ctx->pc = 0x2543a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2543a8: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2543a8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2543ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2543acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543b0: 0x262102d  daddu       $v0, $s3, $v0
    ctx->pc = 0x2543b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2543b4: 0xfc830178  sd          $v1, 0x178($a0)
    ctx->pc = 0x2543b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 376), GPR_U64(ctx, 3));
    // 0x2543b8: 0xfc820180  sd          $v0, 0x180($a0)
    ctx->pc = 0x2543b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 384), GPR_U64(ctx, 2));
    // 0x2543bc: 0xc08c4e8  jal         func_2313A0
    ctx->pc = 0x2543BCu;
    SET_GPR_U32(ctx, 31, 0x2543C4u);
    ctx->pc = 0x2543C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543BCu;
    // 0x2543c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2313A0u, 0x2543BCu, 0x2543C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543C4u;
label_2543c4:
    // 0x2543c4: 0x8a82000b  lwl         $v0, 0xB($s4)
    ctx->pc = 0x2543c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2543c8: 0x9a820008  lwr         $v0, 0x8($s4)
    ctx->pc = 0x2543c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2543cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2543ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543d0: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x2543d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
    // 0x2543d4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2543D4u;
    SET_GPR_U32(ctx, 31, 0x2543DCu);
    ctx->pc = 0x2543D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543D4u;
    // 0x2543d8: 0xaea20060  sw          $v0, 0x60($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2543D4u, 0x2543DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543DCu;
label_2543dc:
    // 0x2543dc: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x2543dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x2543e0: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x2543e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x2543e4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2543E4u;
    {
        const bool branch_taken_0x2543e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2543e4) {
            ctx->pc = 0x2543E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543E4u;
            // 0x2543e8: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2543F4u;
            goto label_2543f4;
        }
    }
    ctx->pc = 0x2543ECu;
    // 0x2543ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2543ECu;
    {
        const bool branch_taken_0x2543ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543ECu;
        // 0x2543f0: 0xaea00008  sw          $zero, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543ec) {
            ctx->pc = 0x254410u;
            goto label_254410;
        }
    }
    ctx->pc = 0x2543F4u;
label_2543f4:
    // 0x2543f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2543F4u;
    {
        const bool branch_taken_0x2543f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2543f4) {
            ctx->pc = 0x2543F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543F4u;
            // 0x2543f8: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254418u;
            goto label_254418;
        }
    }
    ctx->pc = 0x2543FCu;
    // 0x2543fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2543fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x254400: 0x86a4001c  lh          $a0, 0x1C($s5)
    ctx->pc = 0x254400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x254404: 0x8c43f990  lw          $v1, -0x670($v0)
    ctx->pc = 0x254404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965648)));
    // 0x254408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25440c: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x25440cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_254410:
    // 0x254410: 0x964200b0  lhu         $v0, 0xB0($s2)
    ctx->pc = 0x254410u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x254414: 0x0  nop
    ctx->pc = 0x254414u;
    // NOP
label_254418:
    // 0x254418: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x254418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x25441c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25441Cu;
    {
        const bool branch_taken_0x25441c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25441Cu;
        // 0x254420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25441c) {
            ctx->pc = 0x25442Cu;
            goto label_25442c;
        }
    }
    ctx->pc = 0x254424u;
    // 0x254424: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x254424u;
    SET_GPR_U32(ctx, 31, 0x25442Cu);
    ctx->pc = 0x254428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254424u;
    // 0x254428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x254424u, 0x25442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25442Cu;
label_25442c:
    // 0x25442c: 0xde420080  ld          $v0, 0x80($s2)
    ctx->pc = 0x25442cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x254430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254430u;
    {
        const bool branch_taken_0x254430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254430u;
        // 0x254434: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254430) {
            ctx->pc = 0x254444u;
            goto label_254444;
        }
    }
    ctx->pc = 0x254438u;
    // 0x254438: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x254438u;
    SET_GPR_U32(ctx, 31, 0x254440u);
    ctx->pc = 0x25443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254438u;
    // 0x25443c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x254438u, 0x254440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254440u;
label_254440:
    // 0x254440: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x254440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_254444:
    // 0x254444: 0x10c005a8  beqz        $a2, . + 4 + (0x5A8 << 2)
    ctx->pc = 0x254444u;
    {
        const bool branch_taken_0x254444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x254448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254444u;
        // 0x254448: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254444) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x25444Cu;
    // 0x25444c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25444Cu;
    SET_GPR_U32(ctx, 31, 0x254454u);
    ctx->pc = 0x254450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25444Cu;
    // 0x254450: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25444Cu, 0x254454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254454u;
label_254454:
    // 0x254454: 0x100005a4  b           . + 4 + (0x5A4 << 2)
    ctx->pc = 0x254454u;
    {
        const bool branch_taken_0x254454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254454u;
        // 0x254458: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254454) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x25445Cu;
label_25445c:
    // 0x25445c: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x25445cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254460: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x254460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254464: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x254464u;
    {
        const bool branch_taken_0x254464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x254468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254464u;
        // 0x254468: 0xde480050  ld          $t0, 0x50($s2) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254464) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x25446Cu;
    // 0x25446c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x254470: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x254470u;
    {
        const bool branch_taken_0x254470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254470) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x254478u;
    // 0x254478: 0xde470048  ld          $a3, 0x48($s2)
    ctx->pc = 0x254478u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x25447c: 0xde460060  ld          $a2, 0x60($s2)
    ctx->pc = 0x25447cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x254480: 0xde450058  ld          $a1, 0x58($s2)
    ctx->pc = 0x254480u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x254484: 0x107102f  dsubu       $v0, $t0, $a3
    ctx->pc = 0x254484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 7));
    // 0x254488: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x254488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25448c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25448cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x254490: 0xc5182f  dsubu       $v1, $a2, $a1
    ctx->pc = 0x254490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
    // 0x254494: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x254494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x254498: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x254498u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x25449c: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x25449cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2544a0: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x2544a0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2544a4: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x2544a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2544a8: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2544A8u;
    {
        const bool branch_taken_0x2544a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2544ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544A8u;
        // 0x2544ac: 0xc5102f  dsubu       $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544a8) {
            ctx->pc = 0x254600u;
            goto label_254600;
        }
    }
    ctx->pc = 0x2544B0u;
    // 0x2544b0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2544b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2544b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2544b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2544b8: 0x24441308  addiu       $a0, $v0, 0x1308
    ctx->pc = 0x2544b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x2544bc: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x2544bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x2544c0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2544c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2544c4: 0xfc8201a0  sd          $v0, 0x1A0($a0)
    ctx->pc = 0x2544c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 416), GPR_U64(ctx, 2));
    // 0x2544c8: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x2544c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2544cc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2544ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2544d0: 0xaea30070  sw          $v1, 0x70($s5)
    ctx->pc = 0x2544d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 3));
    // 0x2544d4: 0xdc8200e8  ld          $v0, 0xE8($a0)
    ctx->pc = 0x2544d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x2544d8: 0xdc8300f0  ld          $v1, 0xF0($a0)
    ctx->pc = 0x2544d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2544dc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2544dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2544e0: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x2544e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2544e4: 0xfc8200e8  sd          $v0, 0xE8($a0)
    ctx->pc = 0x2544e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 232), GPR_U64(ctx, 2));
    // 0x2544e8: 0xfc8300f0  sd          $v1, 0xF0($a0)
    ctx->pc = 0x2544e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 240), GPR_U64(ctx, 3));
    // 0x2544ec: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2544ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2544f0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2544f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2544f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2544F4u;
    {
        const bool branch_taken_0x2544f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544F4u;
        // 0x2544f8: 0x8fa30088  lw          $v1, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544f4) {
            ctx->pc = 0x25450Cu;
            goto label_25450c;
        }
    }
    ctx->pc = 0x2544FCu;
    // 0x2544fc: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2544FCu;
    SET_GPR_U32(ctx, 31, 0x254504u);
    ctx->pc = 0x254500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2544FCu;
    // 0x254500: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2544FCu, 0x254504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254504u;
label_254504:
    // 0x254504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254504u;
    {
        const bool branch_taken_0x254504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254504u;
        // 0x254508: 0x96420078  lhu         $v0, 0x78($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254504) {
            ctx->pc = 0x254528u;
            goto label_254528;
        }
    }
    ctx->pc = 0x25450Cu;
label_25450c:
    // 0x25450c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254510: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x254510u;
    SET_GPR_U32(ctx, 31, 0x254518u);
    ctx->pc = 0x254514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254510u;
    // 0x254514: 0x2632821  addu        $a1, $s3, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x254510u, 0x254518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254518u;
label_254518:
    // 0x254518: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x254518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25451c: 0xc08c2a8  jal         func_230AA0
    ctx->pc = 0x25451Cu;
    SET_GPR_U32(ctx, 31, 0x254524u);
    ctx->pc = 0x254520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25451Cu;
    // 0x254520: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AA0u, 0x25451Cu, 0x254524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254524u;
label_254524:
    // 0x254524: 0x96420078  lhu         $v0, 0x78($s2)
    ctx->pc = 0x254524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
label_254528:
    // 0x254528: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x254528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x25452c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25452Cu;
    {
        const bool branch_taken_0x25452c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25452Cu;
        // 0x254530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25452c) {
            ctx->pc = 0x25453Cu;
            goto label_25453c;
        }
    }
    ctx->pc = 0x254534u;
    // 0x254534: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x254534u;
    SET_GPR_U32(ctx, 31, 0x25453Cu);
    ctx->pc = 0x254538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254534u;
    // 0x254538: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x254534u, 0x25453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25453Cu;
label_25453c:
    // 0x25453c: 0x96a40028  lhu         $a0, 0x28($s5)
    ctx->pc = 0x25453cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x254540: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x254540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x254544: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x254544u;
    {
        const bool branch_taken_0x254544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254544u;
        // 0x254548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254544) {
            ctx->pc = 0x254570u;
            goto label_254570;
        }
    }
    ctx->pc = 0x25454Cu;
    // 0x25454c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x254550: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x254550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
    // 0x254554: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x254554u;
    {
        const bool branch_taken_0x254554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254554u;
        // 0x254558: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254554) {
            ctx->pc = 0x254580u;
            goto label_254580;
        }
    }
    ctx->pc = 0x25455Cu;
    // 0x25455c: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x25455cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x254560: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x254560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x254564: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254564u;
    {
        const bool branch_taken_0x254564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254564u;
        // 0x254568: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254564) {
            ctx->pc = 0x254580u;
            goto label_254580;
        }
    }
    ctx->pc = 0x25456Cu;
    // 0x25456c: 0x0  nop
    ctx->pc = 0x25456cu;
    // NOP
label_254570:
    // 0x254570: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x254570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x254574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254578: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x254578u;
    {
        const bool branch_taken_0x254578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254578u;
        // 0x25457c: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254578) {
            ctx->pc = 0x2545BCu;
            goto label_2545bc;
        }
    }
    ctx->pc = 0x254580u;
label_254580:
    // 0x254580: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x254580u;
    {
        const bool branch_taken_0x254580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254580u;
        // 0x254584: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254580) {
            ctx->pc = 0x2545BCu;
            goto label_2545bc;
        }
    }
    ctx->pc = 0x254588u;
    // 0x254588: 0xa6a20028  sh          $v0, 0x28($s5)
    ctx->pc = 0x254588u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x25458c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25458cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x254590: 0x8c821588  lw          $v0, 0x1588($a0)
    ctx->pc = 0x254590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5512)));
    // 0x254594: 0x24851588  addiu       $a1, $a0, 0x1588
    ctx->pc = 0x254594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5512));
    // 0x254598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254598u;
    {
        const bool branch_taken_0x254598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254598u;
        // 0x25459c: 0xaea20038  sw          $v0, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254598) {
            ctx->pc = 0x2545B0u;
            goto label_2545b0;
        }
    }
    ctx->pc = 0x2545A0u;
    // 0x2545a0: 0x8c831588  lw          $v1, 0x1588($a0)
    ctx->pc = 0x2545a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5512)));
    // 0x2545a4: 0x26a20038  addiu       $v0, $s5, 0x38
    ctx->pc = 0x2545a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    // 0x2545a8: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x2545a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x2545ac: 0x0  nop
    ctx->pc = 0x2545acu;
    // NOP
label_2545b0:
    // 0x2545b0: 0xac951588  sw          $s5, 0x1588($a0)
    ctx->pc = 0x2545b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5512), GPR_U32(ctx, 21));
    // 0x2545b4: 0xaea5003c  sw          $a1, 0x3C($s5)
    ctx->pc = 0x2545b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 5));
    // 0x2545b8: 0x96a40028  lhu         $a0, 0x28($s5)
    ctx->pc = 0x2545b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
label_2545bc:
    // 0x2545bc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2545bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2545c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2545C0u;
    {
        const bool branch_taken_0x2545c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545C0u;
        // 0x2545c4: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545c0) {
            ctx->pc = 0x2545D4u;
            goto label_2545d4;
        }
    }
    ctx->pc = 0x2545C8u;
    // 0x2545c8: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x2545C8u;
    SET_GPR_U32(ctx, 31, 0x2545D0u);
    ctx->pc = 0x2545CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2545C8u;
    // 0x2545cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x2545C8u, 0x2545D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545D0u;
label_2545d0:
    // 0x2545d0: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2545d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2545d4:
    // 0x2545d4: 0x10800544  beqz        $a0, . + 4 + (0x544 << 2)
    ctx->pc = 0x2545D4u;
    {
        const bool branch_taken_0x2545d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545D4u;
        // 0x2545d8: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545d4) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x2545DCu;
    // 0x2545dc: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2545DCu;
    SET_GPR_U32(ctx, 31, 0x2545E4u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2545DCu, 0x2545E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545E4u;
label_2545e4:
    // 0x2545e4: 0x10000540  b           . + 4 + (0x540 << 2)
    ctx->pc = 0x2545E4u;
    {
        const bool branch_taken_0x2545e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545E4u;
        // 0x2545e8: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545e4) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x2545ECu;
label_2545ec:
    // 0x2545ec: 0xde480050  ld          $t0, 0x50($s2)
    ctx->pc = 0x2545ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_2545f0:
    // 0x2545f0: 0xde470048  ld          $a3, 0x48($s2)
    ctx->pc = 0x2545f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2545f4: 0xde460060  ld          $a2, 0x60($s2)
    ctx->pc = 0x2545f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2545f8: 0xde450058  ld          $a1, 0x58($s2)
    ctx->pc = 0x2545f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2545fc: 0xc5102f  dsubu       $v0, $a2, $a1
    ctx->pc = 0x2545fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
label_254600:
    // 0x254600: 0x107182f  dsubu       $v1, $t0, $a3
    ctx->pc = 0x254600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) - GPR_U64(ctx, 7));
    // 0x254604: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x254604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x254608: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x254608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x25460c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254610: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x254610u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x254614: 0x62302a  slt         $a2, $v1, $v0
    ctx->pc = 0x254614u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254618: 0x8ea5007c  lw          $a1, 0x7C($s5)
    ctx->pc = 0x254618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x25461c: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x25461cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x254620: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x254620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254624: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x254624u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254628: 0xaa2823  subu        $a1, $a1, $t2
    ctx->pc = 0x254628u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x25462c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x25462cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x254630: 0xb3400  sll         $a2, $t3, 16
    ctx->pc = 0x254630u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x254634: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x254634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254638: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x254638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25463c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x25463cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x254640: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x254640u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x254644: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x254644u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x254648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x254648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25464c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x25464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x254650: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x254650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
    // 0x254654: 0x10c30026  beq         $a2, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x254654u;
    {
        const bool branch_taken_0x254654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x254658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254654u;
        // 0x254658: 0xfea40068  sd          $a0, 0x68($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254654) {
            ctx->pc = 0x2546F0u;
            goto label_2546f0;
        }
    }
    ctx->pc = 0x25465Cu;
    // 0x25465c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x25465cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x254660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254660u;
    {
        const bool branch_taken_0x254660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254660u;
        // 0x254664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254660) {
            ctx->pc = 0x254678u;
            goto label_254678;
        }
    }
    ctx->pc = 0x254668u;
    // 0x254668: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254668u;
    {
        const bool branch_taken_0x254668 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x25466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254668u;
        // 0x25466c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254668) {
            ctx->pc = 0x25468Cu;
            goto label_25468c;
        }
    }
    ctx->pc = 0x254670u;
    // 0x254670: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x254670u;
    {
        const bool branch_taken_0x254670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254670) {
            ctx->pc = 0x254998u;
            goto label_254998;
        }
    }
    ctx->pc = 0x254678u;
label_254678:
    // 0x254678: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x254678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25467c: 0x10c200b9  beq         $a2, $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x25467Cu;
    {
        const bool branch_taken_0x25467c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x254680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25467Cu;
        // 0x254680: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25467c) {
            ctx->pc = 0x254964u;
            goto label_254964;
        }
    }
    ctx->pc = 0x254684u;
    // 0x254684: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x254684u;
    {
        const bool branch_taken_0x254684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254684) {
            ctx->pc = 0x254998u;
            goto label_254998;
        }
    }
    ctx->pc = 0x25468Cu;
label_25468c:
    // 0x25468c: 0x96e20012  lhu         $v0, 0x12($s7)
    ctx->pc = 0x25468cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x254690: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x254690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x254694: 0x1440050a  bnez        $v0, . + 4 + (0x50A << 2)
    ctx->pc = 0x254694u;
    {
        const bool branch_taken_0x254694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254694u;
        // 0x254698: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254694) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x25469Cu;
    // 0x25469c: 0x14c300be  bne         $a2, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x25469Cu;
    {
        const bool branch_taken_0x25469c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2546A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25469Cu;
        // 0x2546a0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25469c) {
            ctx->pc = 0x254998u;
            goto label_254998;
        }
    }
    ctx->pc = 0x2546A4u;
    // 0x2546a4: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x2546a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x2546a8: 0xc08a254  jal         func_228950
    ctx->pc = 0x2546A8u;
    SET_GPR_U32(ctx, 31, 0x2546B0u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2546A8u, 0x2546B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546B0u;
label_2546b0:
    // 0x2546b0: 0x8bd10013  lwl         $s1, 0x13($fp)
    ctx->pc = 0x2546b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
    // 0x2546b4: 0x9bd10010  lwr         $s1, 0x10($fp)
    ctx->pc = 0x2546b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x2546b8: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x2546b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x2546bc: 0xc08a254  jal         func_228950
    ctx->pc = 0x2546BCu;
    SET_GPR_U32(ctx, 31, 0x2546C4u);
    ctx->pc = 0x2546C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546BCu;
    // 0x2546c0: 0x2228024  and         $s0, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2546BCu, 0x2546C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546C4u;
label_2546c4:
    // 0x2546c4: 0x120204fe  beq         $s0, $v0, . + 4 + (0x4FE << 2)
    ctx->pc = 0x2546C4u;
    {
        const bool branch_taken_0x2546c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2546c4) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2546CCu;
    // 0x2546cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2546ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2546d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2546d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2546d4: 0x8ee50014  lw          $a1, 0x14($s7)
    ctx->pc = 0x2546d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x2546d8: 0xc092ad2  jal         func_24AB48
    ctx->pc = 0x2546D8u;
    SET_GPR_U32(ctx, 31, 0x2546E0u);
    ctx->pc = 0x2546DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546D8u;
    // 0x2546dc: 0x2242024  and         $a0, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AB48u, 0x2546D8u, 0x2546E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546E0u;
label_2546e0:
    // 0x2546e0: 0x144004f7  bnez        $v0, . + 4 + (0x4F7 << 2)
    ctx->pc = 0x2546E0u;
    {
        const bool branch_taken_0x2546e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2546E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546E0u;
        // 0x2546e4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546e0) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2546E8u;
    // 0x2546e8: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x2546E8u;
    {
        const bool branch_taken_0x2546e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2546e8) {
            ctx->pc = 0x254998u;
            goto label_254998;
        }
    }
    ctx->pc = 0x2546F0u;
label_2546f0:
    // 0x2546f0: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x2546f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x2546f4: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2546f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x2546f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2546F8u;
    {
        const bool branch_taken_0x2546f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546F8u;
        // 0x2546fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546f8) {
            ctx->pc = 0x254728u;
            goto label_254728;
        }
    }
    ctx->pc = 0x254700u;
    // 0x254700: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x254700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254704: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x254704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254708: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x254708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x25470c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x25470cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254710: 0x184004ac  blez        $v0, . + 4 + (0x4AC << 2)
    ctx->pc = 0x254710u;
    {
        const bool branch_taken_0x254710 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254710u;
        // 0x254714: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254710) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254718u;
    // 0x254718: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x254718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x25471c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x25471cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254720: 0x1c4004a8  bgtz        $v0, . + 4 + (0x4A8 << 2)
    ctx->pc = 0x254720u;
    {
        const bool branch_taken_0x254720 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x254720) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254728u;
label_254728:
    // 0x254728: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x254728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
    // 0x25472c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25472Cu;
    {
        const bool branch_taken_0x25472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25472Cu;
        // 0x254730: 0x8fa3009c  lw          $v1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25472c) {
            ctx->pc = 0x25474Cu;
            goto label_25474c;
        }
    }
    ctx->pc = 0x254734u;
    // 0x254734: 0x106004e2  beqz        $v1, . + 4 + (0x4E2 << 2)
    ctx->pc = 0x254734u;
    {
        const bool branch_taken_0x254734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254734u;
        // 0x254738: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254734) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x25473Cu;
    // 0x25473c: 0xc096678  jal         func_2599E0
    ctx->pc = 0x25473Cu;
    SET_GPR_U32(ctx, 31, 0x254744u);
    ctx->pc = 0x254740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25473Cu;
    // 0x254740: 0x2405006f  addiu       $a1, $zero, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2599E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2599E0u, 0x25473Cu, 0x254744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254744u;
label_254744:
    // 0x254744: 0x100004de  b           . + 4 + (0x4DE << 2)
    ctx->pc = 0x254744u;
    {
        const bool branch_taken_0x254744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254744u;
        // 0x254748: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254744) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x25474Cu;
label_25474c:
    // 0x25474c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x25474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x254750: 0x108004db  beqz        $a0, . + 4 + (0x4DB << 2)
    ctx->pc = 0x254750u;
    {
        const bool branch_taken_0x254750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254750u;
        // 0x254754: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254750) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x254758u;
    // 0x254758: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x254758u;
    {
        const bool branch_taken_0x254758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x254758) {
            ctx->pc = 0x254784u;
            goto label_254784;
        }
    }
    ctx->pc = 0x254760u;
    // 0x254760: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x254760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254764: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x254764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254768: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x254768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x25476c: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x25476cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x254770: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254774: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x254774u;
    {
        const bool branch_taken_0x254774 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x254778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254774u;
        // 0x254778: 0xaea30040  sw          $v1, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254774) {
            ctx->pc = 0x254780u;
            goto label_254780;
        }
    }
    ctx->pc = 0x25477Cu;
    // 0x25477c: 0xaea30044  sw          $v1, 0x44($s5)
    ctx->pc = 0x25477cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
label_254780:
    // 0x254780: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x254780u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_254784:
    // 0x254784: 0x8a830007  lwl         $v1, 0x7($s4)
    ctx->pc = 0x254784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254788: 0x9a830004  lwr         $v1, 0x4($s4)
    ctx->pc = 0x254788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x25478c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254790: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x254790u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x254794: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x254794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x254798: 0xaea30078  sw          $v1, 0x78($s5)
    ctx->pc = 0x254798u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 3));
    // 0x25479c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2547a0: 0xaea5007c  sw          $a1, 0x7C($s5)
    ctx->pc = 0x2547a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 5));
    // 0x2547a4: 0xa6a20028  sh          $v0, 0x28($s5)
    ctx->pc = 0x2547a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2547a8: 0xaea50070  sw          $a1, 0x70($s5)
    ctx->pc = 0x2547a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 5));
    // 0x2547ac: 0xc0968ea  jal         func_25A3A8
    ctx->pc = 0x2547ACu;
    SET_GPR_U32(ctx, 31, 0x2547B4u);
    ctx->pc = 0x2547B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547ACu;
    // 0x2547b0: 0x97a5001c  lhu         $a1, 0x1C($sp) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A8u, 0x2547ACu, 0x2547B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547B4u;
label_2547b4:
    // 0x2547b4: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x2547b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x2547b8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2547b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2547bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2547BCu;
    {
        const bool branch_taken_0x2547bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547BCu;
        // 0x2547c0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547bc) {
            ctx->pc = 0x2547CCu;
            goto label_2547cc;
        }
    }
    ctx->pc = 0x2547C4u;
    // 0x2547c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2547C4u;
    {
        const bool branch_taken_0x2547c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C4u;
        // 0x2547c8: 0x96a20020  lhu         $v0, 0x20($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547c4) {
            ctx->pc = 0x254808u;
            goto label_254808;
        }
    }
    ctx->pc = 0x2547CCu;
label_2547cc:
    // 0x2547cc: 0x8c4312c8  lw          $v1, 0x12C8($v0)
    ctx->pc = 0x2547ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x2547d0: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2547D0u;
    {
        const bool branch_taken_0x2547d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2547d0) {
            ctx->pc = 0x2547D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2547D0u;
            // 0x2547d4: 0x96a20020  lhu         $v0, 0x20($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2547FCu;
            goto label_2547fc;
        }
    }
    ctx->pc = 0x2547D8u;
    // 0x2547d8: 0x96a50020  lhu         $a1, 0x20($s5)
    ctx->pc = 0x2547d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2547dc: 0x2402111c  addiu       $v0, $zero, 0x111C
    ctx->pc = 0x2547dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4380));
    // 0x2547e0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x2547e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2547e4: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x2547e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2547e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2547e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2547ec: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x2547ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2547f0: 0xa2202b  sltu        $a0, $a1, $v0
    ctx->pc = 0x2547f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2547f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2547F4u;
    {
        const bool branch_taken_0x2547f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547F4u;
        // 0x2547f8: 0xa4100b  movn        $v0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547f4) {
            ctx->pc = 0x254808u;
            goto label_254808;
        }
    }
    ctx->pc = 0x2547FCu;
label_2547fc:
    // 0x2547fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2547fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x254800: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x254800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254804: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x254804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_254808:
    // 0x254808: 0xfea20088  sd          $v0, 0x88($s5)
    ctx->pc = 0x254808u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 2));
    // 0x25480c: 0xc096972  jal         func_25A5C8
    ctx->pc = 0x25480Cu;
    SET_GPR_U32(ctx, 31, 0x254814u);
    ctx->pc = 0x254810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25480Cu;
    // 0x254810: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C8u, 0x25480Cu, 0x254814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254814u;
label_254814:
    // 0x254814: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x254814u;
    {
        const bool branch_taken_0x254814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x254818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254814u;
        // 0x254818: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254814) {
            ctx->pc = 0x2548CCu;
            goto label_2548cc;
        }
    }
    ctx->pc = 0x25481Cu;
    // 0x25481c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254820: 0x24c31308  addiu       $v1, $a2, 0x1308
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x254824: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x254824u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x254828: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x254828u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25482c: 0xc08c0ee  jal         func_2303B8
    ctx->pc = 0x25482Cu;
    SET_GPR_U32(ctx, 31, 0x254834u);
    ctx->pc = 0x254830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25482Cu;
    // 0x254830: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2303B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2303B8u, 0x25482Cu, 0x254834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254834u;
label_254834:
    // 0x254834: 0xc09693a  jal         func_25A4E8
    ctx->pc = 0x254834u;
    SET_GPR_U32(ctx, 31, 0x25483Cu);
    ctx->pc = 0x254838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254834u;
    // 0x254838: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4E8u, 0x254834u, 0x25483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25483Cu;
label_25483c:
    // 0x25483c: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x25483cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x254840: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x254840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x254844: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x254844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x254848: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254848u;
    {
        const bool branch_taken_0x254848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x254848) {
            ctx->pc = 0x254860u;
            goto label_254860;
        }
    }
    ctx->pc = 0x254850u;
    // 0x254850: 0x92a200b7  lbu         $v0, 0xB7($s5)
    ctx->pc = 0x254850u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 183)));
    // 0x254854: 0x92a300b6  lbu         $v1, 0xB6($s5)
    ctx->pc = 0x254854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 182)));
    // 0x254858: 0xa2a200b4  sb          $v0, 0xB4($s5)
    ctx->pc = 0x254858u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x25485c: 0xa2a300b5  sb          $v1, 0xB5($s5)
    ctx->pc = 0x25485cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 181), (uint8_t)GPR_U32(ctx, 3));
label_254860:
    // 0x254860: 0xc08c682  jal         func_231A08
    ctx->pc = 0x254860u;
    SET_GPR_U32(ctx, 31, 0x254868u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x254860u, 0x254868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254868u;
label_254868:
    // 0x254868: 0x96a30028  lhu         $v1, 0x28($s5)
    ctx->pc = 0x254868u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x25486c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254870: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x254870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x254874: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254874u;
    {
        const bool branch_taken_0x254874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254874u;
        // 0x254878: 0x34624000  ori         $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254874) {
            ctx->pc = 0x25488Cu;
            goto label_25488c;
        }
    }
    ctx->pc = 0x25487Cu;
    // 0x25487c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25487Cu;
    SET_GPR_U32(ctx, 31, 0x254884u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25487Cu, 0x254884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254884u;
label_254884:
    // 0x254884: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254884u;
    {
        const bool branch_taken_0x254884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254884u;
        // 0x254888: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254884) {
            ctx->pc = 0x254898u;
            goto label_254898;
        }
    }
    ctx->pc = 0x25488Cu;
label_25488c:
    // 0x25488c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25488Cu;
    SET_GPR_U32(ctx, 31, 0x254894u);
    ctx->pc = 0x254890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25488Cu;
    // 0x254890: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25488Cu, 0x254894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254894u;
label_254894:
    // 0x254894: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_254898:
    // 0x254898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25489c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25489cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548a0: 0xc094cc2  jal         func_253308
    ctx->pc = 0x2548A0u;
    SET_GPR_U32(ctx, 31, 0x2548A8u);
    ctx->pc = 0x2548A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548A0u;
    // 0x2548a4: 0x27a70068  addiu       $a3, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253308u;
    goto label_253308;
    ctx->pc = 0x2548A8u;
label_2548a8:
    // 0x2548a8: 0xc095faa  jal         func_257EA8
    ctx->pc = 0x2548A8u;
    SET_GPR_U32(ctx, 31, 0x2548B0u);
    ctx->pc = 0x2548ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548A8u;
    // 0x2548ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA8u, 0x2548A8u, 0x2548B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548B0u;
label_2548b0:
    // 0x2548b0: 0x86a5009a  lh          $a1, 0x9A($s5)
    ctx->pc = 0x2548b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 154)));
    // 0x2548b4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2548B4u;
    {
        const bool branch_taken_0x2548b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2548b4) {
            ctx->pc = 0x2548D4u;
            goto label_2548d4;
        }
    }
    ctx->pc = 0x2548BCu;
    // 0x2548bc: 0xc0957a6  jal         func_255E98
    ctx->pc = 0x2548BCu;
    SET_GPR_U32(ctx, 31, 0x2548C4u);
    ctx->pc = 0x2548C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548BCu;
    // 0x2548c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E98u, 0x2548BCu, 0x2548C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548C4u;
label_2548c4:
    // 0x2548c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2548C4u;
    {
        const bool branch_taken_0x2548c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2548c4) {
            ctx->pc = 0x2548D4u;
            goto label_2548d4;
        }
    }
    ctx->pc = 0x2548CCu;
label_2548cc:
    // 0x2548cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2548ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2548d0: 0xa6a20018  sh          $v0, 0x18($s5)
    ctx->pc = 0x2548d0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
label_2548d4:
    // 0x2548d4: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x2548d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2548d8: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x2548d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2548dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2548dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2548e0: 0xaa820007  swl         $v0, 0x7($s4)
    ctx->pc = 0x2548e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2548e4: 0xba820004  swr         $v0, 0x4($s4)
    ctx->pc = 0x2548e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2548e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2548e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2548ec: 0xdea20068  ld          $v0, 0x68($s5)
    ctx->pc = 0x2548ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x2548f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2548f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2548f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2548F4u;
    {
        const bool branch_taken_0x2548f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548F4u;
        // 0x2548f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548f4) {
            ctx->pc = 0x254944u;
            goto label_254944;
        }
    }
    ctx->pc = 0x2548FCu;
    // 0x2548fc: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x2548fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x254900: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x254900u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254904: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x254904u;
    SET_GPR_U32(ctx, 31, 0x25490Cu);
    ctx->pc = 0x254908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254904u;
    // 0x254908: 0x102823  negu        $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x254904u, 0x25490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25490Cu;
label_25490c:
    // 0x25490c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x254910: 0x8ea60068  lw          $a2, 0x68($s5)
    ctx->pc = 0x254910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x254914: 0x24441308  addiu       $a0, $v0, 0x1308
    ctx->pc = 0x254914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x254918: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x254918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x25491c: 0xdc830148  ld          $v1, 0x148($a0)
    ctx->pc = 0x25491cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x254920: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x254920u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x254924: 0xdc820150  ld          $v0, 0x150($a0)
    ctx->pc = 0x254924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x254928: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x254928u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25492c: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x25492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x254930: 0xfc830148  sd          $v1, 0x148($a0)
    ctx->pc = 0x254930u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 328), GPR_U64(ctx, 3));
    // 0x254934: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x254934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x254938: 0xfc820150  sd          $v0, 0x150($a0)
    ctx->pc = 0x254938u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 2));
    // 0x25493c: 0x32c30010  andi        $v1, $s6, 0x10
    ctx->pc = 0x25493cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x254940: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x254940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_254944:
    // 0x254944: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x254944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x254948: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x254948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25494c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x254950: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x254950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
    // 0x254954: 0x8a830007  lwl         $v1, 0x7($s4)
    ctx->pc = 0x254954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254958: 0x9a830004  lwr         $v1, 0x4($s4)
    ctx->pc = 0x254958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x25495c: 0x100002ad  b           . + 4 + (0x2AD << 2)
    ctx->pc = 0x25495Cu;
    {
        const bool branch_taken_0x25495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25495Cu;
        // 0x254960: 0xaea30074  sw          $v1, 0x74($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25495c) {
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x254964u;
label_254964:
    // 0x254964: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x254964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x254968: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x254968u;
    {
        const bool branch_taken_0x254968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254968u;
        // 0x25496c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254968) {
            ctx->pc = 0x254998u;
            goto label_254998;
        }
    }
    ctx->pc = 0x254970u;
    // 0x254970: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x254970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x254974: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x254974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x254978: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x254978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x25497c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x25497cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x254980: 0x18400410  blez        $v0, . + 4 + (0x410 << 2)
    ctx->pc = 0x254980u;
    {
        const bool branch_taken_0x254980 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254980u;
        // 0x254984: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254980) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254988u;
    // 0x254988: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x254988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x25498c: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x25498cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x254990: 0x1c40040c  bgtz        $v0, . + 4 + (0x40C << 2)
    ctx->pc = 0x254990u;
    {
        const bool branch_taken_0x254990 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x254994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254990u;
        // 0x254994: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254990) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254998u;
label_254998:
    // 0x254998: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x254998u;
    {
        const bool branch_taken_0x254998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254998u;
        // 0x25499c: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254998) {
            ctx->pc = 0x254A14u;
            goto label_254a14;
        }
    }
    ctx->pc = 0x2549A0u;
    // 0x2549a0: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2549A0u;
    {
        const bool branch_taken_0x2549a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2549a0) {
            ctx->pc = 0x254A14u;
            goto label_254a14;
        }
    }
    ctx->pc = 0x2549A8u;
    // 0x2549a8: 0x8ea300b8  lw          $v1, 0xB8($s5)
    ctx->pc = 0x2549a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x2549ac: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2549ACu;
    {
        const bool branch_taken_0x2549ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549ACu;
        // 0x2549b0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549ac) {
            ctx->pc = 0x254A14u;
            goto label_254a14;
        }
    }
    ctx->pc = 0x2549B4u;
    // 0x2549b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2549b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2549b8: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2549B8u;
    {
        const bool branch_taken_0x2549b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2549BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549B8u;
        // 0x2549bc: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549b8) {
            ctx->pc = 0x254A14u;
            goto label_254a14;
        }
    }
    ctx->pc = 0x2549C0u;
    // 0x2549c0: 0x8ea500bc  lw          $a1, 0xBC($s5)
    ctx->pc = 0x2549c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x2549c4: 0x8c831528  lw          $v1, 0x1528($a0)
    ctx->pc = 0x2549c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5416)));
    // 0x2549c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2549c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2549cc: 0x34424800  ori         $v0, $v0, 0x4800
    ctx->pc = 0x2549ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18432);
    // 0x2549d0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2549d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2549d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2549d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2549d8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2549D8u;
    {
        const bool branch_taken_0x2549d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2549d8) {
            ctx->pc = 0x2549DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2549D8u;
            // 0x2549dc: 0xaea000b8  sw          $zero, 0xB8($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254A14u;
            goto label_254a14;
        }
    }
    ctx->pc = 0x2549E0u;
    // 0x2549e0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2549e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2549e4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2549e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2549e8: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x2549e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x2549ec: 0xdc620118  ld          $v0, 0x118($v1)
    ctx->pc = 0x2549ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x2549f0: 0xdc640120  ld          $a0, 0x120($v1)
    ctx->pc = 0x2549f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x2549f4: 0xdc650190  ld          $a1, 0x190($v1)
    ctx->pc = 0x2549f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x2549f8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2549f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2549fc: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x2549fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
    // 0x254a00: 0xfc620118  sd          $v0, 0x118($v1)
    ctx->pc = 0x254a00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 280), GPR_U64(ctx, 2));
    // 0x254a04: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x254a04u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x254a08: 0xfc640120  sd          $a0, 0x120($v1)
    ctx->pc = 0x254a08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 288), GPR_U64(ctx, 4));
    // 0x254a0c: 0x100003dd  b           . + 4 + (0x3DD << 2)
    ctx->pc = 0x254A0Cu;
    {
        const bool branch_taken_0x254a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A0Cu;
        // 0x254a10: 0xfc650190  sd          $a1, 0x190($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 400), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a0c) {
            ctx->pc = 0x255984u;
            goto label_255984;
        }
    }
    ctx->pc = 0x254A14u;
label_254a14:
    // 0x254a14: 0x8a840007  lwl         $a0, 0x7($s4)
    ctx->pc = 0x254a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x254a18: 0x9a840004  lwr         $a0, 0x4($s4)
    ctx->pc = 0x254a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x254a1c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x254a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x254a20: 0x448023  subu        $s0, $v0, $a0
    ctx->pc = 0x254a20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254a24: 0x1a000052  blez        $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x254A24u;
    {
        const bool branch_taken_0x254a24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x254A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A24u;
        // 0x254a28: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a24) {
            ctx->pc = 0x254B70u;
            goto label_254b70;
        }
    }
    ctx->pc = 0x254A2Cu;
    // 0x254a2c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x254A2Cu;
    {
        const bool branch_taken_0x254a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A2Cu;
        // 0x254a30: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a2c) {
            ctx->pc = 0x254A88u;
            goto label_254a88;
        }
    }
    ctx->pc = 0x254A34u;
    // 0x254a34: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x254a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x254a38: 0xaa820007  swl         $v0, 0x7($s4)
    ctx->pc = 0x254a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x254a3c: 0xba820004  swr         $v0, 0x4($s4)
    ctx->pc = 0x254a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x254a40: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x254a40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x254a44: 0x92820013  lbu         $v0, 0x13($s4)
    ctx->pc = 0x254a44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x254a48: 0x92830012  lbu         $v1, 0x12($s4)
    ctx->pc = 0x254a48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x254a4c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x254a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x254a50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x254a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x254a54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254a58: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x254a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x254a5c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x254A5Cu;
    {
        const bool branch_taken_0x254a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254a5c) {
            ctx->pc = 0x254A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A5Cu;
            // 0x254a60: 0x2402ffdf  addiu       $v0, $zero, -0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254A78u;
            goto label_254a78;
        }
    }
    ctx->pc = 0x254A64u;
    // 0x254a64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x254a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x254a68: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x254a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x254a6c: 0xa2820012  sb          $v0, 0x12($s4)
    ctx->pc = 0x254a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x254a70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254A70u;
    {
        const bool branch_taken_0x254a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A70u;
        // 0x254a74: 0xa2830013  sb          $v1, 0x13($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a70) {
            ctx->pc = 0x254A84u;
            goto label_254a84;
        }
    }
    ctx->pc = 0x254A78u;
label_254a78:
    // 0x254a78: 0xa2800012  sb          $zero, 0x12($s4)
    ctx->pc = 0x254a78u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x254a7c: 0xa2800013  sb          $zero, 0x13($s4)
    ctx->pc = 0x254a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x254a80: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x254a80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_254a84:
    // 0x254a84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x254a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_254a88:
    // 0x254a88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x254a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x254a8c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x254a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x254a90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x254A90u;
    {
        const bool branch_taken_0x254a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254a90) {
            ctx->pc = 0x254A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A90u;
            // 0x254a94: 0x96a20028  lhu         $v0, 0x28($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AB0u;
            goto label_254ab0;
        }
    }
    ctx->pc = 0x254A98u;
    // 0x254a98: 0x16030013  bne         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x254A98u;
    {
        const bool branch_taken_0x254a98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x254A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A98u;
        // 0x254a9c: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a98) {
            ctx->pc = 0x254AE8u;
            goto label_254ae8;
        }
    }
    ctx->pc = 0x254AA0u;
    // 0x254aa0: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x254aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x254aa4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x254AA4u;
    {
        const bool branch_taken_0x254aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AA4u;
        // 0x254aa8: 0x24621308  addiu       $v0, $v1, 0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254aa4) {
            ctx->pc = 0x254AECu;
            goto label_254aec;
        }
    }
    ctx->pc = 0x254AACu;
    // 0x254aac: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x254aacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
label_254ab0:
    // 0x254ab0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x254ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x254ab4: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x254ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x254ab8: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x254ab8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x254abc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x254abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x254ac0: 0x24c41308  addiu       $a0, $a2, 0x1308
    ctx->pc = 0x254ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x254ac4: 0xa6a20028  sh          $v0, 0x28($s5)
    ctx->pc = 0x254ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x254ac8: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x254ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x254acc: 0xdc830120  ld          $v1, 0x120($a0)
    ctx->pc = 0x254accu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x254ad0: 0xdc820118  ld          $v0, 0x118($a0)
    ctx->pc = 0x254ad0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x254ad4: 0x203182d  daddu       $v1, $s0, $v1
    ctx->pc = 0x254ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x254ad8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x254ad8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x254adc: 0xfc830120  sd          $v1, 0x120($a0)
    ctx->pc = 0x254adcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 288), GPR_U64(ctx, 3));
    // 0x254ae0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254AE0u;
    {
        const bool branch_taken_0x254ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AE0u;
        // 0x254ae4: 0xfc820118  sd          $v0, 0x118($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 280), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ae0) {
            ctx->pc = 0x254B04u;
            goto label_254b04;
        }
    }
    ctx->pc = 0x254AE8u;
label_254ae8:
    // 0x254ae8: 0x24621308  addiu       $v0, $v1, 0x1308
    ctx->pc = 0x254ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
label_254aec:
    // 0x254aec: 0xdc430128  ld          $v1, 0x128($v0)
    ctx->pc = 0x254aecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x254af0: 0xdc440130  ld          $a0, 0x130($v0)
    ctx->pc = 0x254af0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x254af4: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x254af4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x254af8: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x254af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x254afc: 0xfc430128  sd          $v1, 0x128($v0)
    ctx->pc = 0x254afcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 296), GPR_U64(ctx, 3));
    // 0x254b00: 0xfc440130  sd          $a0, 0x130($v0)
    ctx->pc = 0x254b00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 304), GPR_U64(ctx, 4));
label_254b04:
    // 0x254b04: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x254b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x254b08: 0x8a830007  lwl         $v1, 0x7($s4)
    ctx->pc = 0x254b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254b0c: 0x9a830004  lwr         $v1, 0x4($s4)
    ctx->pc = 0x254b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254b10: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x254b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x254b14: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x254b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x254b18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x254b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x254b1c: 0xaa830007  swl         $v1, 0x7($s4)
    ctx->pc = 0x254b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x254b20: 0xba830004  swr         $v1, 0x4($s4)
    ctx->pc = 0x254b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x254b24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x254b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x254b28: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x254b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x254b2c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x254b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x254b30: 0x92830013  lbu         $v1, 0x13($s4)
    ctx->pc = 0x254b30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x254b34: 0x92820012  lbu         $v0, 0x12($s4)
    ctx->pc = 0x254b34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x254b38: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x254b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x254b3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x254b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x254b40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x254b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254b44: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x254b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254b48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254B48u;
    {
        const bool branch_taken_0x254b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B48u;
        // 0x254b4c: 0x701023  subu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b48) {
            ctx->pc = 0x254B60u;
            goto label_254b60;
        }
    }
    ctx->pc = 0x254B50u;
    // 0x254b50: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x254b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x254b54: 0xa2820012  sb          $v0, 0x12($s4)
    ctx->pc = 0x254b54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x254b58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x254B58u;
    {
        const bool branch_taken_0x254b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B58u;
        // 0x254b5c: 0xa2830013  sb          $v1, 0x13($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b58) {
            ctx->pc = 0x254B70u;
            goto label_254b70;
        }
    }
    ctx->pc = 0x254B60u;
label_254b60:
    // 0x254b60: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x254b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x254b64: 0xa2800012  sb          $zero, 0x12($s4)
    ctx->pc = 0x254b64u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x254b68: 0xa2800013  sb          $zero, 0x13($s4)
    ctx->pc = 0x254b68u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x254b6c: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x254b6cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_254b70:
    // 0x254b70: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x254b70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x254b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x254b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x254b78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x254B78u;
    {
        const bool branch_taken_0x254b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B78u;
        // 0x254b7c: 0x8fa90068  lw          $t1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b78) {
            ctx->pc = 0x254BBCu;
            goto label_254bbc;
        }
    }
    ctx->pc = 0x254B80u;
    // 0x254b80: 0x86a20018  lh          $v0, 0x18($s5)
    ctx->pc = 0x254b80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x254b84: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x254b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x254b88: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x254B88u;
    {
        const bool branch_taken_0x254b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b88) {
            ctx->pc = 0x254BBCu;
            goto label_254bbc;
        }
    }
    ctx->pc = 0x254B90u;
    // 0x254b90: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x254B90u;
    {
        const bool branch_taken_0x254b90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B90u;
        // 0x254b94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b90) {
            ctx->pc = 0x254BBCu;
            goto label_254bbc;
        }
    }
    ctx->pc = 0x254B98u;
    // 0x254b98: 0xc0966a2  jal         func_259A88
    ctx->pc = 0x254B98u;
    SET_GPR_U32(ctx, 31, 0x254BA0u);
    ctx->pc = 0x254B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B98u;
    // 0x254b9c: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x259A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259A88u, 0x254B98u, 0x254BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BA0u;
label_254ba0:
    // 0x254ba0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x254ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x254ba4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x254ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ba8: 0x24a31308  addiu       $v1, $a1, 0x1308
    ctx->pc = 0x254ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x254bac: 0xdc620158  ld          $v0, 0x158($v1)
    ctx->pc = 0x254bacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x254bb0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x254bb0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x254bb4: 0x10000383  b           . + 4 + (0x383 << 2)
    ctx->pc = 0x254BB4u;
    {
        const bool branch_taken_0x254bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BB4u;
        // 0x254bb8: 0xfc620158  sd          $v0, 0x158($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 344), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bb4) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254BBCu;
label_254bbc:
    // 0x254bbc: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x254bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x254bc0: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x254bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x254bc4: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x254bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x254bc8: 0x8ea40068  lw          $a0, 0x68($s5)
    ctx->pc = 0x254bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x254bcc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x254bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x254bd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254bd4: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x254bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254bd8: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x254BD8u;
    {
        const bool branch_taken_0x254bd8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x254BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BD8u;
        // 0x254bdc: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bd8) {
            ctx->pc = 0x254CC0u;
            goto label_254cc0;
        }
    }
    ctx->pc = 0x254BE0u;
    // 0x254be0: 0x209182a  slt         $v1, $s0, $t1
    ctx->pc = 0x254be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x254be4: 0x24c51308  addiu       $a1, $a2, 0x1308
    ctx->pc = 0x254be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x254be8: 0xdca20148  ld          $v0, 0x148($a1)
    ctx->pc = 0x254be8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x254bec: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x254becu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x254bf0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x254BF0u;
    {
        const bool branch_taken_0x254bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BF0u;
        // 0x254bf4: 0xfca20148  sd          $v0, 0x148($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 328), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bf0) {
            ctx->pc = 0x254C94u;
            goto label_254c94;
        }
    }
    ctx->pc = 0x254BF8u;
    // 0x254bf8: 0xdca20150  ld          $v0, 0x150($a1)
    ctx->pc = 0x254bf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x254bfc: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x254bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x254c00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x254c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x254c04: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x254c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x254c08: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x254C08u;
    {
        const bool branch_taken_0x254c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C08u;
        // 0x254c0c: 0xfca20150  sd          $v0, 0x150($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 336), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c08) {
            ctx->pc = 0x254C54u;
            goto label_254c54;
        }
    }
    ctx->pc = 0x254C10u;
    // 0x254c10: 0x86a30018  lh          $v1, 0x18($s5)
    ctx->pc = 0x254c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x254c14: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x254c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x254c18: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x254C18u;
    {
        const bool branch_taken_0x254c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x254c18) {
            ctx->pc = 0x254C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254C18u;
            // 0x254c1c: 0xdea20068  ld          $v0, 0x68($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C58u;
            goto label_254c58;
        }
    }
    ctx->pc = 0x254C20u;
    // 0x254c20: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x254c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x254c24: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x254c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x254c28: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x254c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x254c2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254c30: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254C30u;
    {
        const bool branch_taken_0x254c30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C30u;
        // 0x254c34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c30) {
            ctx->pc = 0x254C54u;
            goto label_254c54;
        }
    }
    ctx->pc = 0x254C38u;
    // 0x254c38: 0x8ea60044  lw          $a2, 0x44($s5)
    ctx->pc = 0x254c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x254c3c: 0xc0969c2  jal         func_25A708
    ctx->pc = 0x254C3Cu;
    SET_GPR_U32(ctx, 31, 0x254C44u);
    ctx->pc = 0x254C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C3Cu;
    // 0x254c40: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A708u, 0x254C3Cu, 0x254C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C44u;
label_254c44:
    // 0x254c44: 0xc0966a2  jal         func_259A88
    ctx->pc = 0x254C44u;
    SET_GPR_U32(ctx, 31, 0x254C4Cu);
    ctx->pc = 0x254C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C44u;
    // 0x254c48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259A88u, 0x254C44u, 0x254C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C4Cu;
label_254c4c:
    // 0x254c4c: 0x1000fbb6  b           . + 4 + (-0x44A << 2)
    ctx->pc = 0x254C4Cu;
    {
        const bool branch_taken_0x254c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C4Cu;
        // 0x254c50: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c4c) {
            ctx->pc = 0x253B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253b28;
        }
    }
    ctx->pc = 0x254C54u;
label_254c54:
    // 0x254c54: 0xdea20068  ld          $v0, 0x68($s5)
    ctx->pc = 0x254c54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 104)));
label_254c58:
    // 0x254c58: 0x1440034a  bnez        $v0, . + 4 + (0x34A << 2)
    ctx->pc = 0x254C58u;
    {
        const bool branch_taken_0x254c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C58u;
        // 0x254c5c: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c58) {
            ctx->pc = 0x255984u;
            goto label_255984;
        }
    }
    ctx->pc = 0x254C60u;
    // 0x254c60: 0x8a830007  lwl         $v1, 0x7($s4)
    ctx->pc = 0x254c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254c64: 0x9a830004  lwr         $v1, 0x4($s4)
    ctx->pc = 0x254c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254c68: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x254c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x254c6c: 0x14620345  bne         $v1, $v0, . + 4 + (0x345 << 2)
    ctx->pc = 0x254C6Cu;
    {
        const bool branch_taken_0x254c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x254C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C6Cu;
        // 0x254c70: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c6c) {
            ctx->pc = 0x255984u;
            goto label_255984;
        }
    }
    ctx->pc = 0x254C74u;
    // 0x254c74: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x254c74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x254c78: 0x24641308  addiu       $a0, $v1, 0x1308
    ctx->pc = 0x254c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x254c7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x254c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x254c80: 0xa6a20028  sh          $v0, 0x28($s5)
    ctx->pc = 0x254c80u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x254c84: 0xdc830160  ld          $v1, 0x160($a0)
    ctx->pc = 0x254c84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x254c88: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x254c88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x254c8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254C8Cu;
    {
        const bool branch_taken_0x254c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C8Cu;
        // 0x254c90: 0xfc830160  sd          $v1, 0x160($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 352), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c8c) {
            ctx->pc = 0x254CA0u;
            goto label_254ca0;
        }
    }
    ctx->pc = 0x254C94u;
label_254c94:
    // 0x254c94: 0xdca20150  ld          $v0, 0x150($a1)
    ctx->pc = 0x254c94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x254c98: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x254c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x254c9c: 0xfca20150  sd          $v0, 0x150($a1)
    ctx->pc = 0x254c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 336), GPR_U64(ctx, 2));
label_254ca0:
    // 0x254ca0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x254ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ca4: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x254CA4u;
    SET_GPR_U32(ctx, 31, 0x254CACu);
    ctx->pc = 0x254CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CA4u;
    // 0x254ca8: 0x102823  negu        $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x254CA4u, 0x254CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CACu;
label_254cac:
    // 0x254cac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x254cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x254cb0: 0x2403fff6  addiu       $v1, $zero, -0xA
    ctx->pc = 0x254cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x254cb4: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x254cb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x254cb8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x254cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x254cbc: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x254cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_254cc0:
    // 0x254cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254cc4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x254CC4u;
    {
        const bool branch_taken_0x254cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CC4u;
        // 0x254cc8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cc4) {
            ctx->pc = 0x254D38u;
            goto label_254d38;
        }
    }
    ctx->pc = 0x254CCCu;
    // 0x254ccc: 0x8ea300b8  lw          $v1, 0xB8($s5)
    ctx->pc = 0x254cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x254cd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254cd4: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x254CD4u;
    {
        const bool branch_taken_0x254cd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x254CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CD4u;
        // 0x254cd8: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cd4) {
            ctx->pc = 0x254D3Cu;
            goto label_254d3c;
        }
    }
    ctx->pc = 0x254CDCu;
    // 0x254cdc: 0x8a850007  lwl         $a1, 0x7($s4)
    ctx->pc = 0x254cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x254ce0: 0x9a850004  lwr         $a1, 0x4($s4)
    ctx->pc = 0x254ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x254ce4: 0x8ea400c0  lw          $a0, 0xC0($s5)
    ctx->pc = 0x254ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x254ce8: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x254ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x254cec: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x254CECu;
    {
        const bool branch_taken_0x254cec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x254CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CECu;
        // 0x254cf0: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cec) {
            ctx->pc = 0x254D3Cu;
            goto label_254d3c;
        }
    }
    ctx->pc = 0x254CF4u;
    // 0x254cf4: 0x32c30003  andi        $v1, $s6, 0x3
    ctx->pc = 0x254cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
    // 0x254cf8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x254CF8u;
    {
        const bool branch_taken_0x254cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CF8u;
        // 0x254cfc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cf8) {
            ctx->pc = 0x254D18u;
            goto label_254d18;
        }
    }
    ctx->pc = 0x254D00u;
    // 0x254d00: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x254d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x254d04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x254d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x254d08: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254D08u;
    {
        const bool branch_taken_0x254d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x254D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D08u;
        // 0x254d0c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d08) {
            ctx->pc = 0x254D28u;
            goto label_254d28;
        }
    }
    ctx->pc = 0x254D10u;
    // 0x254d10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x254D10u;
    {
        const bool branch_taken_0x254d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254d10) {
            ctx->pc = 0x254D3Cu;
            goto label_254d3c;
        }
    }
    ctx->pc = 0x254D18u;
label_254d18:
    // 0x254d18: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x254d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x254d1c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254D1Cu;
    {
        const bool branch_taken_0x254d1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x254D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D1Cu;
        // 0x254d20: 0x32d10004  andi        $s1, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d1c) {
            ctx->pc = 0x254D3Cu;
            goto label_254d3c;
        }
    }
    ctx->pc = 0x254D24u;
    // 0x254d24: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x254d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_254d28:
    // 0x254d28: 0x8c431528  lw          $v1, 0x1528($v0)
    ctx->pc = 0x254d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    // 0x254d2c: 0xaea300bc  sw          $v1, 0xBC($s5)
    ctx->pc = 0x254d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 3));
    // 0x254d30: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x254d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x254d34: 0xaea200b8  sw          $v0, 0xB8($s5)
    ctx->pc = 0x254d34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 2));
label_254d38:
    // 0x254d38: 0x32d10004  andi        $s1, $s6, 0x4
    ctx->pc = 0x254d38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_254d3c:
    // 0x254d3c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x254D3Cu;
    {
        const bool branch_taken_0x254d3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D3Cu;
        // 0x254d40: 0x32c20002  andi        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d3c) {
            ctx->pc = 0x254DACu;
            goto label_254dac;
        }
    }
    ctx->pc = 0x254D44u;
    // 0x254d44: 0x96a20018  lhu         $v0, 0x18($s5)
    ctx->pc = 0x254d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x254d48: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x254d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x254d4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x254d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x254d50: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x254d50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x254d54: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x254d54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x254d58: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x254D58u;
    {
        const bool branch_taken_0x254d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D58u;
        // 0x254d5c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d58) {
            ctx->pc = 0x254DA8u;
            goto label_254da8;
        }
    }
    ctx->pc = 0x254D60u;
    // 0x254d60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254d64: 0x24426f10  addiu       $v0, $v0, 0x6F10
    ctx->pc = 0x254d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
    // 0x254d68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254d6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254d70: 0x800008  jr          $a0
    ctx->pc = 0x254D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254D78u: goto label_254d78;
            case 0x254D80u: goto label_254d80;
            case 0x2553ECu: goto label_2553ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254D78u;
label_254d78:
    // 0x254d78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254D78u;
    {
        const bool branch_taken_0x254d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D78u;
        // 0x254d7c: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d78) {
            ctx->pc = 0x254D84u;
            goto label_254d84;
        }
    }
    ctx->pc = 0x254D80u;
label_254d80:
    // 0x254d80: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x254d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_254d84:
    // 0x254d84: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x254d84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x254d88: 0xa6a00018  sh          $zero, 0x18($s5)
    ctx->pc = 0x254d88u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x254d8c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x254d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x254d90: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x254d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x254d94: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x254d94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x254d98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d9c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x254d9cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x254da0: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x254DA0u;
    {
        const bool branch_taken_0x254da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DA0u;
        // 0x254da4: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254da0) {
            ctx->pc = 0x2553F0u;
            goto label_2553f0;
        }
    }
    ctx->pc = 0x254DA8u;
label_254da8:
    // 0x254da8: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x254da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_254dac:
    // 0x254dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254DACu;
    {
        const bool branch_taken_0x254dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DACu;
        // 0x254db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dac) {
            ctx->pc = 0x254DC4u;
            goto label_254dc4;
        }
    }
    ctx->pc = 0x254DB4u;
    // 0x254db4: 0xc096678  jal         func_2599E0
    ctx->pc = 0x254DB4u;
    SET_GPR_U32(ctx, 31, 0x254DBCu);
    ctx->pc = 0x254DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254DB4u;
    // 0x254db8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2599E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2599E0u, 0x254DB4u, 0x254DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DBCu;
label_254dbc:
    // 0x254dbc: 0x10000301  b           . + 4 + (0x301 << 2)
    ctx->pc = 0x254DBCu;
    {
        const bool branch_taken_0x254dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DBCu;
        // 0x254dc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dbc) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254DC4u;
label_254dc4:
    // 0x254dc4: 0x32c50010  andi        $a1, $s6, 0x10
    ctx->pc = 0x254dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x254dc8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x254DC8u;
    {
        const bool branch_taken_0x254dc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x254DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DC8u;
        // 0x254dcc: 0xafa5009c  sw          $a1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dc8) {
            ctx->pc = 0x254DE8u;
            goto label_254de8;
        }
    }
    ctx->pc = 0x254DD0u;
    // 0x254dd0: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x254dd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x254dd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x254dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x254dd8: 0x144002ea  bnez        $v0, . + 4 + (0x2EA << 2)
    ctx->pc = 0x254DD8u;
    {
        const bool branch_taken_0x254dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254dd8) {
            ctx->pc = 0x255984u;
            goto label_255984;
        }
    }
    ctx->pc = 0x254DE0u;
    // 0x254de0: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x254DE0u;
    {
        const bool branch_taken_0x254de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254de0) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x254DE8u;
label_254de8:
    // 0x254de8: 0x86a30018  lh          $v1, 0x18($s5)
    ctx->pc = 0x254de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x254dec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x254decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x254df0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254DF0u;
    {
        const bool branch_taken_0x254df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x254DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DF0u;
        // 0x254df4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254df0) {
            ctx->pc = 0x254E14u;
            goto label_254e14;
        }
    }
    ctx->pc = 0x254DF8u;
    // 0x254df8: 0x14400187  bnez        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x254DF8u;
    {
        const bool branch_taken_0x254df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DF8u;
        // 0x254dfc: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254df8) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x254E00u;
    // 0x254e00: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x254e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x254e04: 0x10400184  beqz        $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x254E04u;
    {
        const bool branch_taken_0x254e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254e04) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x254E0Cu;
    // 0x254e0c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x254E0Cu;
    {
        const bool branch_taken_0x254e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254e0c) {
            ctx->pc = 0x254EE0u;
            goto label_254ee0;
        }
    }
    ctx->pc = 0x254E14u;
label_254e14:
    // 0x254e14: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x254e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254e18: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x254e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254e1c: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x254e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x254e20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254e24: 0x1c4002e7  bgtz        $v0, . + 4 + (0x2E7 << 2)
    ctx->pc = 0x254E24u;
    {
        const bool branch_taken_0x254e24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x254e24) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254E2Cu;
    // 0x254e2c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x254e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x254e30: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x254e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254e34: 0x1c4002e3  bgtz        $v0, . + 4 + (0x2E3 << 2)
    ctx->pc = 0x254E34u;
    {
        const bool branch_taken_0x254e34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x254E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E34u;
        // 0x254e38: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e34) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x254E3Cu;
    // 0x254e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e40: 0x24c31308  addiu       $v1, $a2, 0x1308
    ctx->pc = 0x254e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x254e44: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x254e44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x254e48: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x254e48u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x254e4c: 0xc08c0ee  jal         func_2303B8
    ctx->pc = 0x254E4Cu;
    SET_GPR_U32(ctx, 31, 0x254E54u);
    ctx->pc = 0x254E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E4Cu;
    // 0x254e50: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2303B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2303B8u, 0x254E4Cu, 0x254E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E54u;
label_254e54:
    // 0x254e54: 0xc09693a  jal         func_25A4E8
    ctx->pc = 0x254E54u;
    SET_GPR_U32(ctx, 31, 0x254E5Cu);
    ctx->pc = 0x254E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E54u;
    // 0x254e58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4E8u, 0x254E54u, 0x254E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E5Cu;
label_254e5c:
    // 0x254e5c: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x254e5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x254e60: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x254e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x254e64: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x254e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x254e68: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254E68u;
    {
        const bool branch_taken_0x254e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x254e68) {
            ctx->pc = 0x254E80u;
            goto label_254e80;
        }
    }
    ctx->pc = 0x254E70u;
    // 0x254e70: 0x92a200b7  lbu         $v0, 0xB7($s5)
    ctx->pc = 0x254e70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 183)));
    // 0x254e74: 0x92a300b6  lbu         $v1, 0xB6($s5)
    ctx->pc = 0x254e74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 182)));
    // 0x254e78: 0xa2a200b4  sb          $v0, 0xB4($s5)
    ctx->pc = 0x254e78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x254e7c: 0xa2a300b5  sb          $v1, 0xB5($s5)
    ctx->pc = 0x254e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 181), (uint8_t)GPR_U32(ctx, 3));
label_254e80:
    // 0x254e80: 0xc08c682  jal         func_231A08
    ctx->pc = 0x254E80u;
    SET_GPR_U32(ctx, 31, 0x254E88u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x254E80u, 0x254E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E88u;
label_254e88:
    // 0x254e88: 0x96a30028  lhu         $v1, 0x28($s5)
    ctx->pc = 0x254e88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x254e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e90: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x254e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x254e94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254E94u;
    {
        const bool branch_taken_0x254e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E94u;
        // 0x254e98: 0x34624000  ori         $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e94) {
            ctx->pc = 0x254EACu;
            goto label_254eac;
        }
    }
    ctx->pc = 0x254E9Cu;
    // 0x254e9c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x254E9Cu;
    SET_GPR_U32(ctx, 31, 0x254EA4u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x254E9Cu, 0x254EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EA4u;
label_254ea4:
    // 0x254ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254EA4u;
    {
        const bool branch_taken_0x254ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EA4u;
        // 0x254ea8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ea4) {
            ctx->pc = 0x254EB8u;
            goto label_254eb8;
        }
    }
    ctx->pc = 0x254EACu;
label_254eac:
    // 0x254eac: 0xc08c698  jal         func_231A60
    ctx->pc = 0x254EACu;
    SET_GPR_U32(ctx, 31, 0x254EB4u);
    ctx->pc = 0x254EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EACu;
    // 0x254eb0: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x254EACu, 0x254EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EB4u;
label_254eb4:
    // 0x254eb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_254eb8:
    // 0x254eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x254ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ec0: 0xc094cc2  jal         func_253308
    ctx->pc = 0x254EC0u;
    SET_GPR_U32(ctx, 31, 0x254EC8u);
    ctx->pc = 0x254EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EC0u;
    // 0x254ec4: 0x27a70068  addiu       $a3, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253308u;
    goto label_253308;
    ctx->pc = 0x254EC8u;
label_254ec8:
    // 0x254ec8: 0xc095faa  jal         func_257EA8
    ctx->pc = 0x254EC8u;
    SET_GPR_U32(ctx, 31, 0x254ED0u);
    ctx->pc = 0x254ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EC8u;
    // 0x254ecc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA8u, 0x254EC8u, 0x254ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254ED0u;
label_254ed0:
    // 0x254ed0: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x254ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x254ed4: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x254ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x254ed8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x254ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x254edc: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x254edcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_254ee0:
    // 0x254ee0: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x254ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x254ee4: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x254ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x254ee8: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x254ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x254eec: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x254eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x254ef0: 0x1c40005f  bgtz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x254EF0u;
    {
        const bool branch_taken_0x254ef0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x254EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EF0u;
        // 0x254ef4: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ef0) {
            ctx->pc = 0x255070u;
            goto label_255070;
        }
    }
    ctx->pc = 0x254EF8u;
    // 0x254ef8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x254ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x254efc: 0x54400145  bnel        $v0, $zero, . + 4 + (0x145 << 2)
    ctx->pc = 0x254EFCu;
    {
        const bool branch_taken_0x254efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254efc) {
            ctx->pc = 0x254F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254EFCu;
            // 0x254f00: 0xa6a0001e  sh          $zero, 0x1E($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x254F04u;
    // 0x254f04: 0xdea20058  ld          $v0, 0x58($s5)
    ctx->pc = 0x254f04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x254f08: 0xdfa30080  ld          $v1, 0x80($sp)
    ctx->pc = 0x254f08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254f0c: 0x54620141  bnel        $v1, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x254F0Cu;
    {
        const bool branch_taken_0x254f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x254f0c) {
            ctx->pc = 0x254F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F0Cu;
            // 0x254f10: 0xa6a0001e  sh          $zero, 0x1E($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x254F14u;
    // 0x254f14: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x254f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x254f18: 0x24821308  addiu       $v0, $a0, 0x1308
    ctx->pc = 0x254f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x254f1c: 0xdc430168  ld          $v1, 0x168($v0)
    ctx->pc = 0x254f1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x254f20: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x254f20u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x254f24: 0xfc430168  sd          $v1, 0x168($v0)
    ctx->pc = 0x254f24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 360), GPR_U64(ctx, 3));
    // 0x254f28: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x254f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x254f2c: 0x50800139  beql        $a0, $zero, . + 4 + (0x139 << 2)
    ctx->pc = 0x254F2Cu;
    {
        const bool branch_taken_0x254f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x254f2c) {
            ctx->pc = 0x254F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F2Cu;
            // 0x254f30: 0xa6a0001e  sh          $zero, 0x1E($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x254F34u;
    // 0x254f34: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x254f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x254f38: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x254f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x254f3c: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x254f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x254f40: 0x54620134  bnel        $v1, $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x254F40u;
    {
        const bool branch_taken_0x254f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x254f40) {
            ctx->pc = 0x254F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F40u;
            // 0x254f44: 0xa6a0001e  sh          $zero, 0x1E($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x254F48u;
    // 0x254f48: 0x96a2001e  lhu         $v0, 0x1E($s5)
    ctx->pc = 0x254f48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x254f4c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x254f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x254f50: 0x8c641210  lw          $a0, 0x1210($v1)
    ctx->pc = 0x254f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x254f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x254f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x254f58: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x254f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x254f5c: 0xa6a2001e  sh          $v0, 0x1E($s5)
    ctx->pc = 0x254f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x254f60: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x254f60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x254f64: 0x14440039  bne         $v0, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x254F64u;
    {
        const bool branch_taken_0x254f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x254F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F64u;
        // 0x254f68: 0x82102a  slt         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f64) {
            ctx->pc = 0x25504Cu;
            goto label_25504c;
        }
    }
    ctx->pc = 0x254F6Cu;
    // 0x254f6c: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x254f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x254f70: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x254f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x254f74: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x254f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x254f78: 0x96a60024  lhu         $a2, 0x24($s5)
    ctx->pc = 0x254f78u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x254f7c: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x254f7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x254f80: 0x8eb00044  lw          $s0, 0x44($s5)
    ctx->pc = 0x254f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x254f84: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x254f84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x254f88: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x254F88u;
    {
        const bool branch_taken_0x254f88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x254f88) {
            ctx->pc = 0x254F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F88u;
            // 0x254f8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x254F90u;
            goto label_254f90;
        }
    }
    ctx->pc = 0x254F90u;
label_254f90:
    // 0x254f90: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x254f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x254f94: 0x8ca312c0  lw          $v1, 0x12C0($a1)
    ctx->pc = 0x254f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4800)));
    // 0x254f98: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x254f98u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x254f9c: 0x2812  mflo        $a1
    ctx->pc = 0x254f9cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x254fa0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x254FA0u;
    {
        const bool branch_taken_0x254fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FA0u;
        // 0x254fa4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fa0) {
            ctx->pc = 0x254FD4u;
            goto label_254fd4;
        }
    }
    ctx->pc = 0x254FA8u;
    // 0x254fa8: 0x8a82000b  lwl         $v0, 0xB($s4)
    ctx->pc = 0x254fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x254fac: 0x9a820008  lwr         $v0, 0x8($s4)
    ctx->pc = 0x254facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x254fb0: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x254fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x254fb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254fb8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254FB8u;
    {
        const bool branch_taken_0x254fb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x254FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FB8u;
        // 0x254fbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fb8) {
            ctx->pc = 0x254FD4u;
            goto label_254fd4;
        }
    }
    ctx->pc = 0x254FC0u;
    // 0x254fc0: 0xdea20088  ld          $v0, 0x88($s5)
    ctx->pc = 0x254fc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x254fc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254fc8: 0x96a30024  lhu         $v1, 0x24($s5)
    ctx->pc = 0x254fc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x254fcc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x254FCCu;
    {
        const bool branch_taken_0x254fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FCCu;
        // 0x254fd0: 0xa6a0001e  sh          $zero, 0x1E($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fcc) {
            ctx->pc = 0x25505Cu;
            goto label_25505c;
        }
    }
    ctx->pc = 0x254FD4u;
label_254fd4:
    // 0x254fd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x254fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254fd8: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x254fd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x254fdc: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x254fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x254fe0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x254fe0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x254fe4: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x254fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x254fe8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x254fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x254fec: 0xaea40060  sw          $a0, 0x60($s5)
    ctx->pc = 0x254fecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 4));
    // 0x254ff0: 0xa6a0009a  sh          $zero, 0x9A($s5)
    ctx->pc = 0x254ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x254ff4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ff8: 0x96a50024  lhu         $a1, 0x24($s5)
    ctx->pc = 0x254ff8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x254ffc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x254ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255000: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255004: 0xfea20090  sd          $v0, 0x90($s5)
    ctx->pc = 0x255004u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 144), GPR_U64(ctx, 2));
    // 0x255008: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x255008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x25500c: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x25500cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x255010: 0xfea50088  sd          $a1, 0x88($s5)
    ctx->pc = 0x255010u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 5));
    // 0x255014: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x255014u;
    SET_GPR_U32(ctx, 31, 0x25501Cu);
    ctx->pc = 0x255018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255014u;
    // 0x255018: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x255014u, 0x25501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25501Cu;
label_25501c:
    // 0x25501c: 0x96a40024  lhu         $a0, 0x24($s5)
    ctx->pc = 0x25501cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x255020: 0x86a5001e  lh          $a1, 0x1E($s5)
    ctx->pc = 0x255020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x255024: 0xdea30090  ld          $v1, 0x90($s5)
    ctx->pc = 0x255024u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x255028: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x255028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x25502c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x25502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x255030: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x255030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x255034: 0x2012  mflo        $a0
    ctx->pc = 0x255034u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x255038: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x255038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x25503c: 0x184002a0  blez        $v0, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x25503Cu;
    {
        const bool branch_taken_0x25503c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25503Cu;
        // 0x255040: 0xfea30088  sd          $v1, 0x88($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25503c) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x255044u;
    // 0x255044: 0x1000029e  b           . + 4 + (0x29E << 2)
    ctx->pc = 0x255044u;
    {
        const bool branch_taken_0x255044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255044u;
        // 0x255048: 0xaeb00044  sw          $s0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255044) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x25504Cu;
label_25504c:
    // 0x25504c: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x25504Cu;
    {
        const bool branch_taken_0x25504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25504Cu;
        // 0x255050: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25504c) {
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x255054u;
    // 0x255054: 0xdea20088  ld          $v0, 0x88($s5)
    ctx->pc = 0x255054u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x255058: 0x96a30024  lhu         $v1, 0x24($s5)
    ctx->pc = 0x255058u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
label_25505c:
    // 0x25505c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x25505cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x255060: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x255060u;
    SET_GPR_U32(ctx, 31, 0x255068u);
    ctx->pc = 0x255064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255060u;
    // 0x255064: 0xfea20088  sd          $v0, 0x88($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x255060u, 0x255068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255068u;
label_255068:
    // 0x255068: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x255068u;
    {
        const bool branch_taken_0x255068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255068) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x255070u;
label_255070:
    // 0x255070: 0x8c6212c0  lw          $v0, 0x12C0($v1)
    ctx->pc = 0x255070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4800)));
    // 0x255074: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x255074u;
    {
        const bool branch_taken_0x255074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255074u;
        // 0x255078: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255074) {
            ctx->pc = 0x2550B8u;
            goto label_2550b8;
        }
    }
    ctx->pc = 0x25507Cu;
    // 0x25507c: 0x86a3001e  lh          $v1, 0x1E($s5)
    ctx->pc = 0x25507cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x255080: 0x8c441210  lw          $a0, 0x1210($v0)
    ctx->pc = 0x255080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x255084: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x255084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255088: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x255088u;
    {
        const bool branch_taken_0x255088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255088) {
            ctx->pc = 0x25508Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255088u;
            // 0x25508c: 0xa6a0001e  sh          $zero, 0x1E($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2550A8u;
            goto label_2550a8;
        }
    }
    ctx->pc = 0x255090u;
    // 0x255090: 0xdea20088  ld          $v0, 0x88($s5)
    ctx->pc = 0x255090u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x255094: 0xdea30090  ld          $v1, 0x90($s5)
    ctx->pc = 0x255094u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x255098: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x255098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25509c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25509Cu;
    {
        const bool branch_taken_0x25509c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25509c) {
            ctx->pc = 0x2550A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25509Cu;
            // 0x2550a0: 0xfea30088  sd          $v1, 0x88($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2550A4u;
            goto label_2550a4;
        }
    }
    ctx->pc = 0x2550A4u;
label_2550a4:
    // 0x2550a4: 0xa6a0001e  sh          $zero, 0x1E($s5)
    ctx->pc = 0x2550a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
label_2550a8:
    // 0x2550a8: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x2550a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2550ac: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x2550acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2550b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2550B0u;
    {
        const bool branch_taken_0x2550b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2550B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550B0u;
        // 0x2550b4: 0x8ea40080  lw          $a0, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550b0) {
            ctx->pc = 0x255130u;
            goto label_255130;
        }
    }
    ctx->pc = 0x2550B8u;
label_2550b8:
    // 0x2550b8: 0x86a3001e  lh          $v1, 0x1E($s5)
    ctx->pc = 0x2550b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x2550bc: 0x8c441210  lw          $a0, 0x1210($v0)
    ctx->pc = 0x2550bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x2550c0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2550c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2550c4: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2550C4u;
    {
        const bool branch_taken_0x2550c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2550c4) {
            ctx->pc = 0x2550C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2550C4u;
            // 0x2550c8: 0x8ea40080  lw          $a0, 0x80($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255130u;
            goto label_255130;
        }
    }
    ctx->pc = 0x2550CCu;
    // 0x2550cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2550ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550d0: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x2550D0u;
    SET_GPR_U32(ctx, 31, 0x2550D8u);
    ctx->pc = 0x2550D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550D0u;
    // 0x2550d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255FC0u, 0x2550D0u, 0x2550D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550D8u;
label_2550d8:
    // 0x2550d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2550D8u;
    {
        const bool branch_taken_0x2550d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2550DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550D8u;
        // 0x2550dc: 0x8ea40080  lw          $a0, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550d8) {
            ctx->pc = 0x255128u;
            goto label_255128;
        }
    }
    ctx->pc = 0x2550E0u;
    // 0x2550e0: 0xdea30090  ld          $v1, 0x90($s5)
    ctx->pc = 0x2550e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x2550e4: 0xfea30088  sd          $v1, 0x88($s5)
    ctx->pc = 0x2550e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 3));
    // 0x2550e8: 0x8a82000b  lwl         $v0, 0xB($s4)
    ctx->pc = 0x2550e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2550ec: 0x9a820008  lwr         $v0, 0x8($s4)
    ctx->pc = 0x2550ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2550f0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2550f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2550f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2550f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2550f8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x2550f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2550fc: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2550fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x255100: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x255100u;
    {
        const bool branch_taken_0x255100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255100) {
            ctx->pc = 0x255104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255100u;
            // 0x255104: 0xa6a0001e  sh          $zero, 0x1E($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255118u;
            goto label_255118;
        }
    }
    ctx->pc = 0x255108u;
    // 0x255108: 0x96a20024  lhu         $v0, 0x24($s5)
    ctx->pc = 0x255108u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x25510c: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x25510cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x255110: 0xfea20088  sd          $v0, 0x88($s5)
    ctx->pc = 0x255110u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 2));
    // 0x255114: 0xa6a0001e  sh          $zero, 0x1E($s5)
    ctx->pc = 0x255114u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 0));
label_255118:
    // 0x255118: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x255118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x25511c: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x25511cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x255120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255120u;
    {
        const bool branch_taken_0x255120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255120u;
        // 0x255124: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255120) {
            ctx->pc = 0x255134u;
            goto label_255134;
        }
    }
    ctx->pc = 0x255128u;
label_255128:
    // 0x255128: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x255128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x25512c: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x25512cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_255130:
    // 0x255130: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x255130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_255134:
    // 0x255134: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255134u;
    {
        const bool branch_taken_0x255134 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255134u;
        // 0x255138: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255134) {
            ctx->pc = 0x255150u;
            goto label_255150;
        }
    }
    ctx->pc = 0x25513Cu;
    // 0x25513c: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x25513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x255140: 0xdc620170  ld          $v0, 0x170($v1)
    ctx->pc = 0x255140u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x255144: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x255144u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x255148: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x255148u;
    {
        const bool branch_taken_0x255148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255148u;
        // 0x25514c: 0xfc620170  sd          $v0, 0x170($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255148) {
            ctx->pc = 0x255984u;
            goto label_255984;
        }
    }
    ctx->pc = 0x255150u;
label_255150:
    // 0x255150: 0x8ea50040  lw          $a1, 0x40($s5)
    ctx->pc = 0x255150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x255154: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x255154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x255158: 0x24431308  addiu       $v1, $v0, 0x1308
    ctx->pc = 0x255158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x25515c: 0xdc640178  ld          $a0, 0x178($v1)
    ctx->pc = 0x25515cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x255160: 0xc59823  subu        $s3, $a2, $a1
    ctx->pc = 0x255160u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x255164: 0xdc620180  ld          $v0, 0x180($v1)
    ctx->pc = 0x255164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x255168: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x255168u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25516c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25516cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255170: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x255170u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x255174: 0x5e102d  daddu       $v0, $v0, $fp
    ctx->pc = 0x255174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 30));
    // 0x255178: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x255178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25517c: 0xfc620180  sd          $v0, 0x180($v1)
    ctx->pc = 0x25517cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 384), GPR_U64(ctx, 2));
    // 0x255180: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x255180u;
    {
        const bool branch_taken_0x255180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x255184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255180u;
        // 0x255184: 0xfc640178  sd          $a0, 0x178($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 376), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255180) {
            ctx->pc = 0x2551A8u;
            goto label_2551a8;
        }
    }
    ctx->pc = 0x255188u;
    // 0x255188: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x255188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25518c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25518Cu;
    {
        const bool branch_taken_0x25518c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25518Cu;
        // 0x255190: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25518c) {
            ctx->pc = 0x2551A8u;
            goto label_2551a8;
        }
    }
    ctx->pc = 0x255194u;
    // 0x255194: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255198: 0x8c451528  lw          $a1, 0x1528($v0)
    ctx->pc = 0x255198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    // 0x25519c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x25519cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2551a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2551A0u;
    {
        const bool branch_taken_0x2551a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551A0u;
        // 0x2551a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551a0) {
            ctx->pc = 0x2551CCu;
            goto label_2551cc;
        }
    }
    ctx->pc = 0x2551A8u;
label_2551a8:
    // 0x2551a8: 0x86a5009a  lh          $a1, 0x9A($s5)
    ctx->pc = 0x2551a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 154)));
    // 0x2551ac: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2551ACu;
    {
        const bool branch_taken_0x2551ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2551ac) {
            ctx->pc = 0x2551D4u;
            goto label_2551d4;
        }
    }
    ctx->pc = 0x2551B4u;
    // 0x2551b4: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x2551b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2551b8: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x2551b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2551bc: 0x8ea2009c  lw          $v0, 0x9C($s5)
    ctx->pc = 0x2551bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x2551c0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2551c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2551c4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2551C4u;
    {
        const bool branch_taken_0x2551c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2551C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551C4u;
        // 0x2551c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551c4) {
            ctx->pc = 0x2551DCu;
            goto label_2551dc;
        }
    }
    ctx->pc = 0x2551CCu;
label_2551cc:
    // 0x2551cc: 0xc0957a6  jal         func_255E98
    ctx->pc = 0x2551CCu;
    SET_GPR_U32(ctx, 31, 0x2551D4u);
    ctx->pc = 0x255E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E98u, 0x2551CCu, 0x2551D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551D4u;
label_2551d4:
    // 0x2551d4: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x2551d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2551d8: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x2551d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_2551dc:
    // 0x2551dc: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x2551dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x2551e0: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2551E0u;
    {
        const bool branch_taken_0x2551e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2551e0) {
            ctx->pc = 0x2551E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551E0u;
            // 0x2551e4: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2551F8u;
            goto label_2551f8;
        }
    }
    ctx->pc = 0x2551E8u;
    // 0x2551e8: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x2551e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x2551ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2551ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2551f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2551F0u;
    {
        const bool branch_taken_0x2551f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551F0u;
        // 0x2551f4: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551f0) {
            ctx->pc = 0x255214u;
            goto label_255214;
        }
    }
    ctx->pc = 0x2551F8u;
label_2551f8:
    // 0x2551f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2551F8u;
    {
        const bool branch_taken_0x2551f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2551f8) {
            ctx->pc = 0x2551FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551F8u;
            // 0x2551fc: 0xdea20088  ld          $v0, 0x88($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255218u;
            goto label_255218;
        }
    }
    ctx->pc = 0x255200u;
    // 0x255200: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x255200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x255204: 0x86a4001c  lh          $a0, 0x1C($s5)
    ctx->pc = 0x255204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x255208: 0x8c43f990  lw          $v1, -0x670($v0)
    ctx->pc = 0x255208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965648)));
    // 0x25520c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255210: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x255210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_255214:
    // 0x255214: 0xdea20088  ld          $v0, 0x88($s5)
    ctx->pc = 0x255214u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 136)));
label_255218:
    // 0x255218: 0xdea30090  ld          $v1, 0x90($s5)
    ctx->pc = 0x255218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x25521c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x25521cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255220: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x255220u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x255224: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x255224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x255228: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x25522c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x25522cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x255230: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x255230u;
    {
        const bool branch_taken_0x255230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255230u;
        // 0x255234: 0x96a60024  lhu         $a2, 0x24($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255230) {
            ctx->pc = 0x255250u;
            goto label_255250;
        }
    }
    ctx->pc = 0x255238u;
    // 0x255238: 0xc61018  mult        $v0, $a2, $a2
    ctx->pc = 0x255238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25523c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25523Cu;
    {
        const bool branch_taken_0x25523c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25523c) {
            ctx->pc = 0x255240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25523Cu;
            // 0x255240: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x255244u;
            goto label_255244;
        }
    }
    ctx->pc = 0x255244u;
label_255244:
    // 0x255244: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x255244u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x255248: 0x1012  mflo        $v0
    ctx->pc = 0x255248u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x25524c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25524cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255250:
    // 0x255250: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x255250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x255254: 0x8c6212c0  lw          $v0, 0x12C0($v1)
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4800)));
    // 0x255258: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x255258u;
    {
        const bool branch_taken_0x255258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255258) {
            ctx->pc = 0x25525Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255258u;
            // 0x25525c: 0x92a500b4  lbu         $a1, 0xB4($s5) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25527Cu;
            goto label_25527c;
        }
    }
    ctx->pc = 0x255260u;
    // 0x255260: 0x8a82000b  lwl         $v0, 0xB($s4)
    ctx->pc = 0x255260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x255264: 0x9a820008  lwr         $v0, 0x8($s4)
    ctx->pc = 0x255264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x255268: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x255268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x25526c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25526cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255270: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x255270u;
    {
        const bool branch_taken_0x255270 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x255270) {
            ctx->pc = 0x255274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255270u;
            // 0x255274: 0xde430080  ld          $v1, 0x80($s2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2552A0u;
            goto label_2552a0;
        }
    }
    ctx->pc = 0x255278u;
    // 0x255278: 0x92a500b4  lbu         $a1, 0xB4($s5)
    ctx->pc = 0x255278u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
label_25527c:
    // 0x25527c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x255280: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x255280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x255284: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x255284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x255288: 0x43202b  sltu        $a0, $v0, $v1
    ctx->pc = 0x255288u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25528c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x25528cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x255290: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255294: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255298: 0xfea20088  sd          $v0, 0x88($s5)
    ctx->pc = 0x255298u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 2));
    // 0x25529c: 0xde430080  ld          $v1, 0x80($s2)
    ctx->pc = 0x25529cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 128)));
label_2552a0:
    // 0x2552a0: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2552a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2552a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2552A4u;
    {
        const bool branch_taken_0x2552a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552A4u;
        // 0x2552a8: 0x26500080  addiu       $s0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552a4) {
            ctx->pc = 0x2552D0u;
            goto label_2552d0;
        }
    }
    ctx->pc = 0x2552ACu;
    // 0x2552ac: 0xdea20058  ld          $v0, 0x58($s5)
    ctx->pc = 0x2552acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x2552b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2552b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2552b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2552b8: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2552b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2552bc: 0xfea20058  sd          $v0, 0x58($s5)
    ctx->pc = 0x2552bcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 2));
    // 0x2552c0: 0xc08c4e8  jal         func_2313A0
    ctx->pc = 0x2552C0u;
    SET_GPR_U32(ctx, 31, 0x2552C8u);
    ctx->pc = 0x2552C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552C0u;
    // 0x2552c4: 0x8e450080  lw          $a1, 0x80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2313A0u, 0x2552C0u, 0x2552C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552C8u;
label_2552c8:
    // 0x2552c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2552C8u;
    {
        const bool branch_taken_0x2552c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552C8u;
        // 0x2552cc: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552c8) {
            ctx->pc = 0x2552F0u;
            goto label_2552f0;
        }
    }
    ctx->pc = 0x2552D0u;
label_2552d0:
    // 0x2552d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2552d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2552d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552d8: 0xc08c4e8  jal         func_2313A0
    ctx->pc = 0x2552D8u;
    SET_GPR_U32(ctx, 31, 0x2552E0u);
    ctx->pc = 0x2552DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552D8u;
    // 0x2552dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2313A0u, 0x2552D8u, 0x2552E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552E0u;
label_2552e0:
    // 0x2552e0: 0xdea20058  ld          $v0, 0x58($s5)
    ctx->pc = 0x2552e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x2552e4: 0x5e102f  dsubu       $v0, $v0, $fp
    ctx->pc = 0x2552e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 30));
    // 0x2552e8: 0xfea20058  sd          $v0, 0x58($s5)
    ctx->pc = 0x2552e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 2));
    // 0x2552ec: 0x964200b0  lhu         $v0, 0xB0($s2)
    ctx->pc = 0x2552ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
label_2552f0:
    // 0x2552f0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2552f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2552f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2552F4u;
    {
        const bool branch_taken_0x2552f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552F4u;
        // 0x2552f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552f4) {
            ctx->pc = 0x255304u;
            goto label_255304;
        }
    }
    ctx->pc = 0x2552FCu;
    // 0x2552fc: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x2552FCu;
    SET_GPR_U32(ctx, 31, 0x255304u);
    ctx->pc = 0x255300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552FCu;
    // 0x255300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x2552FCu, 0x255304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255304u;
label_255304:
    // 0x255304: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x255304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x255308: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x255308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x25530c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x25530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x255310: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x255310u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x255314: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x255314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255318: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x255318u;
    {
        const bool branch_taken_0x255318 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255318u;
        // 0x25531c: 0xaea30040  sw          $v1, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255318) {
            ctx->pc = 0x255324u;
            goto label_255324;
        }
    }
    ctx->pc = 0x255320u;
    // 0x255320: 0xaea30044  sw          $v1, 0x44($s5)
    ctx->pc = 0x255320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
label_255324:
    // 0x255324: 0x86a30018  lh          $v1, 0x18($s5)
    ctx->pc = 0x255324u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x255328: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x255328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25532c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x25532Cu;
    {
        const bool branch_taken_0x25532c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25532Cu;
        // 0x255330: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25532c) {
            ctx->pc = 0x2553B0u;
            goto label_2553b0;
        }
    }
    ctx->pc = 0x255334u;
    // 0x255334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255334u;
    {
        const bool branch_taken_0x255334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255334u;
        // 0x255338: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255334) {
            ctx->pc = 0x25534Cu;
            goto label_25534c;
        }
    }
    ctx->pc = 0x25533Cu;
    // 0x25533c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25533Cu;
    {
        const bool branch_taken_0x25533c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25533Cu;
        // 0x255340: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25533c) {
            ctx->pc = 0x255368u;
            goto label_255368;
        }
    }
    ctx->pc = 0x255344u;
    // 0x255344: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x255344u;
    {
        const bool branch_taken_0x255344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255344) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x25534Cu;
label_25534c:
    // 0x25534c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255350: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x255350u;
    {
        const bool branch_taken_0x255350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255350u;
        // 0x255354: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255350) {
            ctx->pc = 0x2553E4u;
            goto label_2553e4;
        }
    }
    ctx->pc = 0x255358u;
    // 0x255358: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x255358u;
    {
        const bool branch_taken_0x255358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255358u;
        // 0x25535c: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255358) {
            ctx->pc = 0x255400u;
            goto label_255400;
        }
    }
    ctx->pc = 0x255360u;
    // 0x255360: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x255360u;
    {
        const bool branch_taken_0x255360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255360) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x255368u;
label_255368:
    // 0x255368: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x255368u;
    {
        const bool branch_taken_0x255368 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x255368) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x255370u;
    // 0x255370: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x255370u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x255374: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x255374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x255378: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x255378u;
    {
        const bool branch_taken_0x255378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255378u;
        // 0x25537c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255378) {
            ctx->pc = 0x2553A8u;
            goto label_2553a8;
        }
    }
    ctx->pc = 0x255380u;
    // 0x255380: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x255380u;
    SET_GPR_U32(ctx, 31, 0x255388u);
    ctx->pc = 0x255384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255380u;
    // 0x255384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304F0u, 0x255380u, 0x255388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255388u;
label_255388:
    // 0x255388: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x255388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25538c: 0x8c441580  lw          $a0, 0x1580($v0)
    ctx->pc = 0x25538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5504)));
    // 0x255390: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255390u;
    {
        const bool branch_taken_0x255390 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x255394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255390u;
        // 0x255394: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255390) {
            ctx->pc = 0x2553A4u;
            goto label_2553a4;
        }
    }
    ctx->pc = 0x255398u;
    // 0x255398: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x255398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x25539c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2553a0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x2553a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_2553a4:
    // 0x2553a4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2553a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2553a8:
    // 0x2553a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2553A8u;
    {
        const bool branch_taken_0x2553a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2553ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553A8u;
        // 0x2553ac: 0xa6a20018  sh          $v0, 0x18($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553a8) {
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x2553B0u;
label_2553b0:
    // 0x2553b0: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2553B0u;
    {
        const bool branch_taken_0x2553b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2553B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553B0u;
        // 0x2553b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553b0) {
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x2553B8u;
    // 0x2553b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2553b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553bc: 0xc096a90  jal         func_25AA40
    ctx->pc = 0x2553BCu;
    SET_GPR_U32(ctx, 31, 0x2553C4u);
    ctx->pc = 0x2553C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553BCu;
    // 0x2553c0: 0xa6a20018  sh          $v0, 0x18($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA40u, 0x2553BCu, 0x2553C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553C4u;
label_2553c4:
    // 0x2553c4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2553c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2553c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2553c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553cc: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x2553ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x2553d0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2553d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2553d4: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x2553D4u;
    SET_GPR_U32(ctx, 31, 0x2553DCu);
    ctx->pc = 0x2553D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553D4u;
    // 0x2553d8: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304F0u, 0x2553D4u, 0x2553DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553DCu;
label_2553dc:
    // 0x2553dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2553DCu;
    {
        const bool branch_taken_0x2553dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2553E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553DCu;
        // 0x2553e0: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553dc) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x2553E4u;
label_2553e4:
    // 0x2553e4: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x2553E4u;
    {
        const bool branch_taken_0x2553e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2553E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553E4u;
        // 0x2553e8: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553e4) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x2553ECu;
label_2553ec:
    // 0x2553ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2553ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2553f0:
    // 0x2553f0: 0xc0966a2  jal         func_259A88
    ctx->pc = 0x2553F0u;
    SET_GPR_U32(ctx, 31, 0x2553F8u);
    ctx->pc = 0x259A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259A88u, 0x2553F0u, 0x2553F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553F8u;
label_2553f8:
    // 0x2553f8: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x2553F8u;
    {
        const bool branch_taken_0x2553f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2553FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553F8u;
        // 0x2553fc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553f8) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x255400u;
label_255400:
    // 0x255400: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x255400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x255404: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x255404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x255408: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x255408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x25540c: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x25540Cu;
    {
        const bool branch_taken_0x25540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25540Cu;
        // 0x255410: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25540c) {
            ctx->pc = 0x255984u;
            goto label_255984;
        }
    }
    ctx->pc = 0x255414u;
label_255414:
    // 0x255414: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x255414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_255418:
    // 0x255418: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x255418u;
    {
        const bool branch_taken_0x255418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255418u;
        // 0x25541c: 0x32c20020  andi        $v0, $s6, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255418) {
            ctx->pc = 0x255500u;
            goto label_255500;
        }
    }
    ctx->pc = 0x255420u;
    // 0x255420: 0x8a840007  lwl         $a0, 0x7($s4)
    ctx->pc = 0x255420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x255424: 0x9a840004  lwr         $a0, 0x4($s4)
    ctx->pc = 0x255424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x255428: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x25542c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x25542cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255430: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x255430u;
    {
        const bool branch_taken_0x255430 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x255434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255430u;
        // 0x255434: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255430) {
            ctx->pc = 0x255480u;
            goto label_255480;
        }
    }
    ctx->pc = 0x255438u;
    // 0x255438: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255438u;
    {
        const bool branch_taken_0x255438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255438u;
        // 0x25543c: 0x8ea30050  lw          $v1, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255438) {
            ctx->pc = 0x25545Cu;
            goto label_25545c;
        }
    }
    ctx->pc = 0x255440u;
    // 0x255440: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x255440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x255444: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x255444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x255448: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x255448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25544c: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25544Cu;
    {
        const bool branch_taken_0x25544c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x255450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25544Cu;
        // 0x255450: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25544c) {
            ctx->pc = 0x255480u;
            goto label_255480;
        }
    }
    ctx->pc = 0x255454u;
    // 0x255454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255454u;
    {
        const bool branch_taken_0x255454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255454) {
            ctx->pc = 0x255464u;
            goto label_255464;
        }
    }
    ctx->pc = 0x25545Cu;
label_25545c:
    // 0x25545c: 0x8a86000b  lwl         $a2, 0xB($s4)
    ctx->pc = 0x25545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x255460: 0x9a860008  lwr         $a2, 0x8($s4)
    ctx->pc = 0x255460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_255464:
    // 0x255464: 0x14660026  bne         $v1, $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x255464u;
    {
        const bool branch_taken_0x255464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x255468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255464u;
        // 0x255468: 0x32c20020  andi        $v0, $s6, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255464) {
            ctx->pc = 0x255500u;
            goto label_255500;
        }
    }
    ctx->pc = 0x25546Cu;
    // 0x25546c: 0xdea20058  ld          $v0, 0x58($s5)
    ctx->pc = 0x25546cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x255470: 0xdfa50080  ld          $a1, 0x80($sp)
    ctx->pc = 0x255470u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255474: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x255474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x255478: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x255478u;
    {
        const bool branch_taken_0x255478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255478u;
        // 0x25547c: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255478) {
            ctx->pc = 0x2554FCu;
            goto label_2554fc;
        }
    }
    ctx->pc = 0x255480u;
label_255480:
    // 0x255480: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x255480u;
    {
        const bool branch_taken_0x255480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255480u;
        // 0x255484: 0xdfa30080  ld          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255480) {
            ctx->pc = 0x2554C4u;
            goto label_2554c4;
        }
    }
    ctx->pc = 0x255488u;
    // 0x255488: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x255488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x25548c: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x25548cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x255490: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255494: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x255494u;
    {
        const bool branch_taken_0x255494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x255498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255494u;
        // 0x255498: 0xdfa30080  ld          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255494) {
            ctx->pc = 0x2554C4u;
            goto label_2554c4;
        }
    }
    ctx->pc = 0x25549Cu;
    // 0x25549c: 0xdea20058  ld          $v0, 0x58($s5)
    ctx->pc = 0x25549cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x2554a0: 0xdfa60080  ld          $a2, 0x80($sp)
    ctx->pc = 0x2554a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2554a4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2554a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2554a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2554A8u;
    {
        const bool branch_taken_0x2554a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2554ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554A8u;
        // 0x2554ac: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554a8) {
            ctx->pc = 0x2554C4u;
            goto label_2554c4;
        }
    }
    ctx->pc = 0x2554B0u;
    // 0x2554b0: 0x24431308  addiu       $v1, $v0, 0x1308
    ctx->pc = 0x2554b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x2554b4: 0xdc620188  ld          $v0, 0x188($v1)
    ctx->pc = 0x2554b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x2554b8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2554b8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2554bc: 0xfc620188  sd          $v0, 0x188($v1)
    ctx->pc = 0x2554bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 392), GPR_U64(ctx, 2));
    // 0x2554c0: 0xdfa30080  ld          $v1, 0x80($sp)
    ctx->pc = 0x2554c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2554c4:
    // 0x2554c4: 0xdea200a8  ld          $v0, 0xA8($s5)
    ctx->pc = 0x2554c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x2554c8: 0xfea30058  sd          $v1, 0x58($s5)
    ctx->pc = 0x2554c8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
    // 0x2554cc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2554ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2554d0: 0x8a840007  lwl         $a0, 0x7($s4)
    ctx->pc = 0x2554d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2554d4: 0x9a840004  lwr         $a0, 0x4($s4)
    ctx->pc = 0x2554d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2554d8: 0xaea4004c  sw          $a0, 0x4C($s5)
    ctx->pc = 0x2554d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 4));
    // 0x2554dc: 0x8a83000b  lwl         $v1, 0xB($s4)
    ctx->pc = 0x2554dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2554e0: 0x9a830008  lwr         $v1, 0x8($s4)
    ctx->pc = 0x2554e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2554e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2554E4u;
    {
        const bool branch_taken_0x2554e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2554E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554E4u;
        // 0x2554e8: 0xaea30050  sw          $v1, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554e4) {
            ctx->pc = 0x2554F4u;
            goto label_2554f4;
        }
    }
    ctx->pc = 0x2554ECu;
    // 0x2554ec: 0xdfa40080  ld          $a0, 0x80($sp)
    ctx->pc = 0x2554ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2554f0: 0xfea400a8  sd          $a0, 0xA8($s5)
    ctx->pc = 0x2554f0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 168), GPR_U64(ctx, 4));
label_2554f4:
    // 0x2554f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2554f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2554f8: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x2554f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_2554fc:
    // 0x2554fc: 0x32c20020  andi        $v0, $s6, 0x20
    ctx->pc = 0x2554fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32);
label_255500:
    // 0x255500: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x255500u;
    {
        const bool branch_taken_0x255500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255500) {
            ctx->pc = 0x255504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255500u;
            // 0x255504: 0x8ea30070  lw          $v1, 0x70($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255628u;
            goto label_255628;
        }
    }
    ctx->pc = 0x255508u;
    // 0x255508: 0x92840013  lbu         $a0, 0x13($s4)
    ctx->pc = 0x255508u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x25550c: 0x92850012  lbu         $a1, 0x12($s4)
    ctx->pc = 0x25550cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x255510: 0x41238  dsll        $v0, $a0, 8
    ctx->pc = 0x255510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 8);
    // 0x255514: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x255514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x255518: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x255518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25551c: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x25551cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x255520: 0x10e00040  beqz        $a3, . + 4 + (0x40 << 2)
    ctx->pc = 0x255520u;
    {
        const bool branch_taken_0x255520 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x255524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255520u;
        // 0x255524: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255520) {
            ctx->pc = 0x255624u;
            goto label_255624;
        }
    }
    ctx->pc = 0x255528u;
    // 0x255528: 0x86a30018  lh          $v1, 0x18($s5)
    ctx->pc = 0x255528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x25552c: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25552Cu;
    {
        const bool branch_taken_0x25552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25552Cu;
        // 0x255530: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25552c) {
            ctx->pc = 0x255624u;
            goto label_255624;
        }
    }
    ctx->pc = 0x255534u;
    // 0x255534: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x255534u;
    {
        const bool branch_taken_0x255534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255534) {
            ctx->pc = 0x255538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255534u;
            // 0x255538: 0xde420048  ld          $v0, 0x48($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25554Cu;
            goto label_25554c;
        }
    }
    ctx->pc = 0x25553Cu;
    // 0x25553c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x255540: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x255540u;
    {
        const bool branch_taken_0x255540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255540) {
            ctx->pc = 0x255544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255540u;
            // 0x255544: 0x8ea30070  lw          $v1, 0x70($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255628u;
            goto label_255628;
        }
    }
    ctx->pc = 0x255548u;
    // 0x255548: 0xde420048  ld          $v0, 0x48($s2)
    ctx->pc = 0x255548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 72)));
label_25554c:
    // 0x25554c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x25554cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x255550: 0xc2102d  daddu       $v0, $a2, $v0
    ctx->pc = 0x255550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    // 0x255554: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x255554u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x255558: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x255558u;
    {
        const bool branch_taken_0x255558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255558u;
        // 0x25555c: 0x2402ffdf  addiu       $v0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255558) {
            ctx->pc = 0x255570u;
            goto label_255570;
        }
    }
    ctx->pc = 0x255560u;
    // 0x255560: 0xa2800012  sb          $zero, 0x12($s4)
    ctx->pc = 0x255560u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x255564: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x255564u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x255568: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x255568u;
    {
        const bool branch_taken_0x255568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255568u;
        // 0x25556c: 0xa2800013  sb          $zero, 0x13($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255568) {
            ctx->pc = 0x255638u;
            goto label_255638;
        }
    }
    ctx->pc = 0x255570u;
label_255570:
    // 0x255570: 0x8a830007  lwl         $v1, 0x7($s4)
    ctx->pc = 0x255570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x255574: 0x9a830004  lwr         $v1, 0x4($s4)
    ctx->pc = 0x255574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x255578: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x255578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x25557c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25557cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x255580: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x255580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255584: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x255584u;
    {
        const bool branch_taken_0x255584 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255584u;
        // 0x255588: 0x41238  dsll        $v0, $a0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255584) {
            ctx->pc = 0x2555E0u;
            goto label_2555e0;
        }
    }
    ctx->pc = 0x25558Cu;
    // 0x25558c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x25558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x255590: 0xaea30074  sw          $v1, 0x74($s5)
    ctx->pc = 0x255590u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
    // 0x255594: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x255594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255598: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25559c: 0xde430048  ld          $v1, 0x48($s2)
    ctx->pc = 0x25559cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2555a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2555a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2555a4: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2555a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2555a8: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x2555a8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
    // 0x2555ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2555ACu;
    {
        const bool branch_taken_0x2555ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2555B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555ACu;
        // 0x2555b0: 0xfe430040  sd          $v1, 0x40($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555ac) {
            ctx->pc = 0x2555C0u;
            goto label_2555c0;
        }
    }
    ctx->pc = 0x2555B4u;
    // 0x2555b4: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2555b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2555b8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2555b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2555bc: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x2555bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_2555c0:
    // 0x2555c0: 0xc08c02c  jal         func_2300B0
    ctx->pc = 0x2555C0u;
    SET_GPR_U32(ctx, 31, 0x2555C8u);
    ctx->pc = 0x2555C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555C0u;
    // 0x2555c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B0u, 0x2555C0u, 0x2555C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555C8u;
label_2555c8:
    // 0x2555c8: 0x92a200b0  lbu         $v0, 0xB0($s5)
    ctx->pc = 0x2555c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2555cc: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x2555ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x2555d0: 0xa2a200b0  sb          $v0, 0xB0($s5)
    ctx->pc = 0x2555d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 176), (uint8_t)GPR_U32(ctx, 2));
    // 0x2555d4: 0x92850012  lbu         $a1, 0x12($s4)
    ctx->pc = 0x2555d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x2555d8: 0x92840013  lbu         $a0, 0x13($s4)
    ctx->pc = 0x2555d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x2555dc: 0x41238  dsll        $v0, $a0, 8
    ctx->pc = 0x2555dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 8);
label_2555e0:
    // 0x2555e0: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x2555e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2555e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2555e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2555e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2555e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2555ec: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2555ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2555f0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2555F0u;
    {
        const bool branch_taken_0x2555f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2555F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555F0u;
        // 0x2555f4: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555f0) {
            ctx->pc = 0x25563Cu;
            goto label_25563c;
        }
    }
    ctx->pc = 0x2555F8u;
    // 0x2555f8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x2555f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2555fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2555fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x255600: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x255600u;
    {
        const bool branch_taken_0x255600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255600u;
        // 0x255604: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255600) {
            ctx->pc = 0x25563Cu;
            goto label_25563c;
        }
    }
    ctx->pc = 0x255608u;
    // 0x255608: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x255608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x25560c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x255610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255614: 0xc095776  jal         func_255DD8
    ctx->pc = 0x255614u;
    SET_GPR_U32(ctx, 31, 0x25561Cu);
    ctx->pc = 0x255618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255614u;
    // 0x255618: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255DD8u, 0x255614u, 0x25561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25561Cu;
label_25561c:
    // 0x25561c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25561Cu;
    {
        const bool branch_taken_0x25561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25561Cu;
        // 0x255620: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25561c) {
            ctx->pc = 0x25563Cu;
            goto label_25563c;
        }
    }
    ctx->pc = 0x255624u;
label_255624:
    // 0x255624: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x255624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_255628:
    // 0x255628: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x255628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x25562c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x25562cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255630: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x255630u;
    {
        const bool branch_taken_0x255630 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x255630) {
            ctx->pc = 0x255634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255630u;
            // 0x255634: 0xaea30074  sw          $v1, 0x74($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255638u;
            goto label_255638;
        }
    }
    ctx->pc = 0x255638u;
label_255638:
    // 0x255638: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x255638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_25563c:
    // 0x25563c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25563Cu;
    {
        const bool branch_taken_0x25563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25563c) {
            ctx->pc = 0x255640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25563Cu;
            // 0x255640: 0x86a30018  lh          $v1, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255654u;
            goto label_255654;
        }
    }
    ctx->pc = 0x255644u;
    // 0x255644: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x255644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x255648: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x255648u;
    {
        const bool branch_taken_0x255648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255648) {
            ctx->pc = 0x255818u;
            goto label_255818;
        }
    }
    ctx->pc = 0x255650u;
    // 0x255650: 0x86a30018  lh          $v1, 0x18($s5)
    ctx->pc = 0x255650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
label_255654:
    // 0x255654: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x255654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x255658: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x255658u;
    {
        const bool branch_taken_0x255658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255658u;
        // 0x25565c: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255658) {
            ctx->pc = 0x255818u;
            goto label_255818;
        }
    }
    ctx->pc = 0x255660u;
    // 0x255660: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255660u;
    {
        const bool branch_taken_0x255660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255660u;
        // 0x255664: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255660) {
            ctx->pc = 0x255670u;
            goto label_255670;
        }
    }
    ctx->pc = 0x255668u;
    // 0x255668: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x255668u;
    {
        const bool branch_taken_0x255668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255668) {
            ctx->pc = 0x255818u;
            goto label_255818;
        }
    }
    ctx->pc = 0x255670u;
label_255670:
    // 0x255670: 0xc08c682  jal         func_231A08
    ctx->pc = 0x255670u;
    SET_GPR_U32(ctx, 31, 0x255678u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x255670u, 0x255678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255678u;
label_255678:
    // 0x255678: 0x96a30028  lhu         $v1, 0x28($s5)
    ctx->pc = 0x255678u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x25567c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25567cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255680: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x255680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x255684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255684u;
    {
        const bool branch_taken_0x255684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255684u;
        // 0x255688: 0x34624000  ori         $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255684) {
            ctx->pc = 0x25569Cu;
            goto label_25569c;
        }
    }
    ctx->pc = 0x25568Cu;
    // 0x25568c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25568Cu;
    SET_GPR_U32(ctx, 31, 0x255694u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25568Cu, 0x255694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255694u;
label_255694:
    // 0x255694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255694u;
    {
        const bool branch_taken_0x255694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255694) {
            ctx->pc = 0x2556A4u;
            goto label_2556a4;
        }
    }
    ctx->pc = 0x25569Cu;
label_25569c:
    // 0x25569c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25569Cu;
    SET_GPR_U32(ctx, 31, 0x2556A4u);
    ctx->pc = 0x2556A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25569Cu;
    // 0x2556a0: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25569Cu, 0x2556A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2556A4u;
label_2556a4:
    // 0x2556a4: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x2556a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2556a8: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x2556a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2556ac: 0x8eaa0070  lw          $t2, 0x70($s5)
    ctx->pc = 0x2556acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2556b0: 0x144a004a  bne         $v0, $t2, . + 4 + (0x4A << 2)
    ctx->pc = 0x2556B0u;
    {
        const bool branch_taken_0x2556b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x2556B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556B0u;
        // 0x2556b4: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556b0) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x2556B8u;
    // 0x2556b8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2556bc: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2556BCu;
    {
        const bool branch_taken_0x2556bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2556C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556BCu;
        // 0x2556c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556bc) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x2556C4u;
    // 0x2556c4: 0x86a30018  lh          $v1, 0x18($s5)
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2556c8: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2556C8u;
    {
        const bool branch_taken_0x2556c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2556c8) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x2556D0u;
    // 0x2556d0: 0x96a40028  lhu         $a0, 0x28($s5)
    ctx->pc = 0x2556d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x2556d4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2556d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2556d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2556D8u;
    {
        const bool branch_taken_0x2556d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2556DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556D8u;
        // 0x2556dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556d8) {
            ctx->pc = 0x255700u;
            goto label_255700;
        }
    }
    ctx->pc = 0x2556E0u;
    // 0x2556e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2556e4: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x2556e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
    // 0x2556e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2556E8u;
    {
        const bool branch_taken_0x2556e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556E8u;
        // 0x2556ec: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556e8) {
            ctx->pc = 0x255710u;
            goto label_255710;
        }
    }
    ctx->pc = 0x2556F0u;
    // 0x2556f0: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2556f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2556f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2556f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2556f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2556F8u;
    {
        const bool branch_taken_0x2556f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556F8u;
        // 0x2556fc: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556f8) {
            ctx->pc = 0x25570Cu;
            goto label_25570c;
        }
    }
    ctx->pc = 0x255700u;
label_255700:
    // 0x255700: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x255700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x255704: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x255704u;
    {
        const bool branch_taken_0x255704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255704u;
        // 0x255708: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255704) {
            ctx->pc = 0x25574Cu;
            goto label_25574c;
        }
    }
    ctx->pc = 0x25570Cu;
label_25570c:
    // 0x25570c: 0x0  nop
    ctx->pc = 0x25570cu;
    // NOP
label_255710:
    // 0x255710: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x255710u;
    {
        const bool branch_taken_0x255710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255710u;
        // 0x255714: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255710) {
            ctx->pc = 0x25574Cu;
            goto label_25574c;
        }
    }
    ctx->pc = 0x255718u;
    // 0x255718: 0xa6a20028  sh          $v0, 0x28($s5)
    ctx->pc = 0x255718u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x25571c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25571cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x255720: 0x8c821588  lw          $v0, 0x1588($a0)
    ctx->pc = 0x255720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5512)));
    // 0x255724: 0x24851588  addiu       $a1, $a0, 0x1588
    ctx->pc = 0x255724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5512));
    // 0x255728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255728u;
    {
        const bool branch_taken_0x255728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255728u;
        // 0x25572c: 0xaea20038  sw          $v0, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255728) {
            ctx->pc = 0x255740u;
            goto label_255740;
        }
    }
    ctx->pc = 0x255730u;
    // 0x255730: 0x8c831588  lw          $v1, 0x1588($a0)
    ctx->pc = 0x255730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5512)));
    // 0x255734: 0x26a20038  addiu       $v0, $s5, 0x38
    ctx->pc = 0x255734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    // 0x255738: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x255738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x25573c: 0x0  nop
    ctx->pc = 0x25573cu;
    // NOP
label_255740:
    // 0x255740: 0xac951588  sw          $s5, 0x1588($a0)
    ctx->pc = 0x255740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5512), GPR_U32(ctx, 21));
    // 0x255744: 0xaea5003c  sw          $a1, 0x3C($s5)
    ctx->pc = 0x255744u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 5));
    // 0x255748: 0x8eaa0070  lw          $t2, 0x70($s5)
    ctx->pc = 0x255748u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_25574c:
    // 0x25574c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x25574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x255750: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x255750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x255754: 0x24c41308  addiu       $a0, $a2, 0x1308
    ctx->pc = 0x255754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x255758: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x255758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x25575c: 0xaea20070  sw          $v0, 0x70($s5)
    ctx->pc = 0x25575cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
    // 0x255760: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x255760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x255764: 0xdc8300e8  ld          $v1, 0xE8($a0)
    ctx->pc = 0x255764u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x255768: 0xdc8200f0  ld          $v0, 0xF0($a0)
    ctx->pc = 0x255768u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x25576c: 0x9286000d  lbu         $a2, 0xD($s4)
    ctx->pc = 0x25576cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x255770: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x255770u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x255774: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x255774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x255778: 0xfc8300e8  sd          $v1, 0xE8($a0)
    ctx->pc = 0x255778u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 232), GPR_U64(ctx, 3));
    // 0x25577c: 0xfc8200f0  sd          $v0, 0xF0($a0)
    ctx->pc = 0x25577cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 240), GPR_U64(ctx, 2));
    // 0x255780: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x255780u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x255784: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x255784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x255788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255788u;
    {
        const bool branch_taken_0x255788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255788u;
        // 0x25578c: 0x30d60001  andi        $s6, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255788) {
            ctx->pc = 0x2557A0u;
            goto label_2557a0;
        }
    }
    ctx->pc = 0x255790u;
    // 0x255790: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x255790u;
    SET_GPR_U32(ctx, 31, 0x255798u);
    ctx->pc = 0x255794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255790u;
    // 0x255794: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x255790u, 0x255798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255798u;
label_255798:
    // 0x255798: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x255798u;
    {
        const bool branch_taken_0x255798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255798u;
        // 0x25579c: 0x96420078  lhu         $v0, 0x78($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255798) {
            ctx->pc = 0x2557C0u;
            goto label_2557c0;
        }
    }
    ctx->pc = 0x2557A0u;
label_2557a0:
    // 0x2557a0: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2557a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2557a4: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x2557A4u;
    SET_GPR_U32(ctx, 31, 0x2557ACu);
    ctx->pc = 0x2557A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557A4u;
    // 0x2557a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x2557A4u, 0x2557ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557ACu;
label_2557ac:
    // 0x2557ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2557acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557b0: 0xc08c2a8  jal         func_230AA0
    ctx->pc = 0x2557B0u;
    SET_GPR_U32(ctx, 31, 0x2557B8u);
    ctx->pc = 0x2557B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557B0u;
    // 0x2557b4: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AA0u, 0x2557B0u, 0x2557B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557B8u;
label_2557b8:
    // 0x2557b8: 0x96420078  lhu         $v0, 0x78($s2)
    ctx->pc = 0x2557b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2557bc: 0x0  nop
    ctx->pc = 0x2557bcu;
    // NOP
label_2557c0:
    // 0x2557c0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2557c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2557c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2557C4u;
    {
        const bool branch_taken_0x2557c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2557C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557C4u;
        // 0x2557c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557c4) {
            ctx->pc = 0x255808u;
            goto label_255808;
        }
    }
    ctx->pc = 0x2557CCu;
    // 0x2557cc: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x2557CCu;
    SET_GPR_U32(ctx, 31, 0x2557D4u);
    ctx->pc = 0x2557D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557CCu;
    // 0x2557d0: 0x26450048  addiu       $a1, $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x2557CCu, 0x2557D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557D4u;
label_2557d4:
    // 0x2557d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2557D4u;
    {
        const bool branch_taken_0x2557d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2557d4) {
            ctx->pc = 0x255808u;
            goto label_255808;
        }
    }
    ctx->pc = 0x2557DCu;
label_2557dc:
    // 0x2557dc: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x2557DCu;
    SET_GPR_U32(ctx, 31, 0x2557E4u);
    ctx->pc = 0x2557E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557DCu;
    // 0x2557e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x2557DCu, 0x2557E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557E4u;
label_2557e4:
    // 0x2557e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2557e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2557e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2557ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557f0: 0xc094cc2  jal         func_253308
    ctx->pc = 0x2557F0u;
    SET_GPR_U32(ctx, 31, 0x2557F8u);
    ctx->pc = 0x2557F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557F0u;
    // 0x2557f4: 0x27a70068  addiu       $a3, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253308u;
    goto label_253308;
    ctx->pc = 0x2557F8u;
label_2557f8:
    // 0x2557f8: 0x96a30028  lhu         $v1, 0x28($s5)
    ctx->pc = 0x2557f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x2557fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2557fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255800: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x255800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x255804: 0xa6a30028  sh          $v1, 0x28($s5)
    ctx->pc = 0x255804u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 3));
label_255808:
    // 0x255808: 0xc095faa  jal         func_257EA8
    ctx->pc = 0x255808u;
    SET_GPR_U32(ctx, 31, 0x255810u);
    ctx->pc = 0x25580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255808u;
    // 0x25580c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA8u, 0x255808u, 0x255810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255810u;
label_255810:
    // 0x255810: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x255810u;
    {
        const bool branch_taken_0x255810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255810u;
        // 0x255814: 0x32c20001  andi        $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255810) {
            ctx->pc = 0x25582Cu;
            goto label_25582c;
        }
    }
    ctx->pc = 0x255818u;
label_255818:
    // 0x255818: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x255818u;
    SET_GPR_U32(ctx, 31, 0x255820u);
    ctx->pc = 0x25581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255818u;
    // 0x25581c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x255818u, 0x255820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255820u;
label_255820:
    // 0x255820: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x255820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x255824: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x255824u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x255828: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x255828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_25582c:
    // 0x25582c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x25582Cu;
    {
        const bool branch_taken_0x25582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25582Cu;
        // 0x255830: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25582c) {
            ctx->pc = 0x255928u;
            goto label_255928;
        }
    }
    ctx->pc = 0x255834u;
    // 0x255834: 0x86a30018  lh          $v1, 0x18($s5)
    ctx->pc = 0x255834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x255838: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x255838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25583c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x25583Cu;
    {
        const bool branch_taken_0x25583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25583Cu;
        // 0x255840: 0x96ab0018  lhu         $t3, 0x18($s5) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25583c) {
            ctx->pc = 0x255924u;
            goto label_255924;
        }
    }
    ctx->pc = 0x255844u;
    // 0x255844: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x255844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x255848: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x255848u;
    {
        const bool branch_taken_0x255848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255848u;
        // 0x25584c: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255848) {
            ctx->pc = 0x255884u;
            goto label_255884;
        }
    }
    ctx->pc = 0x255850u;
    // 0x255850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255850u;
    {
        const bool branch_taken_0x255850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255850u;
        // 0x255854: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255850) {
            ctx->pc = 0x255860u;
            goto label_255860;
        }
    }
    ctx->pc = 0x255858u;
    // 0x255858: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x255858u;
    {
        const bool branch_taken_0x255858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255858u;
        // 0x25585c: 0xb1400  sll         $v0, $t3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255858) {
            ctx->pc = 0x255888u;
            goto label_255888;
        }
    }
    ctx->pc = 0x255860u;
label_255860:
    // 0x255860: 0xc08c204  jal         func_230810
    ctx->pc = 0x255860u;
    SET_GPR_U32(ctx, 31, 0x255868u);
    ctx->pc = 0x255864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255860u;
    // 0x255864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230810u, 0x255860u, 0x255868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255868u;
label_255868:
    // 0x255868: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x255868u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x25586c: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x25586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x255870: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x255870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x255874: 0x96ab0018  lhu         $t3, 0x18($s5)
    ctx->pc = 0x255874u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x255878: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x255878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25587c: 0xa6a20028  sh          $v0, 0x28($s5)
    ctx->pc = 0x25587cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x255880: 0xaea30070  sw          $v1, 0x70($s5)
    ctx->pc = 0x255880u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 3));
label_255884:
    // 0x255884: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x255884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_255888:
    // 0x255888: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x255888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25588c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x255890: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x255890u;
    {
        const bool branch_taken_0x255890 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x255894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255890u;
        // 0x255894: 0x28c20007  slti        $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255890) {
            ctx->pc = 0x2558D8u;
            goto label_2558d8;
        }
    }
    ctx->pc = 0x255898u;
    // 0x255898: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255898u;
    {
        const bool branch_taken_0x255898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255898u;
        // 0x25589c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255898) {
            ctx->pc = 0x2558B0u;
            goto label_2558b0;
        }
    }
    ctx->pc = 0x2558A0u;
    // 0x2558a0: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2558A0u;
    {
        const bool branch_taken_0x2558a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2558A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558A0u;
        // 0x2558a4: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558a0) {
            ctx->pc = 0x2558CCu;
            goto label_2558cc;
        }
    }
    ctx->pc = 0x2558A8u;
    // 0x2558a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2558A8u;
    {
        const bool branch_taken_0x2558a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2558a8) {
            ctx->pc = 0x255928u;
            goto label_255928;
        }
    }
    ctx->pc = 0x2558B0u;
label_2558b0:
    // 0x2558b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2558b4: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2558B4u;
    {
        const bool branch_taken_0x2558b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2558B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558B4u;
        // 0x2558b8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558b4) {
            ctx->pc = 0x2558E4u;
            goto label_2558e4;
        }
    }
    ctx->pc = 0x2558BCu;
    // 0x2558bc: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2558BCu;
    {
        const bool branch_taken_0x2558bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2558C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558BCu;
        // 0x2558c0: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558bc) {
            ctx->pc = 0x255914u;
            goto label_255914;
        }
    }
    ctx->pc = 0x2558C4u;
    // 0x2558c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2558C4u;
    {
        const bool branch_taken_0x2558c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2558c4) {
            ctx->pc = 0x255928u;
            goto label_255928;
        }
    }
    ctx->pc = 0x2558CCu;
label_2558cc:
    // 0x2558cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2558d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2558D0u;
    {
        const bool branch_taken_0x2558d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558D0u;
        // 0x2558d4: 0xa6a20018  sh          $v0, 0x18($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558d0) {
            ctx->pc = 0x255924u;
            goto label_255924;
        }
    }
    ctx->pc = 0x2558D8u;
label_2558d8:
    // 0x2558d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2558d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2558dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2558DCu;
    {
        const bool branch_taken_0x2558dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558DCu;
        // 0x2558e0: 0xa6a20018  sh          $v0, 0x18($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558dc) {
            ctx->pc = 0x255924u;
            goto label_255924;
        }
    }
    ctx->pc = 0x2558E4u;
label_2558e4:
    // 0x2558e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2558e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2558e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2558e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558ec: 0xc096a90  jal         func_25AA40
    ctx->pc = 0x2558ECu;
    SET_GPR_U32(ctx, 31, 0x2558F4u);
    ctx->pc = 0x2558F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2558ECu;
    // 0x2558f0: 0xa6a20018  sh          $v0, 0x18($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA40u, 0x2558ECu, 0x2558F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558F4u;
label_2558f4:
    // 0x2558f4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2558f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2558f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2558f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558fc: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x2558fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x255900: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x255904: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x255904u;
    SET_GPR_U32(ctx, 31, 0x25590Cu);
    ctx->pc = 0x255908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255904u;
    // 0x255908: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304F0u, 0x255904u, 0x25590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25590Cu;
label_25590c:
    // 0x25590c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25590Cu;
    {
        const bool branch_taken_0x25590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25590Cu;
        // 0x255910: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25590c) {
            ctx->pc = 0x255928u;
            goto label_255928;
        }
    }
    ctx->pc = 0x255914u;
label_255914:
    // 0x255914: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x255914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x255918: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x255918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x25591c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x25591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x255920: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x255920u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_255924:
    // 0x255924: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x255924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_255928:
    // 0x255928: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255928u;
    {
        const bool branch_taken_0x255928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255928) {
            ctx->pc = 0x255940u;
            goto label_255940;
        }
    }
    ctx->pc = 0x255930u;
    // 0x255930: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x255930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x255934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x255934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x255938: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255938u;
    {
        const bool branch_taken_0x255938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255938u;
        // 0x25593c: 0x8fa3008c  lw          $v1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255938) {
            ctx->pc = 0x25594Cu;
            goto label_25594c;
        }
    }
    ctx->pc = 0x255940u;
label_255940:
    // 0x255940: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x255940u;
    SET_GPR_U32(ctx, 31, 0x255948u);
    ctx->pc = 0x255944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255940u;
    // 0x255944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x255940u, 0x255948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255948u;
label_255948:
    // 0x255948: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x255948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_25594c:
    // 0x25594c: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x25594Cu;
    {
        const bool branch_taken_0x25594c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25594Cu;
        // 0x255950: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25594c) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x255954u;
    // 0x255954: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x255954u;
    SET_GPR_U32(ctx, 31, 0x25595Cu);
    ctx->pc = 0x255958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255954u;
    // 0x255958: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x255954u, 0x25595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25595Cu;
label_25595c:
    // 0x25595c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x25595Cu;
    {
        const bool branch_taken_0x25595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25595Cu;
        // 0x255960: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25595c) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x255964u;
label_255964:
    // 0x255964: 0x32d10004  andi        $s1, $s6, 0x4
    ctx->pc = 0x255964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_255968:
    // 0x255968: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x255968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25596c:
    // 0x25596c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25596cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255970: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x255974: 0xdc6201b8  ld          $v0, 0x1B8($v1)
    ctx->pc = 0x255974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x255978: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x255978u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25597c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25597Cu;
    {
        const bool branch_taken_0x25597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25597Cu;
        // 0x255980: 0xfc6201b8  sd          $v0, 0x1B8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 440), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25597c) {
            ctx->pc = 0x2559C4u;
            goto label_2559c4;
        }
    }
    ctx->pc = 0x255984u;
label_255984:
    // 0x255984: 0x1620004e  bnez        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x255984u;
    {
        const bool branch_taken_0x255984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x255984) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x25598Cu;
    // 0x25598c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25598Cu;
    SET_GPR_U32(ctx, 31, 0x255994u);
    ctx->pc = 0x255990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25598Cu;
    // 0x255990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25598Cu, 0x255994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255994u;
label_255994:
    // 0x255994: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x255994u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x255998: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25599c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2559a0: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x2559A0u;
    SET_GPR_U32(ctx, 31, 0x2559A8u);
    ctx->pc = 0x2559A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559A0u;
    // 0x2559a4: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x2559A0u, 0x2559A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559A8u;
label_2559a8:
    // 0x2559a8: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2559a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2559ac: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2559ACu;
    {
        const bool branch_taken_0x2559ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2559B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559ACu;
        // 0x2559b0: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559ac) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x2559B4u;
    // 0x2559b4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2559B4u;
    SET_GPR_U32(ctx, 31, 0x2559BCu);
    ctx->pc = 0x2559B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559B4u;
    // 0x2559b8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2559B4u, 0x2559BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559BCu;
label_2559bc:
    // 0x2559bc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2559BCu;
    {
        const bool branch_taken_0x2559bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2559C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559BCu;
        // 0x2559c0: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559bc) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x2559C4u;
label_2559c4:
    // 0x2559c4: 0x1620003e  bnez        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2559C4u;
    {
        const bool branch_taken_0x2559c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2559C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559C4u;
        // 0x2559c8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559c4) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2559CCu;
    // 0x2559cc: 0x16520012  bne         $s2, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2559CCu;
    {
        const bool branch_taken_0x2559cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 18));
        ctx->pc = 0x2559D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559CCu;
        // 0x2559d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559cc) {
            ctx->pc = 0x255A18u;
            goto label_255a18;
        }
    }
    ctx->pc = 0x2559D4u;
    // 0x2559d4: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x2559d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x2559d8: 0xc08a254  jal         func_228950
    ctx->pc = 0x2559D8u;
    SET_GPR_U32(ctx, 31, 0x2559E0u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2559D8u, 0x2559E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559E0u;
label_2559e0:
    // 0x2559e0: 0x8bd10013  lwl         $s1, 0x13($fp)
    ctx->pc = 0x2559e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
    // 0x2559e4: 0x9bd10010  lwr         $s1, 0x10($fp)
    ctx->pc = 0x2559e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x2559e8: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x2559e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x2559ec: 0xc08a254  jal         func_228950
    ctx->pc = 0x2559ECu;
    SET_GPR_U32(ctx, 31, 0x2559F4u);
    ctx->pc = 0x2559F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559ECu;
    // 0x2559f0: 0x2228024  and         $s0, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2559ECu, 0x2559F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559F4u;
label_2559f4:
    // 0x2559f4: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2559F4u;
    {
        const bool branch_taken_0x2559f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2559f4) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x2559FCu;
    // 0x2559fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2559fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x255a00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x255a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x255a04: 0x8ee50014  lw          $a1, 0x14($s7)
    ctx->pc = 0x255a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x255a08: 0xc092ad2  jal         func_24AB48
    ctx->pc = 0x255A08u;
    SET_GPR_U32(ctx, 31, 0x255A10u);
    ctx->pc = 0x255A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A08u;
    // 0x255a0c: 0x2242024  and         $a0, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AB48u, 0x255A08u, 0x255A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A10u;
label_255a10:
    // 0x255a10: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x255A10u;
    {
        const bool branch_taken_0x255a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A10u;
        // 0x255a14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a10) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x255A18u;
label_255a18:
    // 0x255a18: 0x14d20005  bne         $a2, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x255A18u;
    {
        const bool branch_taken_0x255a18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        ctx->pc = 0x255A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A18u;
        // 0x255a1c: 0x8ee30008  lw          $v1, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a18) {
            ctx->pc = 0x255A30u;
            goto label_255a30;
        }
    }
    ctx->pc = 0x255A20u;
    // 0x255a20: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x255a20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255a24: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x255a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255a28: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x255a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x255a2c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x255a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_255a30:
    // 0x255a30: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x255a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x255a34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x255A34u;
    {
        const bool branch_taken_0x255a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A34u;
        // 0x255a38: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a34) {
            ctx->pc = 0x255A64u;
            goto label_255a64;
        }
    }
    ctx->pc = 0x255A3Cu;
    // 0x255a3c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x255a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a40: 0x88e9000b  lwl         $t1, 0xB($a3)
    ctx->pc = 0x255a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x255a44: 0x98e90008  lwr         $t1, 0x8($a3)
    ctx->pc = 0x255a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x255a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x255a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x255a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a54: 0xc09648a  jal         func_259228
    ctx->pc = 0x255A54u;
    SET_GPR_U32(ctx, 31, 0x255A5Cu);
    ctx->pc = 0x255A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A54u;
    // 0x255a58: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259228u, 0x255A54u, 0x255A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A5Cu;
label_255a5c:
    // 0x255a5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x255A5Cu;
    {
        const bool branch_taken_0x255a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A5Cu;
        // 0x255a60: 0x8fa2008c  lw          $v0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a5c) {
            ctx->pc = 0x255AA8u;
            goto label_255aa8;
        }
    }
    ctx->pc = 0x255A64u;
label_255a64:
    // 0x255a64: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x255a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x255a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255A68u;
    {
        const bool branch_taken_0x255a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A68u;
        // 0x255a6c: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a68) {
            ctx->pc = 0x255A78u;
            goto label_255a78;
        }
    }
    ctx->pc = 0x255A70u;
    // 0x255a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x255a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x255a74: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x255a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_255a78:
    // 0x255a78: 0x8a820007  lwl         $v0, 0x7($s4)
    ctx->pc = 0x255a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x255a7c: 0x9a820004  lwr         $v0, 0x4($s4)
    ctx->pc = 0x255a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x255a80: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x255a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a84: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x255a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x255a88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x255a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x255a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a94: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x255a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x255a98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x255a98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a9c: 0xc09648a  jal         func_259228
    ctx->pc = 0x255A9Cu;
    SET_GPR_U32(ctx, 31, 0x255AA4u);
    ctx->pc = 0x255AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A9Cu;
    // 0x255aa0: 0x240a0014  addiu       $t2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259228u, 0x255A9Cu, 0x255AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AA4u;
label_255aa4:
    // 0x255aa4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x255aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_255aa8:
    // 0x255aa8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x255AA8u;
    {
        const bool branch_taken_0x255aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AA8u;
        // 0x255aac: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255aa8) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x255AB0u;
    // 0x255ab0: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x255AB0u;
    SET_GPR_U32(ctx, 31, 0x255AB8u);
    ctx->pc = 0x255AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AB0u;
    // 0x255ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x255AB0u, 0x255AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AB8u;
label_255ab8:
    // 0x255ab8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x255AB8u;
    {
        const bool branch_taken_0x255ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AB8u;
        // 0x255abc: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ab8) {
            ctx->pc = 0x255AE8u;
            goto label_255ae8;
        }
    }
    ctx->pc = 0x255AC0u;
label_255ac0:
    // 0x255ac0: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x255AC0u;
    {
        const bool branch_taken_0x255ac0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x255ac0) {
            ctx->pc = 0x255AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255AC0u;
            // 0x255ac4: 0x8ea20030  lw          $v0, 0x30($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255AC8u;
            goto label_255ac8;
        }
    }
    ctx->pc = 0x255AC8u;
label_255ac8:
    // 0x255ac8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x255ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x255acc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255ACCu;
    {
        const bool branch_taken_0x255acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255acc) {
            ctx->pc = 0x255ADCu;
            goto label_255adc;
        }
    }
    ctx->pc = 0x255AD4u;
    // 0x255ad4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x255AD4u;
    SET_GPR_U32(ctx, 31, 0x255ADCu);
    ctx->pc = 0x255AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AD4u;
    // 0x255ad8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x255AD4u, 0x255ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255ADCu;
label_255adc:
    // 0x255adc: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x255ADCu;
    SET_GPR_U32(ctx, 31, 0x255AE4u);
    ctx->pc = 0x255AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255ADCu;
    // 0x255ae0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x255ADCu, 0x255AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AE4u;
label_255ae4:
    // 0x255ae4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x255ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_255ae8:
    // 0x255ae8: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x255ae8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x255aec: 0xdfb70110  ld          $s7, 0x110($sp)
    ctx->pc = 0x255aecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x255af0: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x255af0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255af4: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x255af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255af8: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x255af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x255afc: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x255afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255b00: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x255b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x255b04: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x255b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x255b08: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x255b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x255B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B0Cu;
        // 0x255b10: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255B14u;
    // 0x255b14: 0x0  nop
    ctx->pc = 0x255b14u;
    // NOP
    if (ctx->pc == 0x255b14u) { ctx->pc = 0x255b18u; }
}
