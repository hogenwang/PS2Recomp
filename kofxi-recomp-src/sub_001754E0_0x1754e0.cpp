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

// Function: sub_001754E0
// Address: 0x1754e0 - 0x1755e0
void sub_001754E0_0x1754e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001754E0_0x1754e0");
#endif

    switch (ctx->pc) {
        case 0x175540u: goto label_175540;
        case 0x1755ccu: goto label_1755cc;
        default: break;
    }

    ctx->pc = 0x1754e0u;

    // 0x1754e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1754e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1754e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1754e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1754ec: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1754ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1754f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1754f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1754f4: 0x24423790  addiu       $v0, $v0, 0x3790
    ctx->pc = 0x1754f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14224));
    // 0x1754f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1754f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754fc: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1754fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x175500: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x175500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x175504: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175508: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x175508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17550c: 0x24846220  addiu       $a0, $a0, 0x6220
    ctx->pc = 0x17550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25120));
    // 0x175510: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x175510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x175514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175518: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x175518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17551c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17551cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175520: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x175520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x175524: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x175524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175528: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x175528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17552c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175530: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x175530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175534: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x175534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175538: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175538u;
    SET_GPR_U32(ctx, 31, 0x175540u);
    ctx->pc = 0x17553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175538u;
    // 0x17553c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x175538u, 0x175540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175540u;
label_175540:
    // 0x175540: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x175544: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175548: 0x8484da7a  lh          $a0, -0x2586($a0)
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957690)));
    // 0x17554c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x175550: 0xa464da7a  sh          $a0, -0x2586($v1)
    ctx->pc = 0x175550u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957690), (uint16_t)GPR_U32(ctx, 4));
    // 0x175554: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x175554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x175558: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x175558u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17555c: 0x463001c  bgezl       $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17555Cu;
    {
        const bool branch_taken_0x17555c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17555c) {
            ctx->pc = 0x175560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17555Cu;
            // 0x175560: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1755D0u;
            goto label_1755d0;
        }
    }
    ctx->pc = 0x175564u;
    // 0x175564: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x175564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x175568: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17556c: 0xa464da7a  sh          $a0, -0x2586($v1)
    ctx->pc = 0x17556cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957690), (uint16_t)GPR_U32(ctx, 4));
    // 0x175570: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175574: 0x8464da78  lh          $a0, -0x2588($v1)
    ctx->pc = 0x175574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957688)));
    // 0x175578: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17557c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x175580: 0xa464da78  sh          $a0, -0x2588($v1)
    ctx->pc = 0x175580u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957688), (uint16_t)GPR_U32(ctx, 4));
    // 0x175584: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x175584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x175588: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x175588u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17558c: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17558Cu;
    {
        const bool branch_taken_0x17558c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17558c) {
            ctx->pc = 0x1755CCu;
            goto label_1755cc;
        }
    }
    ctx->pc = 0x175594u;
    // 0x175594: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17559c: 0xa440da78  sh          $zero, -0x2588($v0)
    ctx->pc = 0x17559cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957688), (uint16_t)GPR_U32(ctx, 0));
    // 0x1755a0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1755a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1755a4: 0x2031004  sllv        $v0, $v1, $s0
    ctx->pc = 0x1755a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1755a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1755a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1755ac: 0x401827  not         $v1, $v0
    ctx->pc = 0x1755acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1755b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1755b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1755b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1755b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1755b8: 0x9043daf0  lbu         $v1, -0x2510($v0)
    ctx->pc = 0x1755b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957808)));
    // 0x1755bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1755bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1755c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1755c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1755c4: 0xc0682e0  jal         func_1A0B80
    ctx->pc = 0x1755C4u;
    SET_GPR_U32(ctx, 31, 0x1755CCu);
    ctx->pc = 0x1755C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755C4u;
    // 0x1755c8: 0xa043daf0  sb          $v1, -0x2510($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957808), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x1755C4u, 0x1755CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755CCu;
label_1755cc:
    // 0x1755cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1755ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1755d0:
    // 0x1755d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1755d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1755d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1755D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1755D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755D4u;
        // 0x1755d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1755D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1755DCu;
    // 0x1755dc: 0x0  nop
    ctx->pc = 0x1755dcu;
    // NOP
}
